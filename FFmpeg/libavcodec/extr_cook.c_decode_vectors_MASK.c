
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int subband_coef_sign ;
typedef int subband_coef_index ;
struct TYPE_9__ {int samples_per_channel; int (* scalar_dequant ) (TYPE_2__*,int,int,int*,int*,float*) ;} ;
struct TYPE_8__ {int total_subbands; } ;
typedef TYPE_1__ COOKSubpacket ;
typedef TYPE_2__ COOKContext ;


 int VAR_0 ;
 int FUNC_0 (int*,int ,int) ;
 int FUNC_1 (TYPE_2__*,int,int,int*,int*,float*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,TYPE_1__*,int,int*,int*) ;

__attribute__((used)) static void FUNC_3(COOKContext *VAR_1, COOKSubpacket *VAR_2, int *VAR_3,
                           int *VAR_4, float *VAR_5)
{


    int VAR_6[VAR_0];


    int VAR_7[VAR_0];
    int VAR_8, VAR_9;
    int VAR_10 = 0;

    for (VAR_8 = 0; VAR_8 < VAR_2->total_subbands; VAR_8++) {
        VAR_10 = VAR_3[VAR_8];
        if (VAR_3[VAR_8] < 7) {
            if (FUNC_2(VAR_1, VAR_2, VAR_3[VAR_8], VAR_6, VAR_7)) {
                VAR_10 = 7;
                for (VAR_9 = 0; VAR_9 < VAR_2->total_subbands; VAR_9++)
                    VAR_3[VAR_8 + VAR_9] = 7;
            }
        }
        if (VAR_10 >= 7) {
            FUNC_0(VAR_6, 0, sizeof(VAR_6));
            FUNC_0(VAR_7, 0, sizeof(VAR_7));
        }
        VAR_1->scalar_dequant(VAR_1, VAR_10, VAR_4[VAR_8],
                          VAR_6, VAR_7,
                          &VAR_5[VAR_8 * VAR_0]);
    }


    if (VAR_2->total_subbands * VAR_0 >= VAR_1->samples_per_channel)
        return;
}
