
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {int major_version; int minor_version; char* metadata_type; scalar_t__ external; scalar_t__ persistent; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,...) ;

__attribute__((used)) static ssize_t
FUNC_1(struct mddev *VAR_0, char *VAR_1)
{
 if (VAR_0->persistent)
  return FUNC_0(VAR_1, "%d.%d\n",
          VAR_0->major_version, VAR_0->minor_version);
 else if (VAR_0->external)
  return FUNC_0(VAR_1, "external:%s\n", VAR_0->metadata_type);
 else
  return FUNC_0(VAR_1, "none\n");
}
