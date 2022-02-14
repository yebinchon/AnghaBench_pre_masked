
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_9__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_13__ {scalar_t__ size; } ;
struct TYPE_12__ {scalar_t__ state; int* nb_prev_pkt; int stream; TYPE_9__* flv_data; TYPE_9__** prev_pkt; TYPE_9__ out_pkt; int is_input; } ;
typedef TYPE_2__ RTMPContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_9__**) ;
 int FUNC_1 (TYPE_9__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_6(URLContext *VAR_2)
{
    RTMPContext *VAR_3 = VAR_2->priv_data;
    int VAR_4 = 0, VAR_5, VAR_6;

    if (!VAR_3->is_input) {
        VAR_3->flv_data = ((void*)0);
        if (VAR_3->out_pkt.size)
            FUNC_1(&VAR_3->out_pkt);
        if (VAR_3->state > VAR_0)
            VAR_4 = FUNC_5(VAR_2, VAR_3);
    }
    if (VAR_3->state > VAR_1)
        VAR_4 = FUNC_4(VAR_2, VAR_3);
    for (VAR_5 = 0; VAR_5 < 2; VAR_5++) {
        for (VAR_6 = 0; VAR_6 < VAR_3->nb_prev_pkt[VAR_5]; VAR_6++)
            FUNC_1(&VAR_3->prev_pkt[VAR_5][VAR_6]);
        FUNC_0(&VAR_3->prev_pkt[VAR_5]);
    }

    FUNC_3(VAR_3);
    FUNC_0(&VAR_3->flv_data);
    FUNC_2(VAR_3->stream);
    return VAR_4;
}
