
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__* mcomp; } ;
struct TYPE_3__ {long samplesPerLine; long samplesPerPixel; int xsize; int ysize; scalar_t__ normalBuffer0; int half; } ;


 TYPE_2__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static void FUNC_0( long VAR_3, long VAR_4 )
{
 long VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;

 VAR_5=VAR_1[VAR_2].samplesPerLine; VAR_6=VAR_1[VAR_2].samplesPerPixel;
 if ( VAR_1[VAR_2].xsize == (VAR_1[VAR_2].ysize*4) && !VAR_1[VAR_2].half ) { VAR_6 = VAR_6+VAR_6; VAR_5 = VAR_5+VAR_5; }

 for(VAR_8=0;VAR_8<16;VAR_8++) {
  VAR_10 = (VAR_8+VAR_4-8)*VAR_5;
  for(VAR_7=0;VAR_7<16;VAR_7++) {
   VAR_9 = (VAR_7+VAR_3-8)*VAR_6;
   VAR_0.mcomp[(VAR_7*16)+VAR_8] = VAR_1[VAR_2].normalBuffer0-(VAR_10+VAR_9);
  }
 }
}
