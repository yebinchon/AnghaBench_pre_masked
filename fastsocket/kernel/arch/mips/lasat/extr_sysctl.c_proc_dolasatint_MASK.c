
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int loff_t ;
typedef int ctl_table ;


 int FUNC_0 () ;
 int FUNC_1 (int *,int,void*,size_t*,int *) ;

int FUNC_2(ctl_table *VAR_0, int VAR_1,
         void *VAR_2, size_t *VAR_3, loff_t *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 if ((!VAR_1) || VAR_5)
  return VAR_5;

 FUNC_0();

 return 0;
}
