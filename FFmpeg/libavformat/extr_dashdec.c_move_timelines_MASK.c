
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct representation {int cur_seq_no; scalar_t__ n_timelines; int * timelines; int last_seq_no; int first_seq_no; } ;
typedef int DASHContext ;


 int FUNC_0 (struct representation*,int *) ;
 int FUNC_1 (struct representation*) ;

__attribute__((used)) static void FUNC_2(struct representation *VAR_0, struct representation *VAR_1, DASHContext *VAR_2)
{
    if (VAR_1 && VAR_0 ) {
        FUNC_1(VAR_1);
        VAR_1->timelines = VAR_0->timelines;
        VAR_1->n_timelines = VAR_0->n_timelines;
        VAR_1->first_seq_no = VAR_0->first_seq_no;
        VAR_1->last_seq_no = FUNC_0(VAR_1, VAR_2);
        VAR_0->timelines = ((void*)0);
        VAR_0->n_timelines = 0;
        VAR_1->cur_seq_no = VAR_0->cur_seq_no;
    }
}
