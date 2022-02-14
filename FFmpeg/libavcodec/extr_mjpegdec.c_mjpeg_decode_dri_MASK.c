
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int restart_interval; int avctx; scalar_t__ restart_count; int gb; } ;
typedef TYPE_1__ MJpegDecodeContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*,int) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static int FUNC_2(MJpegDecodeContext *VAR_2)
{
    if (FUNC_1(&VAR_2->gb, 16) != 4)
        return VAR_0;
    VAR_2->restart_interval = FUNC_1(&VAR_2->gb, 16);
    VAR_2->restart_count = 0;
    FUNC_0(VAR_2->avctx, VAR_1, "restart interval: %d\n",
           VAR_2->restart_interval);

    return 0;
}
