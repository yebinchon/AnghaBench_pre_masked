
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int avctx; int gb; } ;
struct TYPE_6__ {int bits; int table; } ;
struct TYPE_7__ {size_t js_subband_start; int subbands; int js_vlc_bits; TYPE_1__ channel_coupling; } ;
typedef TYPE_2__ COOKSubpacket ;
typedef TYPE_3__ COOKContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 int* VAR_2 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ,int) ;

__attribute__((used)) static int FUNC_4(COOKContext *VAR_3, COOKSubpacket *VAR_4, int *VAR_5)
{
    int VAR_6;
    int VAR_7 = FUNC_2(&VAR_3->gb);
    int VAR_8 = VAR_2[VAR_4->js_subband_start];
    int VAR_9 = VAR_2[VAR_4->subbands - 1];
    int VAR_10 = VAR_9 - VAR_8 + 1;

    if (VAR_8 > VAR_9)
        return 0;

    if (VAR_7)
        for (VAR_6 = 0; VAR_6 < VAR_10; VAR_6++)
            VAR_5[VAR_8 + VAR_6] = FUNC_3(&VAR_3->gb,
                                               VAR_4->channel_coupling.table,
                                               VAR_4->channel_coupling.bits, 2);
    else
        for (VAR_6 = 0; VAR_6 < VAR_10; VAR_6++) {
            int VAR_11 = FUNC_1(&VAR_3->gb, VAR_4->js_vlc_bits);
            if (VAR_11 == (1<<VAR_4->js_vlc_bits)-1) {
                FUNC_0(VAR_3->avctx, VAR_1, "decouple value too large\n");
                return VAR_0;
            }
            VAR_5[VAR_8 + VAR_6] = VAR_11;
        }
    return 0;
}
