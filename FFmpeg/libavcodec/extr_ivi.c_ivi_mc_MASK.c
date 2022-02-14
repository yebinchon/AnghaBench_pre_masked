
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int (* ivi_mc_func ) (scalar_t__,scalar_t__,int,int) ;
typedef int (* ivi_mc_avg_func ) (scalar_t__,scalar_t__,scalar_t__,int,int,int) ;
struct TYPE_3__ {int pitch; int aheight; int blk_size; scalar_t__ b_ref_buf; scalar_t__ ref_buf; scalar_t__ buf; } ;
typedef TYPE_1__ IVIBandDesc ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(const IVIBandDesc *VAR_1, ivi_mc_func VAR_2, ivi_mc_avg_func VAR_3,
                  int VAR_4, int VAR_5, int VAR_6, int VAR_7, int VAR_8,
                  int VAR_9, int VAR_10)
{
    int VAR_11 = VAR_4 + VAR_6 * VAR_1->pitch + VAR_5;
    int VAR_12 = VAR_1->pitch * VAR_1->aheight;
    int VAR_13 = VAR_1->pitch * (VAR_1->blk_size - 1) + VAR_1->blk_size;
    int VAR_14 = (VAR_9 > 1) * VAR_1->pitch + (VAR_9 & 1);

    if (VAR_9 != -1) {
        FUNC_0(VAR_4 >= 0 && VAR_11 >= 0 && VAR_1->ref_buf);
        FUNC_0(VAR_12 - VAR_13 >= VAR_4);
        FUNC_0(VAR_12 - VAR_13 - VAR_14 >= VAR_11);
    }

    if (VAR_10 == -1) {
        VAR_2(VAR_1->buf + VAR_4, VAR_1->ref_buf + VAR_11, VAR_1->pitch, VAR_9);
    } else {
        int VAR_15 = VAR_4 + VAR_8 * VAR_1->pitch + VAR_7;
        int VAR_16 = (VAR_10 > 1) * VAR_1->pitch + (VAR_10 & 1);
        if (VAR_4 < 0 || VAR_15 < 0 || !VAR_1->b_ref_buf)
            return VAR_0;
        if (VAR_12 - VAR_13 - VAR_16 < VAR_15)
            return VAR_0;

        if (VAR_9 == -1)
            VAR_2(VAR_1->buf + VAR_4, VAR_1->b_ref_buf + VAR_15,
               VAR_1->pitch, VAR_10);
        else
            VAR_3(VAR_1->buf + VAR_4, VAR_1->ref_buf + VAR_11,
                   VAR_1->b_ref_buf + VAR_15, VAR_1->pitch,
                   VAR_9, VAR_10);
    }

    return 0;
}
