
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int c_superblock_width; int y_superblock_width; int c_superblock_height; int y_superblock_height; int* fragment_width; int* fragment_height; int* superblock_fragments; int* fragment_start; } ;
typedef TYPE_1__ Vp3DecodeContext ;


 int** VAR_0 ;

__attribute__((used)) static int FUNC_0(Vp3DecodeContext *VAR_1)
{
    int VAR_2, VAR_3, VAR_4;
    int VAR_5, VAR_6, VAR_7, VAR_8 = 0;

    for (VAR_4 = 0; VAR_4 < 3; VAR_4++) {
        int VAR_9 = VAR_4 ? VAR_1->c_superblock_width
                                : VAR_1->y_superblock_width;
        int VAR_10 = VAR_4 ? VAR_1->c_superblock_height
                                : VAR_1->y_superblock_height;
        int VAR_11 = VAR_1->fragment_width[!!VAR_4];
        int VAR_12 = VAR_1->fragment_height[!!VAR_4];

        for (VAR_3 = 0; VAR_3 < VAR_10; VAR_3++)
            for (VAR_2 = 0; VAR_2 < VAR_9; VAR_2++)
                for (VAR_7 = 0; VAR_7 < 16; VAR_7++) {
                    VAR_5 = 4 * VAR_2 + VAR_0[VAR_7][0];
                    VAR_6 = 4 * VAR_3 + VAR_0[VAR_7][1];

                    if (VAR_5 < VAR_11 && VAR_6 < VAR_12)
                        VAR_1->superblock_fragments[VAR_8++] = VAR_1->fragment_start[VAR_4] +
                                                       VAR_6 * VAR_11 + VAR_5;
                    else
                        VAR_1->superblock_fragments[VAR_8++] = -1;
                }
    }

    return 0;
}
