
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
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(void)
{
  uint* VAR_10 = &VAR_1;
  uint VAR_11 = FUNC_3();

  if(VAR_11 != 0)
  {
    uint VAR_12 = *VAR_10 / VAR_11;
    uint VAR_13 = *VAR_10 % VAR_11;

    if(VAR_12 < 0x10000)
    {
      FUNC_5(*VAR_10,VAR_11);
      VAR_6 = VAR_12;
      VAR_4 = FUNC_2(VAR_12);
      VAR_5 = VAR_8;
      VAR_3 = VAR_0;
      *VAR_10 = FUNC_1(FUNC_0(VAR_12) | (VAR_13 << 16));
      return;
    }
    FUNC_4(7 *10);
    VAR_5 = VAR_9;
    VAR_4 = VAR_7;
    VAR_3 = VAR_0;
    return;
  }
  VAR_3 = VAR_0;
  FUNC_6(VAR_2);
}
