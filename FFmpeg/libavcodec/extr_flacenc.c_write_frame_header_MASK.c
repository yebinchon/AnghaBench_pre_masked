
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int buf; } ;
struct TYPE_8__ {int* bs_code; int ch_mode; } ;
struct TYPE_9__ {int* sr_code; int channels; int bps_code; TYPE_3__ pb; int frame_count; TYPE_1__ frame; } ;
typedef TYPE_1__ FlacFrame ;
typedef TYPE_2__ FlacEncodeContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int,int) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,int ) ;

__attribute__((used)) static void FUNC_6(FlacEncodeContext *VAR_3)
{
    FlacFrame *VAR_4;
    int VAR_5;

    VAR_4 = &VAR_3->frame;

    FUNC_3(&VAR_3->pb, 16, 0xFFF8);
    FUNC_3(&VAR_3->pb, 4, VAR_4->bs_code[0]);
    FUNC_3(&VAR_3->pb, 4, VAR_3->sr_code[0]);

    if (VAR_4->ch_mode == VAR_1)
        FUNC_3(&VAR_3->pb, 4, VAR_3->channels-1);
    else
        FUNC_3(&VAR_3->pb, 4, VAR_4->ch_mode + VAR_2 - 1);

    FUNC_3(&VAR_3->pb, 3, VAR_3->bps_code);
    FUNC_3(&VAR_3->pb, 1, 0);
    FUNC_5(&VAR_3->pb, VAR_3->frame_count);

    if (VAR_4->bs_code[0] == 6)
        FUNC_3(&VAR_3->pb, 8, VAR_4->bs_code[1]);
    else if (VAR_4->bs_code[0] == 7)
        FUNC_3(&VAR_3->pb, 16, VAR_4->bs_code[1]);

    if (VAR_3->sr_code[0] == 12)
        FUNC_3(&VAR_3->pb, 8, VAR_3->sr_code[1]);
    else if (VAR_3->sr_code[0] > 12)
        FUNC_3(&VAR_3->pb, 16, VAR_3->sr_code[1]);

    FUNC_2(&VAR_3->pb);
    VAR_5 = FUNC_0(FUNC_1(VAR_0), 0, VAR_3->pb.buf,
                 FUNC_4(&VAR_3->pb) >> 3);
    FUNC_3(&VAR_3->pb, 8, VAR_5);
}
