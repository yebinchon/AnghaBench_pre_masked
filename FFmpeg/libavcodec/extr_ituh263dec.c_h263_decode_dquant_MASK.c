
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int8_t ;
struct TYPE_4__ {size_t qscale; int gb; scalar_t__ modified_quant; } ;
typedef TYPE_1__ MpegEncContext ;


 size_t** VAR_0 ;
 int FUNC_0 (TYPE_1__*,size_t) ;
 size_t FUNC_1 (int *,int) ;
 size_t FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(MpegEncContext *VAR_1){
    static const int8_t VAR_2[4] = { -1, -2, 1, 2 };

    if(VAR_1->modified_quant){
        if(FUNC_2(&VAR_1->gb))
            VAR_1->qscale= VAR_0[FUNC_2(&VAR_1->gb)][ VAR_1->qscale ];
        else
            VAR_1->qscale= FUNC_1(&VAR_1->gb, 5);
    }else
        VAR_1->qscale += VAR_2[FUNC_1(&VAR_1->gb, 2)];
    FUNC_0(VAR_1, VAR_1->qscale);
}
