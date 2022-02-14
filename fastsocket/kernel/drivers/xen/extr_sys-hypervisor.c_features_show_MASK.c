
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hyp_sysfs_attr {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;

__attribute__((used)) static ssize_t FUNC_1(struct hyp_sysfs_attr *VAR_1, char *VAR_2)
{
 ssize_t VAR_3;
 int VAR_4;

 VAR_3 = 0;
 for (VAR_4 = VAR_0-1; VAR_4 >= 0; VAR_4--) {
  int VAR_5 = FUNC_0(VAR_4, VAR_2 + VAR_3);
  if (VAR_5 < 0) {
   if (VAR_3 == 0)
    VAR_3 = VAR_5;
   break;
  }
  VAR_3 += VAR_5;
 }
 if (VAR_3 > 0)
  VAR_2[VAR_3++] = '\n';

 return VAR_3;
}
