
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int flags; TYPE_1__* priv_data; } ;
struct TYPE_8__ {int size; } ;
struct TYPE_7__ {int input_queue; int exit; } ;
typedef TYPE_1__ AndroidCameraCtx ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_3, AVPacket *VAR_4)
{
    AndroidCameraCtx *VAR_5 = VAR_3->priv_data;
    int VAR_6;

    if (!FUNC_0(&VAR_5->exit)) {
        VAR_6 = FUNC_1(VAR_5->input_queue, VAR_4,
                VAR_3->flags & VAR_1 ? VAR_2 : 0);
    } else {
        VAR_6 = VAR_0;
    }

    if (VAR_6 < 0) {
        return VAR_6;
    } else {
        return VAR_4->size;
    }
}
