
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {int reshape_backwards; scalar_t__ major_version; scalar_t__ persistent; scalar_t__ delta_disks; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static ssize_t
FUNC_1(struct mddev *VAR_2, const char *VAR_3, size_t VAR_4)
{
 int VAR_5 = 0;
 if (FUNC_0(VAR_3, "forwards"))
  VAR_5 = 0;
 else if (FUNC_0(VAR_3, "backwards"))
  VAR_5 = 1;
 else
  return -VAR_1;
 if (VAR_2->reshape_backwards == VAR_5)
  return VAR_4;


 if (VAR_2->delta_disks)
  return -VAR_0;

 if (VAR_2->persistent &&
     VAR_2->major_version == 0)
  return -VAR_1;

 VAR_2->reshape_backwards = VAR_5;
 return VAR_4;
}
