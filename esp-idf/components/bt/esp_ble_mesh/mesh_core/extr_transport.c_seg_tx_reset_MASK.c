
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seg_tx {unsigned int seq_auth; unsigned int nack_count; int seg_n; TYPE_1__** seg; int dst; int * sub; int * cb_data; int * cb; int retransmit; } ;
struct TYPE_4__ {int iv_index; int flags; } ;
struct TYPE_3__ {int ref; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 TYPE_2__ VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_6(struct seg_tx *VAR_3)
{
    int VAR_4;

    FUNC_4(&VAR_3->retransmit);

    VAR_3->cb = ((void*)0);
    VAR_3->cb_data = ((void*)0);
    VAR_3->seq_auth = 0U;
    VAR_3->sub = ((void*)0);
    VAR_3->dst = VAR_0;

    if (!VAR_3->nack_count) {
        return;
    }

    for (VAR_4 = 0; VAR_4 <= VAR_3->seg_n; VAR_4++) {
        if (!VAR_3->seg[VAR_4]) {
            continue;
        }




        if (VAR_3->seg[VAR_4]->ref > 1) {
            VAR_3->seg[VAR_4]->ref = 1;
        }
        FUNC_5(VAR_3->seg[VAR_4]);
        VAR_3->seg[VAR_4] = ((void*)0);
    }

    VAR_3->nack_count = 0U;

    if (FUNC_1(VAR_2.flags, VAR_1)) {
        FUNC_0("Proceding with pending IV Update");



        if (FUNC_2(VAR_2.iv_index, 0)) {
            FUNC_3(((void*)0));
        }
    }
}
