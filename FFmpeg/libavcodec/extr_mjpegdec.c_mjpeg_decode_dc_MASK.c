
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int table; } ;
struct TYPE_4__ {int gb; TYPE_3__** vlcs; int avctx; } ;
typedef TYPE_1__ MJpegDecodeContext ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*,int ,int,TYPE_3__*) ;
 int FUNC_1 (int *,int ,int,int) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static inline int FUNC_3(MJpegDecodeContext *VAR_1, int VAR_2)
{
    int VAR_3;
    VAR_3 = FUNC_1(&VAR_1->gb, VAR_1->vlcs[0][VAR_2].table, 9, 2);
    if (VAR_3 < 0 || VAR_3 > 16) {
        FUNC_0(VAR_1->avctx, VAR_0,
               "mjpeg_decode_dc: bad vlc: %d:%d (%p)\n",
               0, VAR_2, &VAR_1->vlcs[0][VAR_2]);
        return 0xfffff;
    }

    if (VAR_3)
        return FUNC_2(&VAR_1->gb, VAR_3);
    else
        return 0;
}
