
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int mobjflags; int scale; int gx; int gy; int x1; int x2; int xiscale; int patch; int * colormap; scalar_t__ startfrac; scalar_t__ gzt; scalar_t__ texturemid; scalar_t__ gz; } ;
typedef TYPE_1__ vissprite_t ;
struct TYPE_9__ {int* lump; scalar_t__* flip; scalar_t__ rotate; } ;
typedef TYPE_2__ spriteframe_t ;
struct TYPE_10__ {size_t numframes; TYPE_2__* spriteframes; } ;
typedef TYPE_3__ spritedef_t ;
struct TYPE_11__ {int x; int y; size_t sprite; size_t frame; unsigned int angle; int flags; scalar_t__ z; } ;
typedef TYPE_4__ mobj_t ;
typedef int fixed_t ;
typedef scalar_t__ boolean ;
typedef unsigned int angle_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*,size_t,...) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__* FUNC_3 () ;
 unsigned int FUNC_4 (int,int) ;
 int FUNC_5 (int) ;
 int VAR_9 ;
 int * VAR_10 ;
 int VAR_11 ;
 int * VAR_12 ;
 unsigned int VAR_13 ;
 int VAR_14 ;
 int ** VAR_15 ;
 scalar_t__* VAR_16 ;
 TYPE_3__* VAR_17 ;
 scalar_t__* VAR_18 ;
 scalar_t__* VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;

void FUNC_6 (mobj_t* VAR_26)
{
    fixed_t VAR_27;
    fixed_t VAR_28;

    fixed_t VAR_29;
    fixed_t VAR_30;

    fixed_t VAR_31;
    fixed_t VAR_32;

    fixed_t VAR_33;

    int VAR_34;
    int VAR_35;

    spritedef_t* VAR_36;
    spriteframe_t* VAR_37;
    int VAR_38;

    unsigned VAR_39;
    boolean VAR_40;

    int VAR_41;

    vissprite_t* VAR_42;

    angle_t VAR_43;
    fixed_t VAR_44;


    VAR_27 = VAR_26->x - VAR_23;
    VAR_28 = VAR_26->y - VAR_24;

    VAR_29 = FUNC_1(VAR_27,VAR_20);
    VAR_30 = -FUNC_1(VAR_28,VAR_21);

    VAR_32 = VAR_29-VAR_30;


    if (VAR_32 < VAR_8)
 return;

    VAR_33 = FUNC_0(VAR_14, VAR_32);

    VAR_29 = -FUNC_1(VAR_27,VAR_21);
    VAR_30 = FUNC_1(VAR_28,VAR_20);
    VAR_31 = -(VAR_30+VAR_29);


    if (FUNC_5(VAR_31)>(VAR_32<<2))
 return;







    VAR_36 = &VAR_17[VAR_26->sprite];





    VAR_37 = &VAR_36->spriteframes[ VAR_26->frame & VAR_1];

    if (VAR_37->rotate)
    {

 VAR_43 = FUNC_4 (VAR_26->x, VAR_26->y);
 VAR_39 = (VAR_43-VAR_26->angle+(unsigned)(VAR_0/2)*9)>>29;
 VAR_38 = VAR_37->lump[VAR_39];
 VAR_40 = (boolean)VAR_37->flip[VAR_39];
    }
    else
    {

 VAR_38 = VAR_37->lump[0];
 VAR_40 = (boolean)VAR_37->flip[0];
    }


    VAR_31 -= VAR_16[VAR_38];
    VAR_34 = (VAR_9 + FUNC_1 (VAR_31,VAR_33) ) >>VAR_3;


    if (VAR_34 > VAR_22)
 return;

    VAR_31 += VAR_19[VAR_38];
    VAR_35 = ((VAR_9 + FUNC_1 (VAR_31,VAR_33) ) >>VAR_3) - 1;


    if (VAR_35 < 0)
 return;


    VAR_42 = FUNC_3 ();
    VAR_42->mobjflags = VAR_26->flags;
    VAR_42->scale = VAR_33<<VAR_11;
    VAR_42->gx = VAR_26->x;
    VAR_42->gy = VAR_26->y;
    VAR_42->gz = VAR_26->z;
    VAR_42->gzt = VAR_26->z + VAR_18[VAR_38];
    VAR_42->texturemid = VAR_42->gzt - VAR_25;
    VAR_42->x1 = VAR_34 < 0 ? 0 : VAR_34;
    VAR_42->x2 = VAR_35 >= VAR_22 ? VAR_22-1 : VAR_35;
    VAR_44 = FUNC_0 (VAR_4, VAR_33);

    if (VAR_40)
    {
 VAR_42->startfrac = VAR_19[VAR_38]-1;
 VAR_42->xiscale = -VAR_44;
    }
    else
    {
 VAR_42->startfrac = 0;
 VAR_42->xiscale = VAR_44;
    }

    if (VAR_42->x1 > VAR_34)
 VAR_42->startfrac += VAR_42->xiscale*(VAR_42->x1-VAR_34);
    VAR_42->patch = VAR_38;


    if (VAR_26->flags & VAR_7)
    {

 VAR_42->colormap = ((void*)0);
    }
    else if (VAR_12)
    {

 VAR_42->colormap = VAR_12;
    }
    else if (VAR_26->frame & VAR_2)
    {

 VAR_42->colormap = VAR_10;
    }

    else
    {

 VAR_41 = VAR_33>>(VAR_5-VAR_11);

 if (VAR_41 >= VAR_6)
     VAR_41 = VAR_6-1;

 VAR_42->colormap = VAR_15[VAR_41];
    }
}
