
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int width; int patchcount; char* name; int height; TYPE_2__* patches; } ;
typedef TYPE_1__ texture_t ;
struct TYPE_7__ {short patch; int originx; } ;
typedef TYPE_2__ texpatch_t ;
struct TYPE_8__ {int * columnofs; int width; } ;
typedef TYPE_3__ patch_t ;
typedef int byte ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (short,int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int*,int ,int) ;
 int FUNC_6 (char*,char*) ;
 short** VAR_1 ;
 unsigned short** VAR_2 ;
 scalar_t__* VAR_3 ;
 int* VAR_4 ;
 TYPE_1__** VAR_5 ;

void FUNC_7 (int VAR_6)
{
    texture_t* VAR_7;
    byte* VAR_8;
    texpatch_t* VAR_9;
    patch_t* VAR_10;
    int VAR_11;
    int VAR_12;
    int VAR_13;
    int VAR_14;
    short* VAR_15;
    unsigned short* VAR_16;

    VAR_7 = VAR_5[VAR_6];


    VAR_3[VAR_6] = 0;

    VAR_4[VAR_6] = 0;
    VAR_15 = VAR_1[VAR_6];
    VAR_16 = VAR_2[VAR_6];





    VAR_8 = (byte *)FUNC_4 (VAR_7->width);
    FUNC_5 (VAR_8, 0, VAR_7->width);
    VAR_9 = VAR_7->patches;

    for (VAR_14=0 , VAR_9 = VAR_7->patches;
  VAR_14<VAR_7->patchcount;
  VAR_14++, VAR_9++)
    {
 VAR_10 = FUNC_3 (VAR_9->patch, VAR_0);
 VAR_12 = VAR_9->originx;
 VAR_13 = VAR_12 + FUNC_2(VAR_10->width);

 if (VAR_12 < 0)
     VAR_11 = 0;
 else
     VAR_11 = VAR_12;

 if (VAR_13 > VAR_7->width)
     VAR_13 = VAR_7->width;
 for ( ; VAR_11<VAR_13 ; VAR_11++)
 {
     VAR_8[VAR_11]++;
     VAR_15[VAR_11] = VAR_9->patch;
     VAR_16[VAR_11] = FUNC_1(VAR_10->columnofs[VAR_11-VAR_12])+3;
 }
    }

    for (VAR_11=0 ; VAR_11<VAR_7->width ; VAR_11++)
    {
 if (!VAR_8[VAR_11])
 {
     FUNC_6 ("R_GenerateLookup: column without a patch (%s)\n",
      VAR_7->name);
     return;
 }


 if (VAR_8[VAR_11] > 1)
 {

     VAR_15[VAR_11] = -1;
     VAR_16[VAR_11] = VAR_4[VAR_6];

     if (VAR_4[VAR_6] > 0x10000-VAR_7->height)
     {
  FUNC_0 ("R_GenerateLookup: texture %i is >64k",
    VAR_6);
     }

     VAR_4[VAR_6] += VAR_7->height;
 }
    }
}
