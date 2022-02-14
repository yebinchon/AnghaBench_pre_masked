
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int imageUsed; int* image; } ;
typedef TYPE_1__ segment_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;

void FUNC_1( segment_t *VAR_1, int VAR_2 ) {
 if ( VAR_1->imageUsed >= VAR_0 - 4) {
  FUNC_0( "MAX_IMAGE" );
 }
 VAR_1->image[ VAR_1->imageUsed ] = VAR_2 & 255;
 VAR_1->image[ VAR_1->imageUsed + 1 ] = ( VAR_2 >> 8 ) & 255;
 VAR_1->image[ VAR_1->imageUsed + 2 ] = ( VAR_2 >> 16 ) & 255;
 VAR_1->image[ VAR_1->imageUsed + 3 ] = ( VAR_2 >> 24 ) & 255;
 VAR_1->imageUsed += 4;
}
