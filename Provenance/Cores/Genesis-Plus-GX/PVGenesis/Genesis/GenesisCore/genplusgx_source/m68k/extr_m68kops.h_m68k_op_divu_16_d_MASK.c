
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
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_8 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(void)
{
  uint* VAR_11 = &VAR_1;
  uint VAR_12 = FUNC_0(VAR_2);

  if(VAR_12 != 0)
  {
    uint VAR_13 = *VAR_11 / VAR_12;
    uint VAR_14 = *VAR_11 % VAR_12;

    if(VAR_13 < 0x10000)
    {
      FUNC_4(*VAR_11,VAR_12);
      VAR_7 = VAR_13;
      VAR_5 = FUNC_2(VAR_13);
      VAR_6 = VAR_9;
      VAR_4 = VAR_0;
      *VAR_11 = FUNC_1(FUNC_0(VAR_13) | (VAR_14 << 16));
      return;
    }
    FUNC_3(7 * 10);
    VAR_6 = VAR_10;
    VAR_5 = VAR_8;
    VAR_4 = VAR_0;
    return;
  }
  VAR_4 = VAR_0;
  FUNC_5(VAR_3);
}
