
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int* VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(void)
{
  uint VAR_3 = 0;
  uint VAR_4 = FUNC_0();
  uint VAR_5 = VAR_0;
  uint VAR_6 = 0;

  for(; VAR_3 < 16; VAR_3++)
    if(VAR_4 & (1 << VAR_3))
    {
      VAR_5 -= 4;
      FUNC_2(VAR_5+2, VAR_2[15-VAR_3] & 0xFFFF );
      FUNC_2(VAR_5, (VAR_2[15-VAR_3] >> 16) & 0xFFFF );
      VAR_6++;
    }
  VAR_0 = VAR_5;

  FUNC_1(VAR_6 * VAR_1);
}
