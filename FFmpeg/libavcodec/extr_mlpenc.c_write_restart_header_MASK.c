
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef unsigned int uint8_t ;
typedef unsigned int int32_t ;
struct TYPE_11__ {unsigned int timestamp; TYPE_1__* cur_restart_header; } ;
struct TYPE_10__ {int buf; } ;
struct TYPE_9__ {unsigned int min_channel; unsigned int max_channel; unsigned int max_matrix_channel; unsigned int noise_shift; unsigned int noisegen_seed; unsigned int max_huff_lsbs; unsigned int max_output_bits; unsigned int data_check_present; int lossless_check_data; } ;
typedef TYPE_1__ RestartHeader ;
typedef TYPE_2__ PutBitContext ;
typedef TYPE_3__ MLPEncodeContext ;


 unsigned int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int,unsigned int) ;
 unsigned int FUNC_3 (TYPE_2__*) ;
 unsigned int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(MLPEncodeContext *VAR_0, PutBitContext *VAR_1)
{
    RestartHeader *VAR_2 = VAR_0->cur_restart_header;
    int32_t VAR_3 = FUNC_4(VAR_2->lossless_check_data);
    unsigned int VAR_4 = FUNC_3(VAR_1);
    PutBitContext VAR_5;
    uint8_t VAR_6;
    unsigned int VAR_7;

    FUNC_2(VAR_1, 14, 0x31ea );
    FUNC_2(VAR_1, 16, VAR_0->timestamp );
    FUNC_2(VAR_1, 4, VAR_2->min_channel );
    FUNC_2(VAR_1, 4, VAR_2->max_channel );
    FUNC_2(VAR_1, 4, VAR_2->max_matrix_channel);
    FUNC_2(VAR_1, 4, VAR_2->noise_shift );
    FUNC_2(VAR_1, 23, VAR_2->noisegen_seed );
    FUNC_2(VAR_1, 4, 0 );
    FUNC_2(VAR_1, 5, VAR_2->max_huff_lsbs );
    FUNC_2(VAR_1, 5, VAR_2->max_output_bits );
    FUNC_2(VAR_1, 5, VAR_2->max_output_bits );
    FUNC_2(VAR_1, 1, VAR_2->data_check_present);
    FUNC_2(VAR_1, 8, VAR_3 );
    FUNC_2(VAR_1, 16, 0 );

    for (VAR_7 = 0; VAR_7 <= VAR_2->max_matrix_channel; VAR_7++)
        FUNC_2(VAR_1, 6, VAR_7);


    VAR_5 = *VAR_1;
    FUNC_1(&VAR_5);

    VAR_6 = FUNC_0(VAR_1->buf, FUNC_3(VAR_1) - VAR_4);

    FUNC_2(VAR_1, 8, VAR_6);
}
