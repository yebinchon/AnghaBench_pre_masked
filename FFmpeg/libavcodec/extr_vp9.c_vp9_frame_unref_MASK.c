
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * hwaccel_picture_private; int * segmentation_map; int hwaccel_priv_buf; int extradata; int tf; } ;
typedef TYPE_1__ VP9Frame ;
typedef int AVCodecContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(AVCodecContext *VAR_0, VP9Frame *VAR_1)
{
    FUNC_1(VAR_0, &VAR_1->tf);
    FUNC_0(&VAR_1->extradata);
    FUNC_0(&VAR_1->hwaccel_priv_buf);
    VAR_1->segmentation_map = ((void*)0);
    VAR_1->hwaccel_picture_private = ((void*)0);
}
