
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
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_7 ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int) ;
 int VAR_8 ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(void)
{
  uint* VAR_9 = &VAR_1;
  uint VAR_10 = (((VAR_7 >> 9) - 1) & 7) + 1;
  uint VAR_11 = FUNC_0(*VAR_9);
  uint VAR_12 = FUNC_3(VAR_11 | (FUNC_5() << 8), VAR_10);

  if(VAR_10 != 0)
    FUNC_4(VAR_10 * VAR_0);

  VAR_2 = VAR_5 = VAR_12;
  VAR_12 = FUNC_0(VAR_12);

  *VAR_9 = FUNC_1(*VAR_9) | VAR_12;

  VAR_3 = FUNC_2(VAR_12);
  VAR_6 = VAR_12;
  VAR_4 = VAR_8;
}
