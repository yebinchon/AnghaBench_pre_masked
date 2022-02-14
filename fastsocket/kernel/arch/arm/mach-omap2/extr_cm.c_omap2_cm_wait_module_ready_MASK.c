
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int s16 ;


 int FUNC_0 (int*) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int) ;

int FUNC_6(s16 VAR_4, u8 VAR_5, u8 VAR_6)
{
 int VAR_7 = 0, VAR_8 = 0;
 u8 VAR_9;
 u32 VAR_10;

 if (!VAR_5 || (VAR_5 > FUNC_0(VAR_3)))
  return -VAR_1;

 VAR_9 = VAR_3[VAR_5 - 1];

 if (FUNC_3())
  VAR_7 = VAR_6;
 else if (FUNC_4())
  VAR_7 = 0;
 else
  FUNC_1();

 VAR_10 = 1 << VAR_6;


 while (((FUNC_2(VAR_4, VAR_9) & VAR_10) != VAR_7) &&
        (VAR_8++ < VAR_2))
  FUNC_5(1);

 return (VAR_8 < VAR_2) ? 0 : -VAR_0;
}
