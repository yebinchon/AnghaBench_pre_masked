
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int chunk ;
struct TYPE_3__ {int aes_ctr; } ;
typedef TYPE_1__ MOVMuxCencContext ;
typedef int AVIOContext ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int *,int const*,int) ;
 int FUNC_2 (int *,int *,int) ;

__attribute__((used)) static void FUNC_3(MOVMuxCencContext* VAR_0, AVIOContext *VAR_1,
                                     const uint8_t *VAR_2, int VAR_3)
{
    uint8_t VAR_4[4096];
    const uint8_t* VAR_5 = VAR_2;
    int VAR_6 = VAR_3;
    int VAR_7;

    while (VAR_6 > 0) {
        VAR_7 = FUNC_0(VAR_6, sizeof(VAR_4));
        FUNC_1(VAR_0->aes_ctr, VAR_4, VAR_5, VAR_7);
        FUNC_2(VAR_1, VAR_4, VAR_7);
        VAR_5 += VAR_7;
        VAR_6 -= VAR_7;
    }
}
