
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_0(void* VAR_6, unsigned int VAR_7, unsigned int VAR_8)
{
   uint32_t* VAR_9 = VAR_6;
   int VAR_10;
   for (VAR_10=0; VAR_10<VAR_7/VAR_2; ++VAR_10) {
      switch ((VAR_10 % VAR_8) / (VAR_5 / 8)) {
      case 0: *VAR_9 = VAR_4 | VAR_3 | VAR_1; break;
      case 1: *VAR_9 = 0; break;
      case 2: *VAR_9 = VAR_4; break;
      case 3: *VAR_9 = VAR_3; break;
      case 4: *VAR_9 = VAR_1; break;
      case 5: *VAR_9 = VAR_3 | VAR_1; break;
      case 6: *VAR_9 = VAR_4 | VAR_1; break;
      case 7: *VAR_9 = VAR_4 | VAR_3; break;
      }
      *VAR_9 |= VAR_0;
      ++VAR_9;
   }
}
