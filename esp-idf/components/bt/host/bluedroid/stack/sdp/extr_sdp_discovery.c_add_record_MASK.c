
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* p_next_rec; int remote_bd_addr; int * p_first_attr; } ;
typedef TYPE_1__ tSDP_DISC_REC ;
struct TYPE_6__ {int mem_free; TYPE_1__* p_first_rec; scalar_t__ p_free_mem; } ;
typedef TYPE_2__ tSDP_DISCOVERY_DB ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

tSDP_DISC_REC *FUNC_1 (tSDP_DISCOVERY_DB *VAR_1, BD_ADDR VAR_2)
{
    tSDP_DISC_REC *VAR_3;


    if (VAR_1->mem_free < sizeof (tSDP_DISC_REC)) {
        return (((void*)0));
    }

    VAR_3 = (tSDP_DISC_REC *) VAR_1->p_free_mem;
    VAR_1->p_free_mem += sizeof (tSDP_DISC_REC);
    VAR_1->mem_free -= sizeof (tSDP_DISC_REC);

    VAR_3->p_first_attr = ((void*)0);
    VAR_3->p_next_rec = ((void*)0);

    FUNC_0 (VAR_3->remote_bd_addr, VAR_2, VAR_0);


    if (!VAR_1->p_first_rec) {
        VAR_1->p_first_rec = VAR_3;
    } else {
        tSDP_DISC_REC *VAR_4 = VAR_1->p_first_rec;

        while (VAR_4->p_next_rec) {
            VAR_4 = VAR_4->p_next_rec;
        }

        VAR_4->p_next_rec = VAR_3;
    }

    return (VAR_3);
}
