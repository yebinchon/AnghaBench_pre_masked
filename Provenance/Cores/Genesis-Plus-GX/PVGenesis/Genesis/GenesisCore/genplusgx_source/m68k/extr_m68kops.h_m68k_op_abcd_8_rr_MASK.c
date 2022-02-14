
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(void)
{
  uint* VAR_7 = &VAR_0;
  uint VAR_8 = VAR_1;
  uint VAR_9 = *VAR_7;
  uint VAR_10 = FUNC_1(VAR_8) + FUNC_1(VAR_9) + FUNC_5();

  VAR_4 = ~VAR_10;

  if(VAR_10 > 9)
    VAR_10 += 6;
  VAR_10 += FUNC_0(VAR_8) + FUNC_0(VAR_9);
  VAR_5 = VAR_2 = (VAR_10 > 0x99) << 8;
  if(VAR_2)
    VAR_10 -= 0xa0;

  VAR_4 &= VAR_10;
  VAR_3 = FUNC_4(VAR_10);

  VAR_10 = FUNC_2(VAR_10);
  VAR_6 |= VAR_10;

  *VAR_7 = FUNC_3(*VAR_7) | VAR_10;
}
