
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int16_t ;
struct TYPE_5__ {int (* idct_put ) (int *,int,int *) ;} ;
struct TYPE_6__ {TYPE_1__ idsp; int (* dct_unquantize_intra ) (TYPE_2__*,int *,int,int) ;} ;
typedef TYPE_2__ MpegEncContext ;


 int FUNC_0 (TYPE_2__*,int *,int,int) ;
 int FUNC_1 (int *,int,int *) ;

__attribute__((used)) static inline void FUNC_2(MpegEncContext *VAR_0,
                           int16_t *VAR_1, int VAR_2, uint8_t *VAR_3, int VAR_4, int VAR_5)
{
    VAR_0->dct_unquantize_intra(VAR_0, VAR_1, VAR_2, VAR_5);
    VAR_0->idsp.idct_put(VAR_3, VAR_4, VAR_1);
}
