
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {size_t bandwidth; scalar_t__ stereo; } ;
struct TYPE_5__ {int avctx; TYPE_1__ packet; int redundancy_output; int redundancy_rc; int celt; } ;
typedef TYPE_2__ OpusStreamContext ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*) ;
 int * VAR_1 ;
 int FUNC_1 (int ,int *,int ,scalar_t__,int,int ,int ) ;
 int FUNC_2 (int *,int const*,int) ;
 int FUNC_3 (int *,int const*,int) ;

__attribute__((used)) static int FUNC_4(OpusStreamContext *VAR_2, const uint8_t *VAR_3, int VAR_4)
{
    int VAR_5 = FUNC_2(&VAR_2->redundancy_rc, VAR_3, VAR_4);
    if (VAR_5 < 0)
        goto fail;
    FUNC_3(&VAR_2->redundancy_rc, VAR_3 + VAR_4, VAR_4);

    VAR_5 = FUNC_1(VAR_2->celt, &VAR_2->redundancy_rc,
                               VAR_2->redundancy_output,
                               VAR_2->packet.stereo + 1, 240,
                               0, VAR_1[VAR_2->packet.bandwidth]);
    if (VAR_5 < 0)
        goto fail;

    return 0;
fail:
    FUNC_0(VAR_2->avctx, VAR_0, "Error decoding the redundancy frame.\n");
    return VAR_5;
}
