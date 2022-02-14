
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_17__ {int nb_obus; TYPE_5__* obus; } ;
struct TYPE_16__ {int const type; scalar_t__ raw_size; int raw_data; } ;
struct TYPE_15__ {TYPE_1__* priv_data; } ;
struct TYPE_14__ {int * data; } ;
struct TYPE_13__ {int size; int * data; TYPE_3__* buf; } ;
struct TYPE_12__ {scalar_t__ remove; TYPE_6__ av1_pkt; } ;
typedef TYPE_1__ ExtractExtradataContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVBufferRef ;
typedef TYPE_4__ AVBSFContext ;
typedef TYPE_5__ AV1OBU ;




 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int const*) ;
 TYPE_3__* FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_3__**) ;
 int * FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_6__*,int *,int,TYPE_4__*) ;
 int FUNC_6 (int *,int ,scalar_t__) ;
 int FUNC_7 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_8 (int const*,int,int const) ;

__attribute__((used)) static int FUNC_9(AVBSFContext *VAR_2, AVPacket *VAR_3,
                                 uint8_t **VAR_4, int *VAR_5)
{
    static const int VAR_6[] = {
        128, 129,
    };
    ExtractExtradataContext *VAR_7 = VAR_2->priv_data;

    int VAR_8 = 0, VAR_9 = 0;
    int VAR_10 = FUNC_1(VAR_6);
    int VAR_11, VAR_12 = 0, VAR_13 = 0;

    VAR_13 = FUNC_5(&VAR_7->av1_pkt, VAR_3->data, VAR_3->size, VAR_2);
    if (VAR_13 < 0)
        return VAR_13;

    for (VAR_11 = 0; VAR_11 < VAR_7->av1_pkt.nb_obus; VAR_11++) {
        AV1OBU *VAR_14 = &VAR_7->av1_pkt.obus[VAR_11];
        if (FUNC_8(VAR_6, VAR_10, VAR_14->type)) {
            VAR_8 += VAR_14->raw_size;
            if (VAR_14->type == 128)
                VAR_12 = 1;
        } else if (VAR_7->remove) {
            VAR_9 += VAR_14->raw_size;
        }
    }

    if (VAR_8 && VAR_12) {
        AVBufferRef *VAR_15;
        uint8_t *VAR_16, *VAR_17;

        if (VAR_7->remove) {
            VAR_15 = FUNC_2(VAR_9 + VAR_0);
            if (!VAR_15) {
                return FUNC_0(VAR_1);
            }
            FUNC_7(VAR_15->data + VAR_9, 0, VAR_0);

            VAR_17 = VAR_15->data;
        }

        VAR_16 = FUNC_4(VAR_8 + VAR_0);
        if (!VAR_16) {
            FUNC_3(&VAR_15);
            return FUNC_0(VAR_1);
        }
        FUNC_7(VAR_16 + VAR_8, 0, VAR_0);

        *VAR_4 = VAR_16;
        *VAR_5 = VAR_8;

        for (VAR_11 = 0; VAR_11 < VAR_7->av1_pkt.nb_obus; VAR_11++) {
            AV1OBU *VAR_18 = &VAR_7->av1_pkt.obus[VAR_11];
            if (FUNC_8(VAR_6, VAR_10,
                             VAR_18->type)) {
                FUNC_6(VAR_16, VAR_18->raw_data, VAR_18->raw_size);
                VAR_16 += VAR_18->raw_size;
            } else if (VAR_7->remove) {
                FUNC_6(VAR_17, VAR_18->raw_data, VAR_18->raw_size);
                VAR_17 += VAR_18->raw_size;
            }
        }

        if (VAR_7->remove) {
            FUNC_3(&VAR_3->buf);
            VAR_3->buf = VAR_15;
            VAR_3->data = VAR_15->data;
            VAR_3->size = VAR_9;
        }
    }

    return 0;
}
