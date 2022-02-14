
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int width; int height; } ;
struct TYPE_9__ {int chroma_x_shift; int chroma_y_shift; int pshift; void* blmotion; void* sbsplit; TYPE_3__* plane; TYPE_1__ seq; } ;
struct TYPE_7__ {void* tmp; int buf_base; scalar_t__ buf; } ;
struct TYPE_8__ {TYPE_2__ idwt; } ;
typedef TYPE_4__ DiracContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int VAR_0 ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_5 (int,int) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(DiracContext *VAR_3)
{
    int VAR_4 = FUNC_2(VAR_3->seq.width, 4);
    int VAR_5 = FUNC_2(VAR_3->seq.height, 4);
    int VAR_6, VAR_7, VAR_8, VAR_9;


    for (VAR_6 = 0; VAR_6 < 3; VAR_6++) {
        int VAR_10 = VAR_1 >> (VAR_6 ? VAR_3->chroma_x_shift : 0);
        int VAR_11 = VAR_1 >> (VAR_6 ? VAR_3->chroma_y_shift : 0);
        VAR_7 = VAR_3->seq.width >> (VAR_6 ? VAR_3->chroma_x_shift : 0);
        VAR_8 = VAR_3->seq.height >> (VAR_6 ? VAR_3->chroma_y_shift : 0);






        VAR_9 = FUNC_4(1<<VAR_2, VAR_11/2);
        VAR_7 = FUNC_3(FUNC_1(VAR_7, VAR_2), 8);
        VAR_8 = VAR_9 + FUNC_1(VAR_8, VAR_2) + VAR_11/2;

        VAR_3->plane[VAR_6].idwt.buf_base = FUNC_6((VAR_7+VAR_10), VAR_8 * (2 << VAR_3->pshift));
        VAR_3->plane[VAR_6].idwt.tmp = FUNC_5((VAR_7+16), 2 << VAR_3->pshift);
        VAR_3->plane[VAR_6].idwt.buf = VAR_3->plane[VAR_6].idwt.buf_base + (VAR_9*VAR_7)*(2 << VAR_3->pshift);
        if (!VAR_3->plane[VAR_6].idwt.buf_base || !VAR_3->plane[VAR_6].idwt.tmp)
            return FUNC_0(VAR_0);
    }


    VAR_3->sbsplit = FUNC_5(VAR_4, VAR_5);
    VAR_3->blmotion = FUNC_5(VAR_4, VAR_5 * 16 * sizeof(*VAR_3->blmotion));

    if (!VAR_3->sbsplit || !VAR_3->blmotion)
        return FUNC_0(VAR_0);
    return 0;
}
