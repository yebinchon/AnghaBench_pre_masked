
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned long*,int,int ,int) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;

int FUNC_4(unsigned long *VAR_2, int VAR_3)
{
 int VAR_4;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_2, VAR_3,
          FUNC_1(VAR_1), 1);
 if (VAR_5)
  return VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
  FUNC_3(FUNC_0(VAR_2[VAR_4]), FUNC_0(VAR_2[VAR_4]) + VAR_0);

 return 0;
}
