
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int mobjflags; int startfrac; scalar_t__ x1; scalar_t__ x2; scalar_t__ xiscale; int scale; int texturemid; int colormap; int patch; } ;
typedef TYPE_1__ vissprite_t ;
struct TYPE_6__ {int * columnofs; int width; } ;
typedef TYPE_2__ patch_t ;
typedef int fixed_t ;
typedef int column_t ;
typedef int byte ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 TYPE_2__* FUNC_5 (int ,int ) ;
 int FUNC_6 (scalar_t__) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

void
FUNC_7
( vissprite_t* VAR_19,
  int VAR_20,
  int VAR_21 )
{
    column_t* VAR_22;
    int VAR_23;
    fixed_t VAR_24;
    patch_t* VAR_25;


    VAR_25 = FUNC_5 (VAR_19->patch+VAR_14, VAR_3);

    VAR_8 = VAR_19->colormap;

    if (!VAR_8)
    {

 VAR_7 = VAR_15;
    }
    else if (VAR_19->mobjflags & VAR_1)
    {
 VAR_7 = VAR_4;
 VAR_11 = VAR_18 - 256 +
     ( (VAR_19->mobjflags & VAR_1) >> (VAR_2-8) );
    }

    VAR_9 = FUNC_6(VAR_19->xiscale)>>VAR_13;
    VAR_10 = VAR_19->texturemid;
    VAR_24 = VAR_19->startfrac;
    VAR_17 = VAR_19->scale;
    VAR_16 = VAR_6 - FUNC_0(VAR_10,VAR_17);

    for (VAR_12=VAR_19->x1 ; VAR_12<=VAR_19->x2 ; VAR_12++, VAR_24 += VAR_19->xiscale)
    {
 VAR_23 = VAR_24>>VAR_0;




 VAR_22 = (column_t *) ((byte *)VAR_25 +
          FUNC_2(VAR_25->columnofs[VAR_23]));
 FUNC_3 (VAR_22);
    }

    VAR_7 = VAR_5;
}
