
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* priv_data; TYPE_2__* pb; } ;
struct TYPE_9__ {int seekable; } ;
struct TYPE_8__ {int frame_cnt; int sum_delta_pts; } ;
typedef TYPE_1__ IVFEncContext ;
typedef TYPE_2__ AVIOContext ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,size_t,int ) ;
 size_t FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_2)
{
    AVIOContext *VAR_3 = VAR_2->pb;
    IVFEncContext *VAR_4 = VAR_2->priv_data;

    if ((VAR_3->seekable & VAR_0) && VAR_4->frame_cnt > 1) {
        size_t VAR_5 = FUNC_1(VAR_3);

        FUNC_0(VAR_3, 24, VAR_1);

        FUNC_2(VAR_3, VAR_4->frame_cnt * VAR_4->sum_delta_pts / (VAR_4->frame_cnt - 1));
        FUNC_2(VAR_3, 0);
        FUNC_0(VAR_3, VAR_5, VAR_1);
    }

    return 0;
}
