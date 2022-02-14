
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ws_intervals {int dummy; } ;
struct sbg_script_synth {int dummy; } ;
struct sbg_script_event {int nb_elements; int elements; int ts_trans; int ts_int; } ;
struct sbg_script {struct sbg_script_synth* synth; } ;
typedef int int64_t ;


 int FUNC_0 (void*,struct sbg_script*,struct ws_intervals*,int ,int ,struct sbg_script_synth*,struct sbg_script_synth*,int ) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, struct sbg_script *VAR_1,
                            struct ws_intervals *VAR_2,
                            struct sbg_script_event *VAR_3)
{
    int64_t VAR_4 = VAR_3->ts_int, VAR_5 = VAR_3->ts_trans;
    int VAR_6, VAR_7;
    struct sbg_script_synth *VAR_8;

    for (VAR_6 = 0; VAR_6 < VAR_3->nb_elements; VAR_6++) {
        VAR_8 = &VAR_1->synth[VAR_3->elements + VAR_6];
        VAR_7 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_4, VAR_5, VAR_8, VAR_8, 0);
        if (VAR_7 < 0)
            return VAR_7;
    }
    return 0;
}
