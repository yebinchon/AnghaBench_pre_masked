
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pullup_context {int nplanes; void* background; void* stride; void* h; void* w; void* bpp; } ;


 void* FUNC_0 (int ,int) ;

void FUNC_1( struct pullup_context * VAR_0 )
{
    VAR_0->bpp = FUNC_0( VAR_0->nplanes, sizeof(int) );
    VAR_0->w = FUNC_0( VAR_0->nplanes, sizeof(int) );
    VAR_0->h = FUNC_0( VAR_0->nplanes, sizeof(int) );
    VAR_0->stride = FUNC_0( VAR_0->nplanes, sizeof(int) );
    VAR_0->background = FUNC_0( VAR_0->nplanes, sizeof(int) );
}
