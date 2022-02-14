
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ws_intervals {int nb_inter; } ;
struct TYPE_4__ {scalar_t__ slide; } ;
struct sbg_script_event {int ts; int ts_int; int ts_trans; int ts_next; TYPE_1__ fade; } ;
struct sbg_script {int opt_fade_time; int nb_events; int nb_synth; struct sbg_script_event* events; TYPE_3__* synth; } ;
typedef int int64_t ;
struct TYPE_5__ {int l; int r; } ;
struct TYPE_6__ {TYPE_2__ ref; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (void*,int ,char*) ;
 void* FUNC_3 (int,int,int ) ;
 int FUNC_4 (void*,struct sbg_script*,struct ws_intervals*,struct sbg_script_event*) ;
 int FUNC_5 (void*,struct sbg_script*,struct ws_intervals*,struct sbg_script_event*,struct sbg_script_event*) ;

__attribute__((used)) static int FUNC_6(void *VAR_3, struct sbg_script *VAR_4, int VAR_5,
                              struct ws_intervals *VAR_6)
{
    int64_t VAR_7 = VAR_4->opt_fade_time / 2;
    struct sbg_script_event VAR_8, *VAR_9, *VAR_10;
    int64_t VAR_11;
    int VAR_12, VAR_13;




    VAR_11 = VAR_4->events[VAR_4->nb_events - 1].ts - VAR_4->events[0].ts;
    VAR_11 = (VAR_11 + (VAR_2 - 1)) / VAR_2 * VAR_2;
    VAR_11 = FUNC_0(VAR_11, VAR_2);


    for (VAR_12 = 0; VAR_12 < VAR_4->nb_events; VAR_12++) {
        VAR_9 = &VAR_4->events[VAR_12];
        VAR_10 = &VAR_4->events[(VAR_12 + 1) % VAR_4->nb_events];
        VAR_9->ts_int = VAR_9->ts;
        VAR_9->ts_trans = VAR_9->fade.slide ? VAR_9->ts
                                        : VAR_10->ts + (VAR_9 < VAR_10 ? 0 : VAR_11);
    }
    for (VAR_12 = 0; VAR_12 < VAR_4->nb_events; VAR_12++) {
        VAR_9 = &VAR_4->events[VAR_12];
        VAR_10 = &VAR_4->events[(VAR_12 + 1) % VAR_4->nb_events];
        if (!VAR_9->fade.slide) {
            VAR_9->ts_trans = FUNC_0(VAR_9->ts_int, VAR_9->ts_trans - VAR_7);
            VAR_10->ts_int = FUNC_1(VAR_10->ts_trans, VAR_10->ts_int + VAR_7);
        }
        VAR_9->ts_next = VAR_10->ts_int + (VAR_9 < VAR_10 ? 0 : VAR_11);
    }


    VAR_8 = VAR_4->events[VAR_4->nb_events - 1];
    VAR_8 -= VAR_11;
    VAR_8 -= VAR_11;
    VAR_8 -= VAR_11;


    for (VAR_12 = -1; VAR_12 < VAR_4->nb_events; VAR_12++) {
        VAR_9 = VAR_12 < 0 ? &VAR_8 : &VAR_4->events[VAR_12];
        VAR_9->ts_int = FUNC_3(VAR_9->ts_int, VAR_5, VAR_1);
        VAR_9->ts_trans = FUNC_3(VAR_9->ts_trans, VAR_5, VAR_1);
        VAR_9->ts_next = FUNC_3(VAR_9->ts_next, VAR_5, VAR_1);
    }


    for (VAR_12 = 0; VAR_12 < VAR_4->nb_synth; VAR_12++)
        VAR_4->synth[VAR_12].ref.l = VAR_4->synth[VAR_12].ref.r = -1;
    for (VAR_12 = -1; VAR_12 < VAR_4->nb_events; VAR_12++) {
        VAR_9 = VAR_12 < 0 ? &VAR_8 : &VAR_4->events[VAR_12];
        VAR_10 = &VAR_4->events[(VAR_12 + 1) % VAR_4->nb_events];
        VAR_13 = FUNC_4(VAR_3, VAR_4, VAR_6, VAR_9);
        if (VAR_13 < 0)
            return VAR_13;
        VAR_13 = FUNC_5(VAR_3, VAR_4, VAR_6, VAR_9, VAR_10);
        if (VAR_13 < 0)
            return VAR_13;
    }
    if (!VAR_6->nb_inter)
        FUNC_2(VAR_3, VAR_0, "Completely silent script.\n");
    return 0;
}
