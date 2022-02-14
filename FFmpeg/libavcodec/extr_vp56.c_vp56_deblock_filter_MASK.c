
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int ptrdiff_t ;
struct TYPE_6__ {int (* edge_filter_ver ) (int *,int,int) ;int (* edge_filter_hor ) (int *,int,int) ;} ;
struct TYPE_9__ {size_t quantizer; int* bounding_values_array; TYPE_1__ vp56dsp; TYPE_2__* avctx; } ;
typedef TYPE_4__ VP56Context ;
struct TYPE_8__ {scalar_t__ id; } ;
struct TYPE_7__ {TYPE_3__* codec; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int,int*) ;
 int FUNC_1 (int *,int,int*) ;
 int* VAR_1 ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *,int,int) ;

__attribute__((used)) static void FUNC_4(VP56Context *VAR_2, uint8_t *VAR_3,
                                ptrdiff_t VAR_4, int VAR_5, int VAR_6)
{
    if (VAR_2->avctx->codec->id == VAR_0) {
    int VAR_7 = VAR_1[VAR_2->quantizer];
    if (VAR_5) VAR_2->vp56dsp.edge_filter_hor(VAR_3 + 10-VAR_5 , VAR_4, VAR_7);
    if (VAR_6) VAR_2->vp56dsp.edge_filter_ver(VAR_3 + VAR_4*(10-VAR_6), VAR_4, VAR_7);
    } else {
        int * VAR_8 = VAR_2->bounding_values_array + 127;
        if (VAR_5)
            FUNC_0(VAR_3 + 10-VAR_5, VAR_4, VAR_8);
        if (VAR_6)
            FUNC_1(VAR_3 + VAR_4*(10-VAR_6), VAR_4, VAR_8);
    }
}
