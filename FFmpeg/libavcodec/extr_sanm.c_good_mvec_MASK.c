
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pitch; int buf_size; int avctx; } ;
typedef TYPE_1__ SANMVideoContext ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*,int,int,int,int,int) ;

__attribute__((used)) static int FUNC_1(SANMVideoContext *VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5,
                     int VAR_6)
{
    int VAR_7 = VAR_2 + VAR_4 + (VAR_3 + VAR_5) * VAR_1->pitch;
    int VAR_8 = VAR_7 + (VAR_6 - 1) * (VAR_1->pitch + 1);

    int VAR_9 = VAR_7 >= 0 && VAR_8 < (VAR_1->buf_size >> 1);

    if (!VAR_9)
        FUNC_0(VAR_1->avctx, VAR_0,
               "Ignoring invalid motion vector (%i, %i)->(%u, %u), block size = %u\n",
               VAR_2 + VAR_4, VAR_3 + VAR_5, VAR_2, VAR_3, VAR_6);

    return VAR_9;
}
