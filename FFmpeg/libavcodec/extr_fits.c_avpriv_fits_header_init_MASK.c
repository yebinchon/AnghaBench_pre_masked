
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int gcount; double bscale; scalar_t__ data_max_found; scalar_t__ data_min_found; scalar_t__ bzero; scalar_t__ image_extension; scalar_t__ rgb; scalar_t__ groups; scalar_t__ pcount; scalar_t__ blank_found; scalar_t__ naxis_index; int state; } ;
typedef int FITSHeaderState ;
typedef TYPE_1__ FITSHeader ;



int FUNC_0(FITSHeader *VAR_0, FITSHeaderState VAR_1)
{
    VAR_0->state = VAR_1;
    VAR_0->naxis_index = 0;
    VAR_0->blank_found = 0;
    VAR_0->pcount = 0;
    VAR_0->gcount = 1;
    VAR_0->groups = 0;
    VAR_0->rgb = 0;
    VAR_0->image_extension = 0;
    VAR_0->bscale = 1.0;
    VAR_0->bzero = 0;
    VAR_0->data_min_found = 0;
    VAR_0->data_max_found = 0;
    return 0;
}
