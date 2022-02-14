
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; int mbx; int * top_border_v; int * top_border_u; int * left_border_v; int * left_border_u; int topleft_border_v; int topleft_border_u; } ;
typedef TYPE_1__ AVSContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_0(AVSContext *VAR_3)
{

    VAR_3->left_border_u[9] = VAR_3->left_border_u[8];
    VAR_3->left_border_v[9] = VAR_3->left_border_v[8];
    if(VAR_3->flags & VAR_2) {
        VAR_3->top_border_u[VAR_3->mbx*10 + 9] = VAR_3->top_border_u[VAR_3->mbx*10 + 11];
        VAR_3->top_border_v[VAR_3->mbx*10 + 9] = VAR_3->top_border_v[VAR_3->mbx*10 + 11];
    } else {
        VAR_3->top_border_u[VAR_3->mbx * 10 + 9] = VAR_3->top_border_u[VAR_3->mbx * 10 + 8];
        VAR_3->top_border_v[VAR_3->mbx * 10 + 9] = VAR_3->top_border_v[VAR_3->mbx * 10 + 8];
    }
    if((VAR_3->flags & VAR_0) && (VAR_3->flags & VAR_1)) {
        VAR_3->top_border_u[VAR_3->mbx * 10] = VAR_3->left_border_u[0] = VAR_3->topleft_border_u;
        VAR_3->top_border_v[VAR_3->mbx * 10] = VAR_3->left_border_v[0] = VAR_3->topleft_border_v;
    } else {
        VAR_3->left_border_u[0] = VAR_3->left_border_u[1];
        VAR_3->left_border_v[0] = VAR_3->left_border_v[1];
        VAR_3->top_border_u[VAR_3->mbx * 10] = VAR_3->top_border_u[VAR_3->mbx * 10 + 1];
        VAR_3->top_border_v[VAR_3->mbx * 10] = VAR_3->top_border_v[VAR_3->mbx * 10 + 1];
    }
}
