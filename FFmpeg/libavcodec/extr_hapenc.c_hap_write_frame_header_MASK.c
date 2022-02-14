
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int chunk_count; int opt_tex_fmt; TYPE_1__* chunks; } ;
struct TYPE_5__ {int compressor; int compressed_size; } ;
typedef int PutByteContext ;
typedef TYPE_2__ HapContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *,int ,int,int) ;

__attribute__((used)) static void FUNC_5(HapContext *VAR_6, uint8_t *VAR_7, int VAR_8)
{
    PutByteContext VAR_9;
    int VAR_10;

    FUNC_0(&VAR_9, VAR_7, VAR_8);
    if (VAR_6->chunk_count == 1) {

        FUNC_4(&VAR_9, VAR_1, VAR_8 - 8,
                                 VAR_6->chunks[0].compressor | VAR_6->opt_tex_fmt);
    } else {

        FUNC_4(&VAR_9, VAR_1, VAR_8 - 8,
                                 VAR_0 | VAR_6->opt_tex_fmt);
        FUNC_4(&VAR_9, VAR_2, FUNC_3(VAR_6),
                                 VAR_4);
        FUNC_4(&VAR_9, VAR_2, VAR_6->chunk_count,
                                 VAR_3);

        for (VAR_10 = 0; VAR_10 < VAR_6->chunk_count; VAR_10++) {
            FUNC_1(&VAR_9, VAR_6->chunks[VAR_10].compressor >> 4);
        }

        FUNC_4(&VAR_9, VAR_2, VAR_6->chunk_count * 4,
                                 VAR_5);

        for (VAR_10 = 0; VAR_10 < VAR_6->chunk_count; VAR_10++) {
            FUNC_2(&VAR_9, VAR_6->chunks[VAR_10].compressed_size);
        }
    }
}
