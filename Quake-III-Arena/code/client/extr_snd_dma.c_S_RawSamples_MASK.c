
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int byte ;
struct TYPE_4__ {float speed; } ;
struct TYPE_3__ {short left; short right; } ;


 int FUNC_0 (char*,int,int) ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_1( int VAR_7, int VAR_8, int VAR_9, int VAR_10, const byte *VAR_11, float VAR_12 ) {
 int VAR_13;
 int VAR_14, VAR_15;
 float VAR_16;
 int VAR_17;

 if ( !VAR_5 || VAR_4 ) {
  return;
 }

 VAR_17 = 256 * VAR_12;

 if ( VAR_2 < VAR_6 ) {
  FUNC_0( "S_RawSamples: resetting minimum: %i < %i\n", VAR_2, VAR_6 );
  VAR_2 = VAR_6;
 }

 VAR_16 = (float)VAR_8 / VAR_1.speed;


 if (VAR_10 == 2 && VAR_9 == 2)
 {
  if (VAR_16 == 1.0)
  {
   for (VAR_13=0 ; VAR_13<VAR_7 ; VAR_13++)
   {
    VAR_15 = VAR_2&(VAR_0-1);
    VAR_2++;
    VAR_3[VAR_15].left = ((short *)VAR_11)[VAR_13*2] * VAR_17;
    VAR_3[VAR_15].right = ((short *)VAR_11)[VAR_13*2+1] * VAR_17;
   }
  }
  else
  {
   for (VAR_13=0 ; ; VAR_13++)
   {
    VAR_14 = VAR_13*VAR_16;
    if (VAR_14 >= VAR_7)
     break;
    VAR_15 = VAR_2&(VAR_0-1);
    VAR_2++;
    VAR_3[VAR_15].left = ((short *)VAR_11)[VAR_14*2] * VAR_17;
    VAR_3[VAR_15].right = ((short *)VAR_11)[VAR_14*2+1] * VAR_17;
   }
  }
 }
 else if (VAR_10 == 1 && VAR_9 == 2)
 {
  for (VAR_13=0 ; ; VAR_13++)
  {
   VAR_14 = VAR_13*VAR_16;
   if (VAR_14 >= VAR_7)
    break;
   VAR_15 = VAR_2&(VAR_0-1);
   VAR_2++;
   VAR_3[VAR_15].left = ((short *)VAR_11)[VAR_14] * VAR_17;
   VAR_3[VAR_15].right = ((short *)VAR_11)[VAR_14] * VAR_17;
  }
 }
 else if (VAR_10 == 2 && VAR_9 == 1)
 {
  VAR_17 *= 256;

  for (VAR_13=0 ; ; VAR_13++)
  {
   VAR_14 = VAR_13*VAR_16;
   if (VAR_14 >= VAR_7)
    break;
   VAR_15 = VAR_2&(VAR_0-1);
   VAR_2++;
   VAR_3[VAR_15].left = ((char *)VAR_11)[VAR_14*2] * VAR_17;
   VAR_3[VAR_15].right = ((char *)VAR_11)[VAR_14*2+1] * VAR_17;
  }
 }
 else if (VAR_10 == 1 && VAR_9 == 1)
 {
  VAR_17 *= 256;

  for (VAR_13=0 ; ; VAR_13++)
  {
   VAR_14 = VAR_13*VAR_16;
   if (VAR_14 >= VAR_7)
    break;
   VAR_15 = VAR_2&(VAR_0-1);
   VAR_2++;
   VAR_3[VAR_15].left = (((byte *)VAR_11)[VAR_14]-128) * VAR_17;
   VAR_3[VAR_15].right = (((byte *)VAR_11)[VAR_14]-128) * VAR_17;
  }
 }

 if ( VAR_2 > VAR_6 + VAR_0 ) {
  FUNC_0( "S_RawSamples: overflowed %i > %i\n", VAR_2, VAR_6 );
 }
}
