
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nameidata {int dummy; } ;
struct TYPE_2__ {int name; } ;
struct dentry {TYPE_1__ d_name; } ;


 scalar_t__ FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int ,char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (struct nameidata*) ;

__attribute__((used)) static void
FUNC_4(struct dentry *VAR_1, struct nameidata *VAR_2, void *VAR_3)
{
 char *VAR_4 = FUNC_3(VAR_2);

 FUNC_1(VAR_0, " %s %s\n", VAR_1->d_name.name,
  FUNC_0(VAR_4) ? "<error>" : VAR_4);
 if (!FUNC_0(VAR_4))
  FUNC_2(VAR_4);
}
