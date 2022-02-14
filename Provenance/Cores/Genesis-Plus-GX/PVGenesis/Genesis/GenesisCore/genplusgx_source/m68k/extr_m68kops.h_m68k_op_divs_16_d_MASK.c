
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;
typedef scalar_t__ uint ;
typedef int sint ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (scalar_t__,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(void)
{
  uint* VAR_12 = &VAR_1;
  sint VAR_13 = FUNC_0(VAR_2);
  sint VAR_14;
  sint VAR_15;

  if(VAR_13 != 0)
  {
    FUNC_5(*VAR_12,VAR_13);

    if((uint32)*VAR_12 == 0x80000000 && VAR_13 == -1)
    {
      VAR_7 = 0;
      VAR_5 = VAR_8;
      VAR_6 = VAR_10;
      VAR_4 = VAR_0;
      *VAR_12 = 0;
      return;
    }

    VAR_14 = FUNC_1(*VAR_12) / VAR_13;
    VAR_15 = FUNC_1(*VAR_12) % VAR_13;

    if(VAR_14 == FUNC_0(VAR_14))
    {
      VAR_7 = VAR_14;
      VAR_5 = FUNC_4(VAR_14);
      VAR_6 = VAR_10;
      VAR_4 = VAR_0;
      *VAR_12 = FUNC_3(FUNC_2(VAR_14) | (VAR_15 << 16));
      return;
    }
    VAR_6 = VAR_11;
    VAR_5 = VAR_9;
    VAR_4 = VAR_0;
    return;
  }
  VAR_4 = VAR_0;
  FUNC_6(VAR_3);
}
