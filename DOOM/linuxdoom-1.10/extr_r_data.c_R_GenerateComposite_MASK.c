
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int patchcount; int width; int height; TYPE_2__* patches; } ;
typedef TYPE_1__ texture_t ;
struct TYPE_7__ {int originx; int originy; int patch; } ;
typedef TYPE_2__ texpatch_t ;
struct TYPE_8__ {int * columnofs; int width; } ;
typedef TYPE_3__ patch_t ;
typedef int column_t ;
typedef int byte ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *,int ,int ) ;
 int FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int ) ;
 int * FUNC_5 (int ,int ,int *) ;
 short** VAR_2 ;
 unsigned short** VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 TYPE_1__** VAR_6 ;

void FUNC_6 (int VAR_7)
{
    byte* VAR_8;
    texture_t* VAR_9;
    texpatch_t* VAR_10;
    patch_t* VAR_11;
    int VAR_12;
    int VAR_13;
    int VAR_14;
    int VAR_15;
    column_t* VAR_16;
    short* VAR_17;
    unsigned short* VAR_18;

    VAR_9 = VAR_6[VAR_7];

    VAR_8 = FUNC_5 (VAR_5[VAR_7],
        VAR_1,
        &VAR_4[VAR_7]);

    VAR_17 = VAR_2[VAR_7];
    VAR_18 = VAR_3[VAR_7];


    VAR_10 = VAR_9->patches;

    for (VAR_15=0 , VAR_10 = VAR_9->patches;
  VAR_15<VAR_9->patchcount;
  VAR_15++, VAR_10++)
    {
 VAR_11 = FUNC_3 (VAR_10->patch, VAR_0);
 VAR_13 = VAR_10->originx;
 VAR_14 = VAR_13 + FUNC_2(VAR_11->width);

 if (VAR_13<0)
     VAR_12 = 0;
 else
     VAR_12 = VAR_13;

 if (VAR_14 > VAR_9->width)
     VAR_14 = VAR_9->width;

 for ( ; VAR_12<VAR_14 ; VAR_12++)
 {

     if (VAR_17[VAR_12] >= 0)
  continue;

     VAR_16 = (column_t *)((byte *)VAR_11
        + FUNC_0(VAR_11->columnofs[VAR_12-VAR_13]));
     FUNC_1 (VAR_16,
     VAR_8 + VAR_18[VAR_12],
     VAR_10->originy,
     VAR_9->height);
 }

    }



    FUNC_4 (VAR_8, VAR_0);
}
