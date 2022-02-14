
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int huff_ncode; TYPE_1__* huff_buffer; } ;
struct TYPE_4__ {int code; int table_id; } ;
typedef TYPE_1__ MJpegHuffmanCode ;
typedef TYPE_2__ MJpegContext ;



__attribute__((used)) static inline void FUNC_0(MJpegContext *VAR_0, uint8_t VAR_1, int VAR_2)
{
    MJpegHuffmanCode *VAR_3 = &VAR_0->huff_buffer[VAR_0->huff_ncode++];
    VAR_3->table_id = VAR_1;
    VAR_3->code = VAR_2;
}
