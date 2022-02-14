
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_8__ {int bias; struct TYPE_8__** child; int flags; TYPE_1__ mv; } ;
typedef TYPE_2__ TileInfo ;
struct TYPE_9__ {scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_3__ MV ;
typedef int AVFrame ;
typedef int AVCodecContext ;


 int FUNC_0 (TYPE_2__**) ;
 int FUNC_1 (int *,int *,int *,int,int,int,scalar_t__,scalar_t__,int,int ) ;

__attribute__((used)) static int FUNC_2(AVCodecContext *VAR_0, AVFrame *VAR_1, AVFrame *VAR_2,
                        int VAR_3, int VAR_4, int VAR_5, int VAR_6,
                        TileInfo *VAR_7, MV VAR_8)
{
    int VAR_9;
    MV VAR_10;

    VAR_10.x = VAR_8.x + VAR_7->mv.x;
    VAR_10.y = VAR_8.y + VAR_7->mv.y;

    if (!VAR_7->flags) {
        VAR_9 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_10.x, VAR_10.y, VAR_6, VAR_7->bias);
    } else {
        int VAR_11, VAR_12 = VAR_6 >> 1;

        for (VAR_11 = 0; VAR_11 < 4; VAR_11++) {
            int VAR_13 = (VAR_11 & 2) == 0 ? 0 : VAR_12;
            int VAR_14 = (VAR_11 & 1) == 0 ? 0 : VAR_12;

            if (VAR_7->child[VAR_11]) {
                VAR_9 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4 + VAR_13, VAR_5 + VAR_14, VAR_12, VAR_7->child[VAR_11], VAR_8);
                FUNC_0(&VAR_7->child[VAR_11]);
            } else {
                VAR_9 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4 + VAR_13, VAR_5 + VAR_14, VAR_10.x, VAR_10.y, VAR_12, VAR_7->bias);
            }
        }
    }

    return VAR_9;
}
