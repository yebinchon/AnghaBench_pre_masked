
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int chunk_count; TYPE_1__* chunks; } ;
struct TYPE_4__ {size_t compressed_offset; scalar_t__ compressor; scalar_t__ compressed_size; } ;
typedef TYPE_2__ HapContext ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(HapContext *VAR_1)
{
    int VAR_2;
    size_t VAR_3 = 0;
    for (VAR_2 = 0; VAR_2 < VAR_1->chunk_count; VAR_2++) {
        if (VAR_1->chunks[VAR_2].compressed_offset != VAR_3
            || VAR_1->chunks[VAR_2].compressor != VAR_0)
            return 0;
        VAR_3 += VAR_1->chunks[VAR_2].compressed_size;
    }
    return 1;
}
