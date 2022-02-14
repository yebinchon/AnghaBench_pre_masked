
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int enable_video; int pix_bpp; int video_scale; scalar_t__ pclk_khz; int gr_during_vid; } ;
typedef TYPE_1__ nv3_sim_state ;
struct TYPE_10__ {char valid; int video_burst_size; int video_lwm; scalar_t__ rtl_values; } ;
typedef TYPE_2__ nv3_fifo_info ;
struct TYPE_11__ {int gr_en; int vid_en; int vid_only_once; int gr_only_once; int gdrain_rate; int vdrain_rate; int mdrain_rate; char converged; } ;
typedef TYPE_3__ nv3_arb_info ;


 char FUNC_0 (TYPE_2__*,TYPE_1__*,TYPE_3__*) ;

__attribute__((used)) static void FUNC_1
(
    nv3_fifo_info * VAR_0,
    nv3_sim_state * VAR_1
)
{
    nv3_fifo_info VAR_2;
    nv3_arb_info VAR_3;
    char VAR_4, VAR_5;

    VAR_3.gr_en = 1;
    VAR_3.vid_en = VAR_1->enable_video;
    VAR_3.vid_only_once = 0;
    VAR_3.gr_only_once = 0;
    VAR_3.gdrain_rate = (int) VAR_1->pclk_khz * (VAR_1->pix_bpp/8);
    VAR_3.vdrain_rate = (int) VAR_1->pclk_khz * 2;
    if (VAR_1->video_scale != 0)
        VAR_3.vdrain_rate = VAR_3.vdrain_rate/VAR_1->video_scale;
    VAR_3.mdrain_rate = 33000;
    VAR_0->rtl_values = 0;
    if (!VAR_1->gr_during_vid && VAR_1->enable_video)
    {
        VAR_3.gr_only_once = 1;
        VAR_3.gr_en = 1;
        VAR_3.gdrain_rate = 0;
        VAR_5 = FUNC_0(VAR_0, VAR_1, &VAR_3);
        VAR_5 = VAR_3.converged;
        VAR_2.video_lwm = VAR_0->video_lwm;
        VAR_2.video_burst_size = VAR_0->video_burst_size;
        VAR_3.vid_en = 1;
        VAR_3.vid_only_once = 1;
        VAR_3.gr_en = 1;
        VAR_3.gdrain_rate = (int) VAR_1->pclk_khz * (VAR_1->pix_bpp/8);
        VAR_3.vdrain_rate = 0;
        VAR_4 = FUNC_0(VAR_0, VAR_1, &VAR_3);
        VAR_4 = VAR_3.converged;
        VAR_0->video_lwm = VAR_2.video_lwm;
        VAR_0->video_burst_size = VAR_2.video_burst_size;
        VAR_0->valid = VAR_4 & VAR_5;
    }
    else
    {
        if (!VAR_3.gr_en) VAR_3.gdrain_rate = 0;
        if (!VAR_3.vid_en) VAR_3.vdrain_rate = 0;
        VAR_4 = FUNC_0(VAR_0, VAR_1, &VAR_3);
        VAR_0->valid = VAR_3.converged;
    }
}
