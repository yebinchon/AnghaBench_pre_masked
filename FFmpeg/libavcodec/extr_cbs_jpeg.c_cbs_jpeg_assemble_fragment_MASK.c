
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int* data; } ;
struct TYPE_6__ {int nb_units; int* data; size_t data_size; TYPE_1__* units; TYPE_4__* data_ref; } ;
struct TYPE_5__ {int data_size; int type; int* data; } ;
typedef TYPE_1__ CodedBitstreamUnit ;
typedef TYPE_2__ CodedBitstreamFragment ;
typedef int CodedBitstreamContext ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 size_t FUNC_1 (int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 TYPE_4__* FUNC_3 (scalar_t__) ;
 int FUNC_4 (int*,int*,size_t) ;
 int FUNC_5 (int*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_6(CodedBitstreamContext *VAR_5,
                                       CodedBitstreamFragment *VAR_6)
{
    const CodedBitstreamUnit *VAR_7;
    uint8_t *VAR_8;
    size_t VAR_9, VAR_10, VAR_11;
    int VAR_12;

    VAR_9 = 4;
    for (VAR_12 = 0; VAR_12 < VAR_6->nb_units; VAR_12++) {
        VAR_7 = &VAR_6->units[VAR_12];
        VAR_9 += 2 + VAR_7->data_size;
        if (VAR_7->type == VAR_4) {
            for (VAR_11 = 0; VAR_11 < VAR_7->data_size; VAR_11++) {
                if (VAR_7->data[VAR_11] == 0xff)
                    ++VAR_9;
            }
        }
    }

    VAR_6->data_ref = FUNC_3(VAR_9 + VAR_0);
    if (!VAR_6->data_ref)
        return FUNC_0(VAR_1);
    VAR_8 = VAR_6->data_ref->data;

    VAR_10 = 0;

    VAR_8[VAR_10++] = 0xff;
    VAR_8[VAR_10++] = VAR_3;

    for (VAR_12 = 0; VAR_12 < VAR_6->nb_units; VAR_12++) {
        VAR_7 = &VAR_6->units[VAR_12];

        VAR_8[VAR_10++] = 0xff;
        VAR_8[VAR_10++] = VAR_7->type;

        if (VAR_7->type != VAR_4) {
            FUNC_4(VAR_8 + VAR_10, VAR_7->data, VAR_7->data_size);
            VAR_10 += VAR_7->data_size;
        } else {
            VAR_11 = FUNC_1(VAR_7->data);
            FUNC_2(VAR_11 <= VAR_7->data_size);
            FUNC_4(VAR_8 + VAR_10, VAR_7->data, VAR_11);
            VAR_10 += VAR_11;

            for (; VAR_11 < VAR_7->data_size; VAR_11++) {
                if (VAR_7->data[VAR_11] == 0xff) {
                    VAR_8[VAR_10++] = 0xff;
                    VAR_8[VAR_10++] = 0x00;
                } else {
                    VAR_8[VAR_10++] = VAR_7->data[VAR_11];
                }
            }
        }
    }

    VAR_8[VAR_10++] = 0xff;
    VAR_8[VAR_10++] = VAR_2;

    FUNC_2(VAR_10 == VAR_9);

    FUNC_5(VAR_8 + VAR_9, 0, VAR_0);
    VAR_6->data = VAR_8;
    VAR_6->data_size = VAR_9;

    return 0;
}
