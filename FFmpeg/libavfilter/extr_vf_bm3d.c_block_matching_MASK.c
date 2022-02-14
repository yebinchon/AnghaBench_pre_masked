
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int group_size; float th_mse; TYPE_2__* slices; } ;
struct TYPE_7__ {int nb_match_blocks; TYPE_1__* match_blocks; } ;
struct TYPE_6__ {int score; int x; int y; } ;
typedef TYPE_2__ SliceContext ;
typedef TYPE_3__ BM3DContext ;


 int FUNC_0 (TYPE_3__*,int const*,int,int,int,int,int,int) ;

__attribute__((used)) static void FUNC_1(BM3DContext *VAR_0, const uint8_t *VAR_1, int VAR_2,
                           int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
    SliceContext *VAR_7 = &VAR_0->slices[VAR_6];

    if (VAR_0->group_size == 1 || VAR_0->th_mse <= 0.f) {
        VAR_7->match_blocks[0].score = 1;
        VAR_7->match_blocks[0].x = VAR_4;
        VAR_7->match_blocks[0].y = VAR_3;
        VAR_7->nb_match_blocks = 1;
        return;
    }

    VAR_7->nb_match_blocks = 0;
    FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, 1, VAR_5, VAR_6);
}
