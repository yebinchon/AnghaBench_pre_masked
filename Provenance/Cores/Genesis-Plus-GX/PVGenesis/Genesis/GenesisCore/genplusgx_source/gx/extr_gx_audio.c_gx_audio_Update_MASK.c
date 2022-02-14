
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int s16 ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (void*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *) ;
 int* VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__* VAR_10 ;

int FUNC_5(void)
{
  if (!VAR_5)
  {

    s16 *VAR_11 = (s16 *)(VAR_10[VAR_8]);


    int VAR_12 = FUNC_4(VAR_11) * 4;
    FUNC_3((void *)VAR_11, VAR_12);
    FUNC_0((u32) VAR_11, VAR_12);
    VAR_8 = (VAR_8 + 1) % VAR_2;
    VAR_5 = 1;
    if (!VAR_4)
    {

      FUNC_2();
      FUNC_1();
      VAR_4 = 1;
    }

    return VAR_3;
  }

  return VAR_1;
}
