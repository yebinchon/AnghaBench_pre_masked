
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
struct TYPE_5__ {scalar_t__ data_size; int data; } ;
typedef TYPE_1__ CodedBitstreamUnit ;
typedef TYPE_2__ CodedBitstreamFragment ;
typedef int CodedBitstreamContext ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 TYPE_4__* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int*,int ,scalar_t__) ;
 int FUNC_4 (int*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(CodedBitstreamContext *VAR_2,
                                       CodedBitstreamFragment *VAR_3)
{
    uint8_t *VAR_4;
    size_t VAR_5, VAR_6;
    int VAR_7;

    VAR_5 = 0;
    for (VAR_7 = 0; VAR_7 < VAR_3->nb_units; VAR_7++)
        VAR_5 += 3 + VAR_3->units[VAR_7].data_size;

    VAR_3->data_ref = FUNC_2(VAR_5 + VAR_0);
    if (!VAR_3->data_ref)
        return FUNC_0(VAR_1);
    VAR_4 = VAR_3->data_ref->data;

    VAR_6 = 0;
    for (VAR_7 = 0; VAR_7 < VAR_3->nb_units; VAR_7++) {
        CodedBitstreamUnit *VAR_8 = &VAR_3->units[VAR_7];

        VAR_4[VAR_6++] = 0;
        VAR_4[VAR_6++] = 0;
        VAR_4[VAR_6++] = 1;

        FUNC_3(VAR_4 + VAR_6, VAR_8->data, VAR_8->data_size);
        VAR_6 += VAR_8->data_size;
    }

    FUNC_1(VAR_6 == VAR_5);

    FUNC_4(VAR_4 + VAR_5, 0, VAR_0);
    VAR_3->data = VAR_4;
    VAR_3->data_size = VAR_5;

    return 0;
}
