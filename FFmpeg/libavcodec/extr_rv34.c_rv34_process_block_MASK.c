
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ int16_t ;
struct TYPE_7__ {int gb; scalar_t__** block; } ;
struct TYPE_5__ {int (* rv34_idct_dc_add ) (int *,int,scalar_t__) ;int (* rv34_idct_add ) (int *,int,scalar_t__*) ;} ;
struct TYPE_6__ {TYPE_1__ rdsp; int cur_vlcs; TYPE_3__ s; } ;
typedef TYPE_2__ RV34DecContext ;
typedef TYPE_3__ MpegEncContext ;


 int FUNC_0 (scalar_t__*,int *,int ,int,int,int,int,int) ;
 int FUNC_1 (int *,int,scalar_t__*) ;
 int FUNC_2 (int *,int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_3(RV34DecContext *VAR_0,
                                      uint8_t *VAR_1, int VAR_2,
                                      int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
    MpegEncContext *VAR_7 = &VAR_0->s;
    int16_t *VAR_8 = VAR_7->block[0];
    int VAR_9 = FUNC_0(VAR_8, &VAR_7->gb, VAR_0->cur_vlcs,
                                   VAR_3, VAR_4, VAR_5, VAR_6, VAR_6);
    if(VAR_9){
        VAR_0->rdsp.rv34_idct_add(VAR_1, VAR_2, VAR_8);
    }else{
        VAR_0->rdsp.rv34_idct_dc_add(VAR_1, VAR_2, VAR_8[0]);
        VAR_8[0] = 0;
    }
}
