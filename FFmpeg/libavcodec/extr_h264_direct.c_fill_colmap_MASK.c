
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int map ;
struct TYPE_10__ {scalar_t__ picture_structure; } ;
struct TYPE_9__ {int** ref_count; int*** ref_poc; int frame_num; scalar_t__ mbaff; } ;
struct TYPE_8__ {int* ref_count; TYPE_1__** ref_list; } ;
struct TYPE_7__ {int reference; TYPE_3__* parent; } ;
typedef TYPE_2__ H264SliceContext ;
typedef TYPE_3__ H264Picture ;
typedef TYPE_4__ H264Context ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int*,int ,int) ;

__attribute__((used)) static void FUNC_1(const H264Context *VAR_1, H264SliceContext *VAR_2,
                        int VAR_3[2][16 + 32], int VAR_4,
                        int VAR_5, int VAR_6, int VAR_7)
{
    H264Picture *const VAR_8 = VAR_2->ref_list[1][0].parent;
    int VAR_9, VAR_10, VAR_11;
    int VAR_12 = VAR_7 ? 16 : 0;
    int VAR_13 = VAR_7 ? 16 + 2 * VAR_2->ref_count[0] : VAR_2->ref_count[0];
    int VAR_14 = VAR_7 || VAR_1->picture_structure != VAR_0;


    FUNC_0(VAR_3[VAR_4], 0, sizeof(VAR_3[VAR_4]));

    for (VAR_11 = 0; VAR_11 < 2; VAR_11++) {
        for (VAR_10 = 0; VAR_10 < VAR_8->ref_count[VAR_6][VAR_4]; VAR_10++) {
            int VAR_15 = VAR_8->ref_poc[VAR_6][VAR_4][VAR_10];

            if (!VAR_14)
                VAR_15 |= 3;

            else if (VAR_14 && (VAR_15 & 3) == 3)
                VAR_15 = (VAR_15 & ~3) + VAR_11 + 1;

            for (VAR_9 = VAR_12; VAR_9 < VAR_13; VAR_9++) {
                if (4 * VAR_2->ref_list[0][VAR_9].parent->frame_num +
                    (VAR_2->ref_list[0][VAR_9].reference & 3) == VAR_15) {
                    int VAR_16 = VAR_7 ? (VAR_9 - 16) ^ VAR_5 : VAR_9;
                    if (VAR_8->mbaff)
                        VAR_3[VAR_4][2 * VAR_10 + (VAR_11 ^ VAR_5) + 16] = VAR_16;
                    if (VAR_11 == VAR_5 || !VAR_14)
                        VAR_3[VAR_4][VAR_10] = VAR_16;
                    break;
                }
            }
        }
    }
}
