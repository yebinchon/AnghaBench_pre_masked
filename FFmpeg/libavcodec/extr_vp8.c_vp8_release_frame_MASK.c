
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int tf; int * hwaccel_picture_private; int hwaccel_priv_buf; int seg_map; } ;
typedef TYPE_1__ VP8Frame ;
struct TYPE_6__ {int avctx; } ;
typedef TYPE_2__ VP8Context ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(VP8Context *VAR_0, VP8Frame *VAR_1)
{
    FUNC_0(&VAR_1->seg_map);
    FUNC_0(&VAR_1->hwaccel_priv_buf);
    VAR_1->hwaccel_picture_private = ((void*)0);
    FUNC_1(VAR_0->avctx, &VAR_1->tf);
}
