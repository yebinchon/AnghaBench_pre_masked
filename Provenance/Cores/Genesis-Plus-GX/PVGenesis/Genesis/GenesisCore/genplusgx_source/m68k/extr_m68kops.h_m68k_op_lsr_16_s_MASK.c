
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
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int) ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_3(void)
{
  uint* VAR_10 = &VAR_1;
  uint VAR_11 = (((VAR_8 >> 9) - 1) & 7) + 1;
  uint VAR_12 = FUNC_0(*VAR_10);
  uint VAR_13 = VAR_12 >> VAR_11;

  if(VAR_11 != 0)
    FUNC_2(VAR_11 * VAR_0);

  *VAR_10 = FUNC_1(*VAR_10) | VAR_13;

  VAR_3 = VAR_7;
  VAR_6 = VAR_13;
  VAR_5 = VAR_2 = VAR_12 << (9-VAR_11);
  VAR_4 = VAR_9;
}
