
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {int count; int length; } ;
struct TYPE_20__ {scalar_t__ mt_off_avg; int mt_off_std; TYPE_2__ avg_filter; int id; } ;
struct TYPE_15__ {scalar_t__ target; scalar_t__ attack_rate; scalar_t__ attack_period; } ;
struct TYPE_19__ {scalar_t__ stc_at_update; scalar_t__ mt_off_clk; scalar_t__ mt_off_target; scalar_t__ frame_duration; scalar_t__ adj_p; int adj_m; int frame_rate_log2; int adj; int scale; scalar_t__ pending_scale; TYPE_1__ latency; scalar_t__ clock_discont; int stream_max_id; int stream_min_id; } ;
struct TYPE_18__ {TYPE_3__* priv; int * clock; } ;
struct TYPE_17__ {TYPE_5__* module; } ;
typedef scalar_t__ TIME_T ;
typedef TYPE_4__ MMAL_COMPONENT_T ;
typedef TYPE_5__ MMAL_COMPONENT_MODULE_T ;
typedef TYPE_6__ CLOCK_STREAM_T ;


 int FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_4__*,scalar_t__,TYPE_6__**,TYPE_6__**) ;
 int FUNC_3 (TYPE_4__*,scalar_t__) ;
 int FUNC_4 (TYPE_4__*,int ) ;
 int FUNC_5 (TYPE_4__*,scalar_t__) ;
 int FUNC_6 (TYPE_4__*) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(MMAL_COMPONENT_T *VAR_1, TIME_T VAR_2)
{
   MMAL_COMPONENT_MODULE_T *VAR_3 = VAR_1->priv->module;
   CLOCK_STREAM_T *VAR_4;
   CLOCK_STREAM_T *VAR_5;
   TIME_T VAR_6;
   TIME_T VAR_7;

   if (!FUNC_2(VAR_1, VAR_2, &VAR_4, &VAR_5))
      return;

   VAR_3->stream_min_id = VAR_4->id;
   VAR_3->stream_max_id = VAR_5->id;


   VAR_6 = FUNC_7(VAR_1->clock[0]) - VAR_2;

   VAR_7 = VAR_3->stc_at_update;
   VAR_3->stc_at_update = VAR_2;



   if (VAR_3->clock_discont)
   {
      VAR_3->clock_discont = VAR_0;

      VAR_3->mt_off_clk = VAR_4->mt_off_avg - VAR_3->latency.target;
      VAR_3->mt_off_target = VAR_3->mt_off_clk;

      FUNC_6(VAR_1);
      FUNC_5(VAR_1, VAR_3->mt_off_clk + VAR_2);
   }
   else
   {

      TIME_T VAR_8 = VAR_5->mt_off_avg - VAR_3->latency.target;
      TIME_T VAR_9 = VAR_4->mt_off_avg - VAR_3->frame_duration;
      VAR_3->mt_off_target = FUNC_1(VAR_8, VAR_9);



      TIME_T VAR_10 = (VAR_2 > VAR_7) ? (VAR_2 - VAR_7) : 0;
      TIME_T VAR_11 = VAR_10 * VAR_3->latency.attack_rate / VAR_3->latency.attack_period;

      VAR_3->adj_p = VAR_3->mt_off_target - VAR_3->mt_off_clk;
      if (VAR_3->adj_p < -VAR_11)
         VAR_3->adj_p = -VAR_11;
      else if (VAR_3->adj_p > VAR_11)
         VAR_3->adj_p = VAR_11;
      VAR_3->adj_m =
         FUNC_0((1 << 20) - ((VAR_4->mt_off_std << VAR_3->frame_rate_log2) >> 2), 0);



      VAR_3->adj = (VAR_3->adj_p * VAR_3->adj_m) >> 20;
      VAR_3->adj = (VAR_3->adj * (VAR_4->avg_filter.count << 8) / VAR_4->avg_filter.length) >> 8;
      VAR_3->mt_off_clk += VAR_3->adj;

      FUNC_3(VAR_1, VAR_3->mt_off_clk + VAR_2);
   }


   if (VAR_1->priv->module->pending_scale)
      FUNC_4(VAR_1, VAR_1->priv->module->scale);
}
