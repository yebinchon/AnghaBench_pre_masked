
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int memory_width; int mclk_khz; int mem_page_miss; int mem_latency; int gr_during_vid; scalar_t__ enable_mp; } ;
typedef TYPE_1__ nv3_sim_state ;
typedef int nv3_fifo_info ;
struct TYPE_6__ {int cur; int gburst_size; int wcvocc; int vocc; int wcvlwm; int vburst_size; long vdrain_rate; long wcmocc; long mocc; int wcglwm; long wcgocc; long gocc; long gdrain_rate; long by_gfacc; int priority; long mdrain_rate; scalar_t__ converged; int first_macc; int first_gacc; int first_vacc; int vid_only_once; scalar_t__ vid_en; int gr_only_once; scalar_t__ gr_en; } ;
typedef TYPE_2__ nv3_arb_info ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(nv3_fifo_info *VAR_5, nv3_sim_state * VAR_6, nv3_arb_info *VAR_7)
{
    int VAR_8 = 0;
    int VAR_9;
    int VAR_10, VAR_11, VAR_12;
    int VAR_13 = 32;
    int VAR_14, VAR_15, VAR_16;
    int VAR_17;
    int VAR_18, VAR_19, VAR_20;
    int VAR_21, VAR_22, VAR_23;
    int VAR_24 ;
    long VAR_25;

    VAR_18 = 0;
    VAR_19 = 0;
    VAR_20 = 0;
    VAR_10 = 0;
    VAR_12 = 0;
    VAR_23 = VAR_7->cur;
    VAR_14 = 2;
    VAR_15 = 2;
    VAR_16 = 2;
    if (VAR_7->gburst_size == 128) VAR_24 = VAR_1;
    else VAR_24 = VAR_0;
    VAR_24 = VAR_0;
    while (1)
    {
        if (VAR_7->vid_en)
        {
            if (VAR_7->wcvocc > VAR_7->vocc) VAR_7->wcvocc = VAR_7->vocc;
            if (VAR_7->wcvlwm > VAR_18) VAR_7->wcvlwm = VAR_18 ;
            VAR_25 = 1000000 * VAR_7->vburst_size/(VAR_6->memory_width/8)/VAR_6->mclk_khz;
            VAR_10 = VAR_25 * VAR_7->vdrain_rate / 1000000;
            VAR_10 = VAR_7->wcvlwm - VAR_7->vburst_size + VAR_10;
        }
        if (VAR_6->enable_mp)
        {
            if (VAR_7->wcmocc > VAR_7->mocc) VAR_7->wcmocc = VAR_7->mocc;
        }
        if (VAR_7->gr_en)
        {
            if (VAR_7->wcglwm > VAR_19) VAR_7->wcglwm = VAR_19 ;
            if (VAR_7->wcgocc > VAR_7->gocc) VAR_7->wcgocc = VAR_7->gocc;
            VAR_25 = 1000000 * (VAR_7->gburst_size/(VAR_6->memory_width/8))/VAR_6->mclk_khz;
            VAR_12 = (VAR_25 * (long) VAR_7->gdrain_rate)/1000000;
            VAR_12 = VAR_7->wcglwm - VAR_7->gburst_size + VAR_12;
        }
        VAR_11 = 0;
        if (!VAR_6->gr_during_vid && VAR_7->vid_en)
            if (VAR_7->vid_en && (VAR_7->vocc < 0) && !VAR_7->vid_only_once)
                VAR_22 = 128;
            else if (VAR_7->mocc < 0)
                VAR_22 = VAR_3;
            else if (VAR_7->gocc< VAR_7->by_gfacc)
                VAR_22 = 129;
            else return (0);
        else switch (VAR_7->priority)
            {
                case 128:
                    if (VAR_7->vid_en && VAR_7->vocc<0 && !VAR_7->vid_only_once)
                        VAR_22 = 128;
                    else if (VAR_7->gr_en && VAR_7->gocc<0 && !VAR_7->gr_only_once)
                        VAR_22 = 129;
                    else if (VAR_7->mocc<0)
                        VAR_22 = VAR_3;
                    else return (0);
                    break;
                case 129:
                    if (VAR_7->gr_en && VAR_7->gocc<0 && !VAR_7->gr_only_once)
                        VAR_22 = 129;
                    else if (VAR_7->vid_en && VAR_7->vocc<0 && !VAR_7->vid_only_once)
                        VAR_22 = 128;
                    else if (VAR_7->mocc<0)
                        VAR_22 = VAR_3;
                    else return (0);
                    break;
                default:
                    if (VAR_7->mocc<0)
                        VAR_22 = VAR_3;
                    else if (VAR_7->gr_en && VAR_7->gocc<0 && !VAR_7->gr_only_once)
                        VAR_22 = 129;
                    else if (VAR_7->vid_en && VAR_7->vocc<0 && !VAR_7->vid_only_once)
                        VAR_22 = 128;
                    else return (0);
                    break;
            }
        VAR_21 = VAR_23;
        VAR_23 = VAR_22;
        VAR_8++;
        switch (VAR_23)
        {
            case 128:
                if (VAR_21==VAR_23) VAR_17 = 0;
                else if (VAR_7->first_vacc) VAR_17 = VAR_16;
                else VAR_17 = 1;
                VAR_7->first_vacc = 0;
                if (VAR_21!=VAR_23)
                {
                    VAR_25 = 1000000 * (VAR_16*VAR_6->mem_page_miss + VAR_6->mem_latency)/VAR_6->mclk_khz;
                    VAR_18 = VAR_25 * VAR_7->vdrain_rate/ 1000000;
                    VAR_18 = VAR_7->vocc - VAR_18;
                }
                VAR_25 = 1000000*(VAR_17*VAR_6->mem_page_miss + VAR_7->vburst_size)/(VAR_6->memory_width/8)/VAR_6->mclk_khz;
                VAR_7->vocc = VAR_7->vocc + VAR_7->vburst_size - VAR_25*VAR_7->vdrain_rate/1000000;
                VAR_7->gocc = VAR_7->gocc - VAR_25*VAR_7->gdrain_rate/1000000;
                VAR_7->mocc = VAR_7->mocc - VAR_25*VAR_7->mdrain_rate/1000000;
                break;
            case 129:
                if (VAR_21==VAR_23) VAR_17 = 0;
                else if (VAR_7->first_gacc) VAR_17 = VAR_15;
                else VAR_17 = 1;
                VAR_7->first_gacc = 0;
                if (VAR_21!=VAR_23)
                {
                    VAR_25 = 1000000*(VAR_15*VAR_6->mem_page_miss + VAR_6->mem_latency)/VAR_6->mclk_khz ;
                    VAR_19 = VAR_25 * VAR_7->gdrain_rate/1000000;
                    VAR_19 = VAR_7->gocc - VAR_19;
                }
                VAR_25 = 1000000*(VAR_17*VAR_6->mem_page_miss + VAR_7->gburst_size/(VAR_6->memory_width/8))/VAR_6->mclk_khz;
                VAR_7->vocc = VAR_7->vocc + 0 - VAR_25*VAR_7->vdrain_rate/1000000;
                VAR_7->gocc = VAR_7->gocc + VAR_7->gburst_size - VAR_25*VAR_7->gdrain_rate/1000000;
                VAR_7->mocc = VAR_7->mocc + 0 - VAR_25*VAR_7->mdrain_rate/1000000;
                break;
            default:
                if (VAR_21==VAR_23) VAR_17 = 0;
                else if (VAR_7->first_macc) VAR_17 = VAR_14;
                else VAR_17 = 1;
                VAR_7->first_macc = 0;
                VAR_25 = 1000000*(VAR_17*VAR_6->mem_page_miss + VAR_13/(VAR_6->memory_width/8))/VAR_6->mclk_khz;
                VAR_7->vocc = VAR_7->vocc + 0 - VAR_25*VAR_7->vdrain_rate/1000000;
                VAR_7->gocc = VAR_7->gocc + 0 - VAR_25*VAR_7->gdrain_rate/1000000;
                VAR_7->mocc = VAR_7->mocc + VAR_13 - VAR_25*VAR_7->mdrain_rate/1000000;
                break;
        }
        if (VAR_8>100)
        {
            VAR_7->converged = 0;
            return (1);
        }
        VAR_25 = 1000000*VAR_7->gburst_size/(VAR_6->memory_width/8)/VAR_6->mclk_khz;
        VAR_9 = VAR_25 * VAR_7->gdrain_rate/1000000;
        if (FUNC_0(VAR_7->gburst_size) + ((FUNC_0(VAR_7->wcglwm) + 16 ) & ~0x7) - VAR_9 > VAR_24)
        {
            VAR_7->converged = 0;
            return (1);
        }
        VAR_25 = 1000000*VAR_7->vburst_size/(VAR_6->memory_width/8)/VAR_6->mclk_khz;
        VAR_9 = VAR_25 * VAR_7->vdrain_rate/1000000;
        if (FUNC_0(VAR_7->vburst_size) + (FUNC_0(VAR_7->wcvlwm + 32) & ~0xf) - VAR_9> VAR_4)
        {
            VAR_7->converged = 0;
            return (1);
        }
        if (abs(VAR_7->gocc) > VAR_24)
        {
            VAR_7->converged = 0;
            return (1);
        }
        if (FUNC_0(VAR_7->vocc) > VAR_4)
        {
            VAR_7->converged = 0;
            return (1);
        }
        if (abs(VAR_7->mocc) > VAR_2)
        {
            VAR_7->converged = 0;
            return (1);
        }
        if (FUNC_0(VAR_10) > VAR_4)
        {
            VAR_7->converged = 0;
            return (1);
        }
        if (FUNC_0(VAR_12) > VAR_24)
        {
            VAR_7->converged = 0;
            return (1);
        }
        if (FUNC_0(VAR_11) > VAR_2)
        {
            VAR_7->converged = 0;
            return (1);
        }
    }
}
