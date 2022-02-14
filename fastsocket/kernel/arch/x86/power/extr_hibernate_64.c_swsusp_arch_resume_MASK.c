
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (void*,int *,int) ;
 void* VAR_3 ;
 int FUNC_2 () ;
 int VAR_4 ;
 int FUNC_3 () ;

int FUNC_4(void)
{
 int VAR_5;


 if ((VAR_5 = FUNC_3()))
  return VAR_5;

 VAR_3 = (void *)FUNC_0(VAR_1);
 if (!VAR_3)
  return -VAR_0;
 FUNC_1(VAR_3, &VAR_2,
        &VAR_4 - &VAR_2);

 FUNC_2();
 return 0;
}
