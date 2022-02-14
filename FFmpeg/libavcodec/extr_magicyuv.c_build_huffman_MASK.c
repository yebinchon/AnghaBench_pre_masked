
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* priv_data; } ;
struct TYPE_5__ {int** len; int planes; int * vlc; scalar_t__ (* huff_build ) (int *,int*) ;} ;
typedef TYPE_1__ MagicYUVContext ;
typedef int GetBitContext ;
typedef TYPE_2__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,char*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int**,int ,int) ;
 scalar_t__ FUNC_5 (int *,int*) ;

__attribute__((used)) static int FUNC_6(AVCodecContext *VAR_2, GetBitContext *VAR_3, int VAR_4)
{
    MagicYUVContext *VAR_5 = VAR_2->priv_data;
    int VAR_6 = 0, VAR_7 = 0, VAR_8;

    FUNC_4(VAR_5->len, 0, sizeof(VAR_5->len));
    while (FUNC_2(VAR_3) >= 8) {
        int VAR_9 = FUNC_1(VAR_3, 1);
        int VAR_10 = FUNC_1(VAR_3, 7);
        int VAR_11 = FUNC_3(VAR_3, VAR_9 * 8) + 1;

        for (VAR_8 = 0; VAR_8 < VAR_11; VAR_8++)
            if (VAR_7 + VAR_8 < VAR_4)
                VAR_5->len[VAR_6][VAR_7 + VAR_8] = VAR_10;

        VAR_7 += VAR_11;
        if (VAR_7 == VAR_4) {
            VAR_7 = 0;
            if (VAR_5->huff_build(&VAR_5->vlc[VAR_6], VAR_5->len[VAR_6])) {
                FUNC_0(VAR_2, VAR_1, "Cannot build Huffman codes\n");
                return VAR_0;
            }
            VAR_6++;
            if (VAR_6 == VAR_5->planes) {
                break;
            }
        } else if (VAR_7 > VAR_4) {
            FUNC_0(VAR_2, VAR_1, "Invalid Huffman codes\n");
            return VAR_0;
        }
    }

    if (VAR_6 != VAR_5->planes) {
        FUNC_0(VAR_2, VAR_1, "Huffman tables too short\n");
        return VAR_0;
    }

    return 0;
}
