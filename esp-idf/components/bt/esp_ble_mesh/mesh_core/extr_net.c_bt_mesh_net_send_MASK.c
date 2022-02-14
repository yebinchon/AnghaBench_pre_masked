
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_buf {int b; int len; int data; } ;
struct bt_mesh_send_cb {int (* end ) (int ,void*) ;int (* start ) (int ,int ,void*) ;} ;
struct bt_mesh_net_tx {TYPE_1__* ctx; int src; } ;
struct TYPE_4__ {int local_work; int local_queue; int seq; } ;
struct TYPE_3__ {unsigned int send_ttl; int addr; } ;


 scalar_t__ FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 int FUNC_1 (char*,int ,...) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 TYPE_2__ VAR_2 ;
 int FUNC_4 (struct net_buf*,struct bt_mesh_send_cb const*,void*) ;
 unsigned int FUNC_5 () ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (struct bt_mesh_net_tx*,int *,int) ;
 scalar_t__ FUNC_10 (int *,int ) ;
 scalar_t__ FUNC_11 (int *,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct net_buf*) ;
 int FUNC_14 (struct net_buf*) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (struct net_buf*) ;
 int FUNC_17 (struct net_buf*) ;
 int FUNC_18 (struct bt_mesh_send_cb const*,void*) ;
 int FUNC_19 (int ,int ,void*) ;
 int FUNC_20 (int ,void*) ;

int FUNC_21(struct bt_mesh_net_tx *VAR_3, struct net_buf *VAR_4,
                     const struct bt_mesh_send_cb *VAR_5, void *VAR_6)
{
    int VAR_7;

    FUNC_1("src 0x%04x dst 0x%04x len %u headroom %u tailroom %u",
           VAR_3->src, VAR_3->ctx->addr, VAR_4->len, FUNC_13(VAR_4),
           FUNC_16(VAR_4));
    FUNC_1("Payload len %u: %s", VAR_4->len, FUNC_3(VAR_4->data, VAR_4->len));
    FUNC_1("Seq 0x%06x", VAR_2.seq);

    if (VAR_3->ctx->send_ttl == VAR_0) {
        VAR_3->ctx->send_ttl = FUNC_5();
    }

    VAR_7 = FUNC_9(VAR_3, &VAR_4->b, 0);
    if (VAR_7) {
        goto done;
    }
    if (FUNC_7(VAR_3->ctx->addr) ||
            FUNC_6(VAR_3->ctx->addr)) {
        if (VAR_5 && VAR_5->start) {
            VAR_5->start(0, 0, VAR_6);
        }
        FUNC_15(&VAR_2.local_queue, FUNC_14(VAR_4));
        if (VAR_5 && VAR_5->end) {
            VAR_5->end(0, VAR_6);
        }
        FUNC_12(&VAR_2.local_work);
    } else if (VAR_3->ctx->send_ttl != 1U) {





        FUNC_4(VAR_4, VAR_5, VAR_6);
    }

done:
    FUNC_17(VAR_4);
    return VAR_7;
}
