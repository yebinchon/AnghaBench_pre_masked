
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int byte ;
struct TYPE_4__ {long oldXOff; long oldYOff; int oldysize; int oldxsize; int *** qStatus; } ;
struct TYPE_3__ {int ysize; int xsize; int CIN_WIDTH; int CIN_HEIGHT; scalar_t__ onQuad; } ;


 TYPE_2__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (long,long,int,long,long) ;

__attribute__((used)) static void FUNC_1( long VAR_3, long VAR_4 )
{
 long VAR_5, VAR_6,VAR_7,VAR_8;
 byte *VAR_9;

 if (VAR_3 == VAR_0.oldXOff && VAR_4 == VAR_0.oldYOff && VAR_1[VAR_2].ysize == VAR_0.oldysize && VAR_1[VAR_2].xsize == VAR_0.oldxsize) {
  return;
 }

 VAR_0.oldXOff = VAR_3;
 VAR_0.oldYOff = VAR_4;
 VAR_0.oldysize = VAR_1[VAR_2].ysize;
 VAR_0.oldxsize = VAR_1[VAR_2].xsize;

 VAR_5 = (VAR_1[VAR_2].CIN_WIDTH*VAR_1[VAR_2].CIN_HEIGHT) / (16);
 VAR_5 += VAR_5/4 + VAR_5/16;
 VAR_5 += 64;

 VAR_5 = (VAR_1[VAR_2].xsize*VAR_1[VAR_2].ysize) / (16);
 VAR_5 += VAR_5/4;
 VAR_5 += 64;

 VAR_1[VAR_2].onQuad = 0;

 for(VAR_8=0;VAR_8<(long)VAR_1[VAR_2].ysize;VAR_8+=16)
  for(VAR_7=0;VAR_7<(long)VAR_1[VAR_2].xsize;VAR_7+=16)
   FUNC_0( VAR_7, VAR_8, 16, VAR_3, VAR_4 );

 VAR_9 = ((void*)0);

 for(VAR_6=(VAR_5-64);VAR_6<VAR_5;VAR_6++) {
  VAR_0.qStatus[0][VAR_6] = VAR_9;
  VAR_0.qStatus[1][VAR_6] = VAR_9;
 }
}
