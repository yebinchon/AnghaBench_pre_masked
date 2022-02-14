
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {TYPE_1__* content; } ;
struct TYPE_4__ {int* data; int data_size; int data_bit_start; int header; } ;
typedef int PutBitContext ;
typedef TYPE_1__ MPEG2RawSlice ;
typedef TYPE_2__ CodedBitstreamUnit ;
typedef int CodedBitstreamContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int*) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int*,size_t) ;
 int FUNC_7 (int *,int,int) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,size_t) ;

__attribute__((used)) static int FUNC_13(CodedBitstreamContext *VAR_1,
                                 CodedBitstreamUnit *VAR_2,
                                 PutBitContext *VAR_3)
{
    MPEG2RawSlice *VAR_4 = VAR_2->content;
    int VAR_5;

    VAR_5 = FUNC_4(VAR_1, VAR_3, &VAR_4->header);
    if (VAR_5 < 0)
        return VAR_5;

    if (VAR_4->data) {
        size_t VAR_6 = VAR_4->data_size - (VAR_4->data_bit_start + 7) / 8;
        uint8_t *VAR_7 = VAR_4->data + VAR_4->data_bit_start / 8;

        FUNC_3(VAR_4->data_bit_start >= 0 &&
                   8 * VAR_4->data_size > VAR_4->data_bit_start);

        if (VAR_4->data_size * 8 + 8 > FUNC_10(VAR_3))
            return FUNC_0(VAR_0);


        if (VAR_4->data_bit_start % 8)
            FUNC_7(VAR_3, 8 - VAR_4->data_bit_start % 8,
                     *VAR_7++ & FUNC_2(8 - VAR_4->data_bit_start % 8));

        if (FUNC_9(VAR_3) % 8 == 0) {



            FUNC_5(VAR_3);
            FUNC_6(FUNC_11(VAR_3), VAR_7, VAR_6);
            FUNC_12(VAR_3, VAR_6);
        } else {

            for (; VAR_6 > 3; VAR_6 -= 4, VAR_7 += 4)
                FUNC_8(VAR_3, FUNC_1(VAR_7));

            for (; VAR_6; VAR_6--, VAR_7++)
                FUNC_7(VAR_3, 8, *VAR_7);


            FUNC_7(VAR_3, 8 - FUNC_9(VAR_3) % 8, 0);
        }
    }

    return 0;
}
