
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int* lump; scalar_t__* flip; } ;
typedef TYPE_1__ spriteframe_t ;
struct TYPE_7__ {TYPE_1__* spriteframes; } ;
typedef TYPE_2__ spritedef_t ;
typedef int patch_t ;
typedef scalar_t__ boolean ;
struct TYPE_9__ {int name; } ;
struct TYPE_8__ {size_t sprite; size_t frame; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int,int,int ,int *) ;
 int FUNC_2 (int,int,int ,int *) ;
 int * FUNC_3 (char*,int ) ;
 int * FUNC_4 (scalar_t__,int ) ;
 size_t VAR_2 ;
 TYPE_5__* VAR_3 ;
 TYPE_4__* VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_2__* VAR_6 ;

void FUNC_5 (void)
{
    spritedef_t* VAR_7;
    spriteframe_t* VAR_8;
    int VAR_9;
    boolean VAR_10;
    patch_t* VAR_11;


    FUNC_1 (0,0,0, FUNC_3 ("BOSSBACK", VAR_1));

    FUNC_0 (VAR_3[VAR_2].name);


    VAR_7 = &VAR_6[VAR_4->sprite];
    VAR_8 = &VAR_7->spriteframes[ VAR_4->frame & VAR_0];
    VAR_9 = VAR_8->lump[0];
    VAR_10 = (boolean)VAR_8->flip[0];

    VAR_11 = FUNC_4 (VAR_9+VAR_5, VAR_1);
    if (VAR_10)
 FUNC_2 (160,170,0,VAR_11);
    else
 FUNC_1 (160,170,0,VAR_11);
}
