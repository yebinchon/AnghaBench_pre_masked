
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef scalar_t__ int16 ;


 scalar_t__* VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;

__attribute__((used)) static void FUNC_0(void *VAR_4, uint8 *VAR_5, int VAR_6)
{
 int16 *VAR_7 = (int16*)VAR_5;
 VAR_6 >>= 1;

 while(VAR_6)
 {
  int16 VAR_8 = 0;
  if(VAR_1)
  {
   VAR_8 = VAR_0[VAR_2];
   VAR_2 = (VAR_2 + 1) % VAR_3;
   VAR_1--;
  }
  else VAR_8 = 0;

  *VAR_7 = VAR_8;
  VAR_7++;
  VAR_6--;
 }
}
