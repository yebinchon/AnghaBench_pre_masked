
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct saa7146_dev {int dummy; } ;
struct TYPE_2__ {int hps_coeff; int weight_sum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__* VAR_5 ;
 TYPE_1__* VAR_6 ;

__attribute__((used)) static int FUNC_0(struct saa7146_dev *VAR_7,
 int VAR_8, int VAR_9, int VAR_10,
 u32* VAR_11, u32* VAR_12, u32* VAR_13, u32* VAR_14)
{

 u32 VAR_15 = 0, VAR_16 = 0, VAR_17 = 0, VAR_18 = 0, VAR_19 = 0;

 u32 VAR_20 = 0, VAR_21 = 0, VAR_22 =0;

 u32 VAR_23 = 0;


 u32 VAR_24 = 0, VAR_25 = 0;

 if ( 0 == VAR_9 ) {
  return -VAR_0;
 }


 *VAR_11 &= ~VAR_1;





 if (VAR_8 > VAR_9) {
  VAR_16 = VAR_8 / VAR_9;
 }
 else {

  VAR_16 = 1;
 }



 if ( 0 != VAR_10 ) {


  *VAR_11 |= VAR_1;

  while (VAR_8 / VAR_16 >= 384 )
   VAR_16++;
 }


 else {
  while ( VAR_8 / VAR_16 >= 768 )
   VAR_16++;
 }


 if ( VAR_16 > 64 )
  VAR_16 = 64;


 VAR_17 = 0;


 VAR_18 = VAR_6[( (VAR_16 - 1) < 63 ? (VAR_16 - 1) : 63 )].hps_coeff;
 VAR_19 = VAR_18;




 if ( (VAR_8 == VAR_9) && ( 1 == VAR_16 ) )
  VAR_22 = 0x400;
 else
  VAR_22 = ( (1024 * VAR_8) / (VAR_9 * VAR_16) ) + VAR_16;


 VAR_21 = 0;


 if ( 0x400 == VAR_22 )
  VAR_20 = 1;
 else
  VAR_20 = 0;



 if( 1 == VAR_16 ) {
  VAR_17 = 1;
  VAR_15 = 0;
 } else {
  VAR_17 = 0;


  VAR_24 = VAR_6[( (VAR_16 - 1) < 63 ? (VAR_16 - 1) : 63 )].weight_sum;

  for (VAR_25 = 0; VAR_5[VAR_25] != 0; VAR_25++) {
   if (VAR_5[VAR_25] >= VAR_24)
    break;
  }

  VAR_15 = VAR_25;
 }




 if ( VAR_22 == 0x400)
  VAR_23 = 0x00;
 else if ( VAR_22 < 0x600)
  VAR_23 = 0x01;
 else if ( VAR_22 < 0x680)
  VAR_23 = 0x11;
 else if ( VAR_22 < 0x700)
  VAR_23 = 0x22;
 else
  VAR_23 = 0x33;


 *VAR_12 &= VAR_3|VAR_2;
 *VAR_12 |= (VAR_23 << 24);

 *VAR_14 &= ~(VAR_4 | 0xf000);
 *VAR_14 |= (VAR_20 << 31) | (VAR_21 << 24) | (VAR_22 << 12);

 *VAR_13 |= (VAR_15 << 27) | ((VAR_16-1) << 18) | (VAR_17 << 17) | (VAR_18 << 8) | (VAR_19 << 0);

 return 0;
}
