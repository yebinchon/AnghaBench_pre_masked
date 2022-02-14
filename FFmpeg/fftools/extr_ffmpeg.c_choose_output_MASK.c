
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_6__ {scalar_t__ unavailable; int finished; int inputs_done; int initialized; TYPE_1__* st; } ;
struct TYPE_5__ {scalar_t__ cur_dts; int id; int index; int time_base; } ;
typedef TYPE_2__ OutputStream ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,int ,char*,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int ) ;
 int VAR_5 ;
 TYPE_2__** VAR_6 ;

__attribute__((used)) static OutputStream *FUNC_2(void)
{
    int VAR_7;
    int64_t VAR_8 = VAR_3;
    OutputStream *VAR_9 = ((void*)0);

    for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
        OutputStream *VAR_10 = VAR_6[VAR_7];
        int64_t VAR_11 = VAR_10->st->cur_dts == VAR_1 ? VAR_4 :
                       FUNC_1(VAR_10->st->cur_dts, VAR_10->st->time_base,
                                    VAR_2);
        if (VAR_10->st->cur_dts == VAR_1)
            FUNC_0(((void*)0), VAR_0,
                "cur_dts is invalid st:%d (%d) [init:%d i_done:%d finish:%d] (this is harmless if it occurs once at the start per stream)\n",
                VAR_10->st->index, VAR_10->st->id, VAR_10->initialized, VAR_10->inputs_done, VAR_10->finished);

        if (!VAR_10->initialized && !VAR_10->inputs_done)
            return VAR_10;

        if (!VAR_10->finished && VAR_11 < VAR_8) {
            VAR_8 = VAR_11;
            VAR_9 = VAR_10->unavailable ? ((void*)0) : VAR_10;
        }
    }
    return VAR_9;
}
