
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int byte ;
struct TYPE_2__ {int integer; } ;


 int FUNC_0 (unsigned int*,int,int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_1 (byte *VAR_1, int VAR_2, int VAR_3) {
 int VAR_4, VAR_5;
 byte *VAR_6;
 int VAR_7;

 if ( !VAR_0->integer ) {
  FUNC_0( (unsigned *)VAR_1, VAR_2, VAR_3 );
  return;
 }

 if ( VAR_2 == 1 && VAR_3 == 1 ) {
  return;
 }

 VAR_7 = VAR_2 * 4;
 VAR_6 = VAR_1;
 VAR_2 >>= 1;
 VAR_3 >>= 1;

 if ( VAR_2 == 0 || VAR_3 == 0 ) {
  VAR_2 += VAR_3;
  for (VAR_4=0 ; VAR_4<VAR_2 ; VAR_4++, VAR_6+=4, VAR_1+=8 ) {
   VAR_6[0] = ( VAR_1[0] + VAR_1[4] )>>1;
   VAR_6[1] = ( VAR_1[1] + VAR_1[5] )>>1;
   VAR_6[2] = ( VAR_1[2] + VAR_1[6] )>>1;
   VAR_6[3] = ( VAR_1[3] + VAR_1[7] )>>1;
  }
  return;
 }

 for (VAR_4=0 ; VAR_4<VAR_3 ; VAR_4++, VAR_1+=VAR_7) {
  for (VAR_5=0 ; VAR_5<VAR_2 ; VAR_5++, VAR_6+=4, VAR_1+=8) {
   VAR_6[0] = (VAR_1[0] + VAR_1[4] + VAR_1[VAR_7+0] + VAR_1[VAR_7+4])>>2;
   VAR_6[1] = (VAR_1[1] + VAR_1[5] + VAR_1[VAR_7+1] + VAR_1[VAR_7+5])>>2;
   VAR_6[2] = (VAR_1[2] + VAR_1[6] + VAR_1[VAR_7+2] + VAR_1[VAR_7+6])>>2;
   VAR_6[3] = (VAR_1[3] + VAR_1[7] + VAR_1[VAR_7+3] + VAR_1[VAR_7+7])>>2;
  }
 }
}
