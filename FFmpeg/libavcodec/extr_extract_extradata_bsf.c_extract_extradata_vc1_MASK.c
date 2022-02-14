
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int const uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_8__ {TYPE_1__* priv_data; } ;
struct TYPE_7__ {int size; int const* data; } ;
struct TYPE_6__ {scalar_t__ remove; } ;
typedef TYPE_1__ ExtractExtradataContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVBSFContext ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int const* FUNC_2 (scalar_t__) ;
 int const* FUNC_3 (int const*,int const*,scalar_t__*) ;
 int FUNC_4 (int const*,int const*,int) ;
 int FUNC_5 (int const*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_6(AVBSFContext *VAR_5, AVPacket *VAR_6,
                                 uint8_t **VAR_7, int *VAR_8)
{
    ExtractExtradataContext *VAR_9 = VAR_5->priv_data;
    const uint8_t *VAR_10 = VAR_6->data, *VAR_11 = VAR_6->data + VAR_6->size;
    uint32_t VAR_12 = VAR_2;
    int VAR_13 = 0, VAR_14 = 0;

    while (VAR_10 < VAR_11) {
        VAR_10 = FUNC_3(VAR_10, VAR_11, &VAR_12);
        if (VAR_12 == VAR_4 || VAR_12 == VAR_3) {
            VAR_13 = 1;
        } else if (VAR_13 && FUNC_1(VAR_12)) {
            VAR_14 = VAR_10 - 4 - VAR_6->data;
            break;
        }
    }

    if (VAR_14) {
        *VAR_7 = FUNC_2(VAR_14 + VAR_0);
        if (!*VAR_7)
            return FUNC_0(VAR_1);

        FUNC_4(*VAR_7, VAR_6->data, VAR_14);
        FUNC_5(*VAR_7 + VAR_14, 0, VAR_0);
        *VAR_8 = VAR_14;

        if (VAR_9->remove) {
            VAR_6->data += VAR_14;
            VAR_6->size -= VAR_14;
        }
    }

    return 0;
}
