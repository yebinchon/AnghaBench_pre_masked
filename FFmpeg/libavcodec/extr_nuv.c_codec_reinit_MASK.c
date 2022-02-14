
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int width; int height; TYPE_1__* priv_data; } ;
struct TYPE_7__ {int width; int height; int quality; int cq; int lq; int rtj; int pic; int decomp_buf; int decomp_size; } ;
typedef TYPE_1__ NuvContext ;
typedef TYPE_2__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int,int ,TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int ,char*) ;
 int FUNC_7 (int *,int,int,int ,int ) ;
 int FUNC_8 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_9(AVCodecContext *VAR_6, int VAR_7, int VAR_8,
                        int VAR_9)
{
    NuvContext *VAR_10 = VAR_6->priv_data;
    int VAR_11;

    VAR_7 = FUNC_1(VAR_7, 2);
    VAR_8 = FUNC_1(VAR_8, 2);
    if (VAR_9 >= 0)
        FUNC_8(VAR_10, VAR_9);
    if (VAR_7 != VAR_10->width || VAR_8 != VAR_10->height) {

        int VAR_12 = VAR_8 * VAR_7 * 3 / 2
                     + FUNC_2(VAR_2, VAR_0)
                     + VAR_5;
        if (VAR_12 > VAR_4/8)
            return -1;
        if ((VAR_11 = FUNC_5(VAR_8, VAR_7, 0, VAR_6)) < 0)
            return VAR_11;
        VAR_6->width = VAR_10->width = VAR_7;
        VAR_6->height = VAR_10->height = VAR_8;
        FUNC_3(&VAR_10->decomp_buf, &VAR_10->decomp_size,
                       VAR_12);
        if (!VAR_10->decomp_buf) {
            FUNC_6(VAR_6, VAR_1,
                   "Can't allocate decompression buffer.\n");
            return FUNC_0(VAR_3);
        }
        FUNC_7(&VAR_10->rtj, VAR_10->width, VAR_10->height, VAR_10->lq, VAR_10->cq);
        FUNC_4(VAR_10->pic);
        return 1;
    } else if (VAR_9 != VAR_10->quality)
        FUNC_7(&VAR_10->rtj, VAR_10->width, VAR_10->height, VAR_10->lq, VAR_10->cq);

    return 0;
}
