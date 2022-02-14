
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int data ;
typedef int byte ;
struct TYPE_2__ {float speed; } ;


 int FUNC_0 (short) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static int FUNC_1( short *VAR_1, int VAR_2, int VAR_3, int VAR_4, byte *VAR_5 ) {
 int VAR_6;
 int VAR_7;
 float VAR_8;
 int VAR_9;
 int VAR_10, VAR_11, VAR_12;

 VAR_8 = (float)VAR_2 / VAR_0.speed;

 VAR_6 = VAR_4 / VAR_8;

 VAR_11 = 0;
 VAR_12 = VAR_8 * 256;

 for (VAR_9=0 ; VAR_9<VAR_6 ; VAR_9++)
 {
  VAR_7 = VAR_11 >> 8;
  VAR_11 += VAR_12;
  if( VAR_3 == 2 ) {
   VAR_10 = FUNC_0 ( ((short *)VAR_5)[VAR_7] );
  } else {
   VAR_10 = (int)( (unsigned char)(VAR_5[VAR_7]) - 128) << 8;
  }
  VAR_1[VAR_9] = VAR_10;
 }
 return VAR_6;
}
