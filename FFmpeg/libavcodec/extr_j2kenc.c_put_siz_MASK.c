
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int buf_end; int buf; int ncomponents; int* chroma_shift; int tile_height; int tile_width; int height; int width; } ;
typedef TYPE_1__ Jpeg2000EncoderContext ;


 int VAR_0 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (int*,int ) ;
 int FUNC_2 (int*,int) ;

__attribute__((used)) static int FUNC_3(Jpeg2000EncoderContext *VAR_1)
{
    int VAR_2;

    if (VAR_1->buf_end - VAR_1->buf < 40 + 3 * VAR_1->ncomponents)
        return -1;

    FUNC_0(&VAR_1->buf, VAR_0);
    FUNC_0(&VAR_1->buf, 38 + 3 * VAR_1->ncomponents);
    FUNC_0(&VAR_1->buf, 0);
    FUNC_1(&VAR_1->buf, VAR_1->width);
    FUNC_1(&VAR_1->buf, VAR_1->height);
    FUNC_1(&VAR_1->buf, 0);
    FUNC_1(&VAR_1->buf, 0);

    FUNC_1(&VAR_1->buf, VAR_1->tile_width);
    FUNC_1(&VAR_1->buf, VAR_1->tile_height);
    FUNC_1(&VAR_1->buf, 0);
    FUNC_1(&VAR_1->buf, 0);
    FUNC_0(&VAR_1->buf, VAR_1->ncomponents);

    for (VAR_2 = 0; VAR_2 < VAR_1->ncomponents; VAR_2++){
        FUNC_2(&VAR_1->buf, 7);
        FUNC_2(&VAR_1->buf, VAR_2?1<<VAR_1->chroma_shift[0]:1);
        FUNC_2(&VAR_1->buf, VAR_2?1<<VAR_1->chroma_shift[1]:1);
    }
    return 0;
}
