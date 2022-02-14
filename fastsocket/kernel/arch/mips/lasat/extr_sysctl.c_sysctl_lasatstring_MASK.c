
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ctl_table ;


 int FUNC_0 () ;
 int FUNC_1 (int *,void*,size_t*,void*,size_t) ;

int FUNC_2(ctl_table *VAR_0,
  void *VAR_1, size_t *VAR_2,
  void *VAR_3, size_t VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 if (VAR_3 && VAR_4)
  FUNC_0();

 return 0;
}
