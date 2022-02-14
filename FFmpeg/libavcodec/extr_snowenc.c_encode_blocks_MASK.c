
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int bytestream_end; int bytestream; } ;
struct TYPE_8__ {int b_width; int b_height; scalar_t__ motion_est; int avctx; TYPE_1__ c; int keyframe; } ;
typedef TYPE_2__ SnowContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (TYPE_2__*,int ,int,int) ;
 int FUNC_2 (TYPE_2__*,int ,int,int) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(SnowContext *VAR_3, int VAR_4){
    int VAR_5, VAR_6;
    int VAR_7= VAR_3->b_width;
    int VAR_8= VAR_3->b_height;

    if(VAR_3->motion_est == VAR_1 && !VAR_3->keyframe && VAR_4)
        FUNC_3(VAR_3);

    for(VAR_6=0; VAR_6<VAR_8; VAR_6++){
        if(VAR_3->c.bytestream_end - VAR_3->c.bytestream < VAR_7*VAR_2*VAR_2*3){
            FUNC_0(VAR_3->avctx, VAR_0, "encoded frame too large\n");
            return;
        }
        for(VAR_5=0; VAR_5<VAR_7; VAR_5++){
            if(VAR_3->motion_est == VAR_1 || !VAR_4)
                FUNC_2(VAR_3, 0, VAR_5, VAR_6);
            else
                FUNC_1 (VAR_3, 0, VAR_5, VAR_6);
        }
    }
}
