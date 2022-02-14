
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int* bytestream_start; int* bytestream; int* bytestream_end; int range; int low; int hash_shift; unsigned int* prob; int* range_hash; scalar_t__ overread; int scale; } ;
typedef TYPE_1__ lag_rac ;
struct TYPE_9__ {int* buffer; } ;
typedef TYPE_2__ GetBitContext ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;

void FUNC_4(lag_rac *VAR_0, GetBitContext *VAR_1, int VAR_2)
{
    int VAR_3, VAR_4, VAR_5;




    FUNC_1(VAR_1);
    VAR_5 = FUNC_3(VAR_1) >> 3;
    VAR_0->bytestream_start =
    VAR_0->bytestream = VAR_1->buffer + FUNC_2(VAR_1) / 8;
    VAR_0->bytestream_end = VAR_0->bytestream_start + VAR_5;

    VAR_0->range = 0x80;
    VAR_0->low = *VAR_0->bytestream >> 1;
    VAR_0->hash_shift = FUNC_0(VAR_0->scale, 10) - 10;
    VAR_0->overread = 0;

    for (VAR_3 = VAR_4 = 0; VAR_3 < 1024; VAR_3++) {
        unsigned VAR_6 = VAR_3 << VAR_0->hash_shift;
        while (VAR_0->prob[VAR_4 + 1] <= VAR_6)
            VAR_4++;
        VAR_0->range_hash[VAR_3] = VAR_4;
    }
}
