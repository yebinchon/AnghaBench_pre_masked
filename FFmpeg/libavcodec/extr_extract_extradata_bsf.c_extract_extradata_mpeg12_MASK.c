
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_8__ {TYPE_1__* priv_data; } ;
struct TYPE_7__ {int size; int* data; } ;
struct TYPE_6__ {scalar_t__ remove; } ;
typedef TYPE_1__ ExtractExtradataContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVBSFContext ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,int*,int) ;
 int FUNC_3 (int *,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(AVBSFContext *VAR_3, AVPacket *VAR_4,
                                     uint8_t **VAR_5, int *VAR_6)
{
    ExtractExtradataContext *VAR_7 = VAR_3->priv_data;
    uint32_t VAR_8 = VAR_2;
    int VAR_9, VAR_10 = 0;

    for (VAR_9 = 0; VAR_9 < VAR_4->size; VAR_9++) {
        VAR_8 = (VAR_8 << 8) | VAR_4->data[VAR_9];
        if (VAR_8 == 0x1B3)
            VAR_10 = 1;
        else if (VAR_10 && VAR_8 != 0x1B5 && VAR_8 < 0x200 && VAR_8 >= 0x100) {
            if (VAR_9 > 3) {
                *VAR_6 = VAR_9 - 3;
                *VAR_5 = FUNC_1(*VAR_6 + VAR_0);
                if (!*VAR_5)
                    return FUNC_0(VAR_1);

                FUNC_2(*VAR_5, VAR_4->data, *VAR_6);
                FUNC_3(*VAR_5 + *VAR_6, 0, VAR_0);

                if (VAR_7->remove) {
                    VAR_4->data += *VAR_6;
                    VAR_4->size -= *VAR_6;
                }
            }
            break;
        }
    }
    return 0;
}
