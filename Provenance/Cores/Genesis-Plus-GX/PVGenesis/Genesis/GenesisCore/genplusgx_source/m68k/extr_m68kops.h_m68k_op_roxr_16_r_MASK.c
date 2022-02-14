
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
 int VAR_7 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int) ;
 int VAR_8 ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(void)
{
  uint* VAR_9 = &VAR_2;
  uint VAR_10 = VAR_1 & 0x3f;

  if(VAR_10 != 0)
  {
    uint VAR_11 = VAR_10 % 17;
    uint VAR_12 = FUNC_0(*VAR_9);
    uint VAR_13 = FUNC_3(VAR_12 | (FUNC_5() << 16), VAR_11);

    FUNC_4(VAR_10 * VAR_0);

    VAR_3 = VAR_6 = VAR_13 >> 8;
    VAR_13 = FUNC_0(VAR_13);

    *VAR_9 = FUNC_1(*VAR_9) | VAR_13;
    VAR_4 = FUNC_2(VAR_13);
    VAR_7 = VAR_13;
    VAR_5 = VAR_8;
    return;
  }

  VAR_3 = VAR_6;
  VAR_4 = FUNC_2(*VAR_9);
  VAR_7 = FUNC_0(*VAR_9);
  VAR_5 = VAR_8;
}
