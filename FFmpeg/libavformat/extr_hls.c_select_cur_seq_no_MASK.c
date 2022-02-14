
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct playlist {scalar_t__ last_load_time; scalar_t__ start_seq_no; scalar_t__ n_segments; scalar_t__ finished; int url; } ;
struct TYPE_5__ {scalar_t__ cur_timestamp; scalar_t__ cur_seq_no; scalar_t__ live_start_index; int first_packet; } ;
typedef TYPE_1__ HLSContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (struct playlist*) ;
 int FUNC_4 (TYPE_1__*,struct playlist*,scalar_t__,int*) ;
 int FUNC_5 (TYPE_1__*,int ,struct playlist*,int *) ;

__attribute__((used)) static int FUNC_6(HLSContext *VAR_1, struct playlist *VAR_2)
{
    int VAR_3;

    if (!VAR_2->finished && !VAR_1->first_packet &&
        FUNC_2() - VAR_2->last_load_time >= FUNC_3(VAR_2))

        FUNC_5(VAR_1, VAR_2->url, VAR_2, ((void*)0));




    if (VAR_2->finished && VAR_1->cur_timestamp != VAR_0) {
        FUNC_4(VAR_1, VAR_2, VAR_1->cur_timestamp, &VAR_3);
        return VAR_3;
    }

    if (!VAR_2->finished) {
        if (!VAR_1->first_packet &&
            VAR_1->cur_seq_no >= VAR_2->start_seq_no &&
            VAR_1->cur_seq_no < VAR_2->start_seq_no + VAR_2->n_segments)




            return VAR_1->cur_seq_no;



        if (VAR_1->live_start_index < 0)
            return VAR_2->start_seq_no + FUNC_0(VAR_2->n_segments + VAR_1->live_start_index, 0);
        else
            return VAR_2->start_seq_no + FUNC_1(VAR_1->live_start_index, VAR_2->n_segments - 1);
    }


    return VAR_2->start_seq_no;
}
