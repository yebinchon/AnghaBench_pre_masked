
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct AVAESCTR {scalar_t__ block_offset; int * encrypted_counter; scalar_t__ counter; int aes; } ;


 int VAR_0 ;
 int * FUNC_0 (int const*,int const*) ;
 int FUNC_1 (int ,int *,scalar_t__,int,int *,int ) ;
 int FUNC_2 (scalar_t__) ;

void FUNC_3(struct AVAESCTR *VAR_1, uint8_t *VAR_2, const uint8_t *VAR_3, int VAR_4)
{
    const uint8_t* VAR_5 = VAR_3 + VAR_4;
    const uint8_t* VAR_6;
    uint8_t* VAR_7;

    while (VAR_3 < VAR_5) {
        if (VAR_1->block_offset == 0) {
            FUNC_1(VAR_1->aes, VAR_1->encrypted_counter, VAR_1->counter, 1, ((void*)0), 0);

            FUNC_2(VAR_1->counter + 8);
        }

        VAR_7 = VAR_1->encrypted_counter + VAR_1->block_offset;
        VAR_6 = VAR_3 + VAR_0 - VAR_1->block_offset;
        VAR_6 = FUNC_0(VAR_6, VAR_5);

        VAR_1->block_offset += VAR_6 - VAR_3;
        VAR_1->block_offset &= (VAR_0 - 1);

        while (VAR_3 < VAR_6) {
            *VAR_2++ = *VAR_3++ ^ *VAR_7++;
        }
    }
}
