
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct representation {scalar_t__ start_number; scalar_t__ n_fragments; scalar_t__ cur_seq_no; int * fragments; int last_seq_no; int parent; } ;
typedef int DASHContext ;


 int FUNC_0 (struct representation*,int *) ;
 int FUNC_1 (struct representation*) ;

__attribute__((used)) static void FUNC_2(struct representation *VAR_0, struct representation *VAR_1, DASHContext *VAR_2)
{
    if (VAR_1 && VAR_0 ) {
        FUNC_1(VAR_1);
        if (VAR_0->start_number > (VAR_1->start_number + VAR_1->n_fragments))
            VAR_1->cur_seq_no = 0;
        else
            VAR_1->cur_seq_no += VAR_0->start_number - VAR_1->start_number;
        VAR_1->fragments = VAR_0->fragments;
        VAR_1->n_fragments = VAR_0->n_fragments;
        VAR_1->parent = VAR_0->parent;
        VAR_1->last_seq_no = FUNC_0(VAR_1, VAR_2);
        VAR_0->fragments = ((void*)0);
        VAR_0->n_fragments = 0;
    }
}
