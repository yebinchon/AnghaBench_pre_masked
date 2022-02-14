
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {int data_size; int data_ref; int const* data; } ;
typedef int CodedBitstreamUnitType ;
typedef TYPE_1__ CodedBitstreamFragment ;
typedef int CodedBitstreamContext ;


 int VAR_0 ;
 int * FUNC_0 (int const*,int const*,int*) ;
 int FUNC_1 (int *,TYPE_1__*,int,int,int *,size_t,int ) ;

__attribute__((used)) static int FUNC_2(CodedBitstreamContext *VAR_1,
                                    CodedBitstreamFragment *VAR_2,
                                    int VAR_3)
{
    const uint8_t *VAR_4, *VAR_5;
    CodedBitstreamUnitType VAR_6;
    uint32_t VAR_7 = -1;
    size_t VAR_8;
    int VAR_9, VAR_10, VAR_11 = 0;

    VAR_4 = FUNC_0(VAR_2->data, VAR_2->data + VAR_2->data_size,
                                   &VAR_7);
    if (VAR_7 >> 8 != 0x000001) {

        return VAR_0;
    }

    for (VAR_10 = 0;; VAR_10++) {
        VAR_6 = VAR_7 & 0xff;

        if (VAR_4 == VAR_2->data + VAR_2->data_size) {




            VAR_7 = 0;
        }

        VAR_5 = FUNC_0(VAR_4--, VAR_2->data + VAR_2->data_size,
                                     &VAR_7);





        if (VAR_7 >> 8 == 0x000001) {


            VAR_8 = (VAR_5 - 4) - VAR_4;
        } else {

           VAR_8 = VAR_5 - VAR_4;
           VAR_11 = 1;
        }

        VAR_9 = FUNC_1(VAR_1, VAR_2, VAR_10, VAR_6, (uint8_t*)VAR_4,
                                      VAR_8, VAR_2->data_ref);
        if (VAR_9 < 0)
            return VAR_9;

        if (VAR_11)
            break;

        VAR_4 = VAR_5;
    }

    return 0;
}
