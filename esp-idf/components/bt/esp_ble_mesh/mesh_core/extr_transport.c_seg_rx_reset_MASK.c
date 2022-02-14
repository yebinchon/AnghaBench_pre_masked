
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seg_rx {scalar_t__ block; unsigned int seq_auth; unsigned int in_use; void* dst; void* src; int * sub; int seg_n; scalar_t__ obo; int ack; } ;


 void* VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,struct seg_rx*) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,void*,void*,unsigned int*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct seg_rx *VAR_2, bool VAR_3)
{
    FUNC_1("rx %p", VAR_2);

    FUNC_5(&VAR_2->ack);

    if (FUNC_3(VAR_1) && VAR_2->obo &&
            VAR_2->block != FUNC_0(VAR_2->seg_n)) {
        FUNC_2("Clearing incomplete buffers from Friend queue");
        FUNC_4(VAR_2->sub, VAR_2->src, VAR_2->dst,
                                        &VAR_2->seq_auth);
    }

    VAR_2->in_use = 0U;





    if (VAR_3) {
        VAR_2->seq_auth = 0U;
        VAR_2->sub = ((void*)0);
        VAR_2->src = VAR_0;
        VAR_2->dst = VAR_0;
    }
}
