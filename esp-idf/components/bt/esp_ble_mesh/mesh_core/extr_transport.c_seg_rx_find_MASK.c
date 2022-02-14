
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64_t ;
struct seg_rx {scalar_t__ src; scalar_t__ dst; scalar_t__ const seq_auth; scalar_t__ in_use; } ;
struct TYPE_2__ {scalar_t__ addr; scalar_t__ recv_dst; } ;
struct bt_mesh_net_rx {TYPE_1__ ctx; } ;


 int FUNC_0 (struct seg_rx*) ;
 int FUNC_1 (char*,scalar_t__) ;
 struct seg_rx* VAR_0 ;
 int FUNC_2 (struct seg_rx*,int) ;

__attribute__((used)) static struct seg_rx *FUNC_3(struct bt_mesh_net_rx *VAR_1,
                                  const u64_t *VAR_2)
{
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
        struct seg_rx *VAR_4 = &VAR_0[VAR_3];

        if (VAR_4->src != VAR_1->ctx.addr ||
                VAR_4->dst != VAR_1->ctx.recv_dst) {
            continue;
        }







        if (VAR_4->seq_auth == *VAR_2) {
            return VAR_4;
        }

        if (VAR_4->in_use) {
            FUNC_1("Duplicate SDU from src 0x%04x",
                    VAR_1->ctx.addr);




            FUNC_2(VAR_4, 1);


            return ((void*)0);
        }
    }

    return ((void*)0);
}
