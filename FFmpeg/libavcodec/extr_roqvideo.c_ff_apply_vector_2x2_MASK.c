
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {unsigned char* y; unsigned char u; unsigned char v; } ;
typedef TYPE_2__ roq_cell ;
struct TYPE_8__ {TYPE_1__* current_frame; } ;
struct TYPE_6__ {int* linesize; unsigned char** data; } ;
typedef TYPE_3__ RoqContext ;



void FUNC_0(RoqContext *VAR_0, int VAR_1, int VAR_2, roq_cell *VAR_3)
{
    unsigned char *VAR_4;
    int VAR_5,VAR_6;

    VAR_6 = VAR_0->current_frame->linesize[0];
    VAR_5 = VAR_2*VAR_6 + VAR_1;

    VAR_4 = VAR_0->current_frame->data[0] + VAR_5;
    VAR_4[0 ] = VAR_3->y[0];
    VAR_4[1 ] = VAR_3->y[1];
    VAR_4[VAR_6 ] = VAR_3->y[2];
    VAR_4[VAR_6+1] = VAR_3->y[3];

    VAR_6 = VAR_0->current_frame->linesize[1];
    VAR_5 = VAR_2*VAR_6 + VAR_1;

    VAR_4 = VAR_0->current_frame->data[1] + VAR_5;
    VAR_4[0 ] =
    VAR_4[1 ] =
    VAR_4[VAR_6 ] =
    VAR_4[VAR_6+1] = VAR_3->u;

    VAR_4 = VAR_0->current_frame->data[2] + VAR_5;
    VAR_4[0 ] =
    VAR_4[1 ] =
    VAR_4[VAR_6 ] =
    VAR_4[VAR_6+1] = VAR_3->v;
}
