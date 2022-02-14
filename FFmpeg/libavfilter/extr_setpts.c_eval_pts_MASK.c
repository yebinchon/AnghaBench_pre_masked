
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_9__ {scalar_t__ type; int time_base; } ;
struct TYPE_8__ {int pkt_pos; int interlaced_frame; int nb_samples; } ;
struct TYPE_7__ {int* var_values; int expr; } ;
typedef TYPE_1__ SetPTSContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ,int ) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 double FUNC_2 (int ,int*,int *) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static double FUNC_5(SetPTSContext *VAR_12, AVFilterLink *VAR_13, AVFrame *VAR_14, int64_t VAR_15)
{
    if (FUNC_4(VAR_12->var_values[VAR_9])) {
        VAR_12->var_values[VAR_9] = FUNC_0(VAR_15);
        VAR_12->var_values[VAR_10 ] = FUNC_1(VAR_15, VAR_13->time_base);
    }
    VAR_12->var_values[VAR_6 ] = FUNC_0(VAR_15);
    VAR_12->var_values[VAR_11 ] = FUNC_1(VAR_15, VAR_13->time_base);
    VAR_12->var_values[VAR_5 ] = !VAR_14 || VAR_14->pkt_pos == -1 ? VAR_2 : VAR_14->pkt_pos;
    VAR_12->var_values[VAR_7 ] = FUNC_3();

    if (VAR_14) {
        if (VAR_13->type == VAR_1) {
            VAR_12->var_values[VAR_3] = VAR_14->interlaced_frame;
        } else if (VAR_13->type == VAR_0) {
            VAR_12->var_values[VAR_8] = VAR_14->nb_samples;
            VAR_12->var_values[VAR_4] = VAR_14->nb_samples;
        }
    }

    return FUNC_2(VAR_12->expr, VAR_12->var_values, ((void*)0));
}
