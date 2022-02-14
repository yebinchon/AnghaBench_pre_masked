
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int state; scalar_t__ num_deliv; scalar_t__ num_nacks; scalar_t__ awakeme; int * nodes_confirmed; int nodes_delivered; int * body; scalar_t__ flags; scalar_t__ gc_retry; int * queue; int id; } ;
typedef TYPE_1__ job ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ,char*,int ) ;
 TYPE_1__* FUNC_3 (int) ;

job *FUNC_4(char *VAR_2, int VAR_3, int VAR_4, int VAR_5) {
    job *VAR_6 = FUNC_3(sizeof(job));


    if (VAR_2 == ((void*)0))
        FUNC_1(VAR_6->id,VAR_4,VAR_5);
    else
        FUNC_2(VAR_6->id,VAR_2,VAR_0);

    VAR_6->queue = ((void*)0);
    VAR_6->state = VAR_3;
    VAR_6->gc_retry = 0;
    VAR_6->flags = 0;
    VAR_6->body = ((void*)0);
    VAR_6->nodes_delivered = FUNC_0(&VAR_1,((void*)0));
    VAR_6->nodes_confirmed = ((void*)0);
    VAR_6->awakeme = 0;


    VAR_6->num_nacks = 0;
    VAR_6->num_deliv = 0;
    return VAR_6;
}
