
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int8_t ;
struct TYPE_8__ {TYPE_1__* sps; } ;
struct TYPE_10__ {TYPE_2__ ps; } ;
struct TYPE_9__ {scalar_t__ slice_type_nos; size_t cabac_init_idc; int* cabac_state; scalar_t__ qscale; } ;
struct TYPE_7__ {int bit_depth_luma; } ;
typedef TYPE_3__ H264SliceContext ;
typedef TYPE_4__ H264Context ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int ,int) ;
 int** VAR_1 ;
 int*** VAR_2 ;

void FUNC_1(const H264Context *VAR_3, H264SliceContext *VAR_4)
{
    int VAR_5;
    const int8_t (*VAR_6)[2];
    const int VAR_7 = FUNC_0(VAR_4->qscale - 6*(VAR_3->ps.sps->bit_depth_luma-8), 0, 51);

    if (VAR_4->slice_type_nos == VAR_0) VAR_6 = VAR_1;
    else VAR_6 = VAR_2[VAR_4->cabac_init_idc];


    for( VAR_5= 0; VAR_5 < 1024; VAR_5++ ) {
        int VAR_8 = 2*(((VAR_6[VAR_5][0] * VAR_7) >>4 ) + VAR_6[VAR_5][1]) - 127;

        VAR_8^= VAR_8>>31;
        if(VAR_8 > 124)
            VAR_8= 124 + (VAR_8&1);

        VAR_4->cabac_state[VAR_5] = VAR_8;
    }
}
