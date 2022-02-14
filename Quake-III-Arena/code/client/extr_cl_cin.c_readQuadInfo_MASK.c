
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int byte ;
struct TYPE_6__ {scalar_t__ linbuf; } ;
struct TYPE_5__ {int xsize; int ysize; int maxsize; int minsize; int CIN_HEIGHT; int CIN_WIDTH; int samplesPerLine; int samplesPerPixel; int screenDelta; unsigned int* t; int drawX; int drawY; int VQBuffer; int VQ1; int VQNormal; int VQ0; void* smootheddouble; void* half; } ;
struct TYPE_4__ {scalar_t__ hardwareType; int maxTextureSize; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 TYPE_3__ VAR_1 ;
 TYPE_2__* VAR_2 ;
 size_t VAR_3 ;
 TYPE_1__ VAR_4 ;
 void* VAR_5 ;

__attribute__((used)) static void FUNC_1( byte *VAR_6 )
{
 if (VAR_3 < 0) return;

 VAR_2[VAR_3].xsize = VAR_6[0]+VAR_6[1]*256;
 VAR_2[VAR_3].ysize = VAR_6[2]+VAR_6[3]*256;
 VAR_2[VAR_3].maxsize = VAR_6[4]+VAR_6[5]*256;
 VAR_2[VAR_3].minsize = VAR_6[6]+VAR_6[7]*256;

 VAR_2[VAR_3].CIN_HEIGHT = VAR_2[VAR_3].ysize;
 VAR_2[VAR_3].CIN_WIDTH = VAR_2[VAR_3].xsize;

 VAR_2[VAR_3].samplesPerLine = VAR_2[VAR_3].CIN_WIDTH*VAR_2[VAR_3].samplesPerPixel;
 VAR_2[VAR_3].screenDelta = VAR_2[VAR_3].CIN_HEIGHT*VAR_2[VAR_3].samplesPerLine;

 VAR_2[VAR_3].half = VAR_5;
 VAR_2[VAR_3].smootheddouble = VAR_5;

 VAR_2[VAR_3].VQ0 = VAR_2[VAR_3].VQNormal;
 VAR_2[VAR_3].VQ1 = VAR_2[VAR_3].VQBuffer;

 VAR_2[VAR_3].t[0] = (0 - (unsigned int)VAR_1.linbuf)+(unsigned int)VAR_1.linbuf+VAR_2[VAR_3].screenDelta;
 VAR_2[VAR_3].t[1] = (0 - ((unsigned int)VAR_1.linbuf + VAR_2[VAR_3].screenDelta))+(unsigned int)VAR_1.linbuf;

        VAR_2[VAR_3].drawX = VAR_2[VAR_3].CIN_WIDTH;
        VAR_2[VAR_3].drawY = VAR_2[VAR_3].CIN_HEIGHT;


 if ( VAR_4.hardwareType == VAR_0 || VAR_4.maxTextureSize <= 256) {
                if (VAR_2[VAR_3].drawX>256) {
                        VAR_2[VAR_3].drawX = 256;
                }
                if (VAR_2[VAR_3].drawY>256) {
                        VAR_2[VAR_3].drawY = 256;
                }
  if (VAR_2[VAR_3].CIN_WIDTH != 256 || VAR_2[VAR_3].CIN_HEIGHT != 256) {
   FUNC_0("HACK: approxmimating cinematic for Rage Pro or Voodoo\n");
  }
 }




}
