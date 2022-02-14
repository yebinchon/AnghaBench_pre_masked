
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct channel {int random_seed; } ;


 int* VAR_0 ;

__attribute__((used)) static int FUNC_0( struct channel *VAR_1, int VAR_2, int VAR_3 ) {
 int VAR_4 = 0;
 switch( VAR_3 ) {
  default:
   VAR_4 = VAR_0[ VAR_2 & 0x1F ];
   if( ( VAR_2 & 0x20 ) > 0 ) {
    VAR_4 = -VAR_4;
   }
   break;
  case 6:
   VAR_4 = ( ( ( VAR_2 + 0x20 ) & 0x3F ) << 3 ) - 255;
   break;
  case 1: case 7:
   VAR_4 = 255 - ( ( ( VAR_2 + 0x20 ) & 0x3F ) << 3 );
   break;
  case 2: case 5:
   VAR_4 = ( VAR_2 & 0x20 ) > 0 ? 255 : -255;
   break;
  case 3: case 8:
   VAR_4 = ( VAR_1->random_seed >> 20 ) - 255;
   VAR_1->random_seed = ( VAR_1->random_seed * 65 + 17 ) & 0x1FFFFFFF;
   break;
 }
 return VAR_4;
}
