
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_13__ {int decode_buffer_2; int decode_buffer_1; } ;
struct TYPE_12__ {int size; int num_channels; size_t ch_idx; int mono_previous_buffer2; int gains2; int gains1; scalar_t__ joint_stereo; int mono_previous_buffer1; } ;
typedef TYPE_1__ COOKSubpacket ;
typedef TYPE_2__ COOKContext ;


 int FUNC_0 (TYPE_2__*,TYPE_1__*,int const*,int *) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (TYPE_2__*,int ,int *,int ,float*) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_5(COOKContext *VAR_0, COOKSubpacket *VAR_1,
                            const uint8_t *VAR_2, float **VAR_3)
{
    int VAR_4 = VAR_1->size;
    int VAR_5;

    FUNC_2(VAR_0->decode_buffer_1, 0, sizeof(VAR_0->decode_buffer_1));
    FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_1->gains1);

    if (VAR_1->joint_stereo) {
        if ((VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_0->decode_buffer_1, VAR_0->decode_buffer_2)) < 0)
            return VAR_5;
    } else {
        if ((VAR_5 = FUNC_4(VAR_0, VAR_1, VAR_0->decode_buffer_1)) < 0)
            return VAR_5;

        if (VAR_1->num_channels == 2) {
            FUNC_0(VAR_0, VAR_1, VAR_2 + VAR_4 / 2, &VAR_1->gains2);
            if ((VAR_5 = FUNC_4(VAR_0, VAR_1, VAR_0->decode_buffer_2)) < 0)
                return VAR_5;
        }
    }

    FUNC_3(VAR_0, VAR_0->decode_buffer_1, &VAR_1->gains1,
                          VAR_1->mono_previous_buffer1,
                          VAR_3 ? VAR_3[VAR_1->ch_idx] : ((void*)0));

    if (VAR_1->num_channels == 2) {
        if (VAR_1->joint_stereo)
            FUNC_3(VAR_0, VAR_0->decode_buffer_2, &VAR_1->gains1,
                                  VAR_1->mono_previous_buffer2,
                                  VAR_3 ? VAR_3[VAR_1->ch_idx + 1] : ((void*)0));
        else
            FUNC_3(VAR_0, VAR_0->decode_buffer_2, &VAR_1->gains2,
                                  VAR_1->mono_previous_buffer2,
                                  VAR_3 ? VAR_3[VAR_1->ch_idx + 1] : ((void*)0));
    }

    return 0;
}
