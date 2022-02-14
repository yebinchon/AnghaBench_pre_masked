
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* priv_data; } ;
struct TYPE_8__ {int width; int height; int tilebuffer; TYPE_1__* refframe; int gbc; } ;
struct TYPE_7__ {int* linesize; scalar_t__* data; } ;
typedef TYPE_2__ TDSCContext ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char,char,char,char) ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__,int,int ,int,int,int) ;
 int FUNC_2 (TYPE_3__*,int ,char*,...) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (TYPE_3__*,int,int,int,int,int) ;

__attribute__((used)) static int FUNC_9(AVCodecContext *VAR_4, int VAR_5)
{
    TDSCContext *VAR_6 = VAR_4->priv_data;
    int VAR_7;


    for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
        int VAR_8;
        int VAR_9;
        int VAR_10, VAR_11, VAR_12, VAR_13;
        int VAR_14;

        if (FUNC_5(&VAR_6->gbc) < 4 ||
            FUNC_6(&VAR_6->gbc) != FUNC_0('T','D','S','B') ||
            FUNC_5(&VAR_6->gbc) < VAR_3 - 4) {
            FUNC_2(VAR_4, VAR_2, "TDSB tag is too small.\n");
            return VAR_0;
        }

        VAR_8 = FUNC_6(&VAR_6->gbc);
        if (FUNC_5(&VAR_6->gbc) < VAR_8)
            return VAR_0;

        VAR_9 = FUNC_6(&VAR_6->gbc);
        FUNC_7(&VAR_6->gbc, 4);
        VAR_10 = FUNC_6(&VAR_6->gbc);
        VAR_11 = FUNC_6(&VAR_6->gbc);
        VAR_12 = FUNC_6(&VAR_6->gbc) - VAR_10;
        VAR_13 = FUNC_6(&VAR_6->gbc) - VAR_11;

        if (VAR_10 >= VAR_6->width || VAR_11 >= VAR_6->height) {
            FUNC_2(VAR_4, VAR_2,
                   "Invalid tile position (%d.%d outside %dx%d).\n",
                   VAR_10, VAR_11, VAR_6->width, VAR_6->height);
            return VAR_0;
        }
        if (VAR_10 + VAR_12 > VAR_6->width || VAR_11 + VAR_13 > VAR_6->height) {
            FUNC_2(VAR_4, VAR_2,
                   "Invalid tile size %dx%d\n", VAR_12, VAR_13);
            return VAR_0;
        }

        VAR_14 = FUNC_3(&VAR_6->tilebuffer, VAR_8);
        if (!VAR_6->tilebuffer)
            return VAR_14;

        FUNC_4(&VAR_6->gbc, VAR_6->tilebuffer, VAR_8);

        if (VAR_9 == FUNC_0('G','E','P','J')) {

            VAR_14 = FUNC_8(VAR_4, VAR_8, VAR_10, VAR_11, VAR_12, VAR_13);
            if (VAR_14 < 0)
                return VAR_14;
        } else if (VAR_9 == FUNC_0(' ','W','A','R')) {

            FUNC_1(VAR_6->refframe->data[0] + VAR_10 * 3 +
                                VAR_6->refframe->linesize[0] * VAR_11,
                                VAR_6->refframe->linesize[0], VAR_6->tilebuffer,
                                VAR_12 * 3, VAR_12 * 3, VAR_13);
        } else {
            FUNC_2(VAR_4, VAR_2, "Unknown tile type %08x.\n", VAR_9);
            return VAR_0;
        }
        FUNC_2(VAR_4, VAR_1, "Tile %d, %dx%d (%d.%d)\n", VAR_7, VAR_12, VAR_13, VAR_10, VAR_11);
    }

    return 0;
}
