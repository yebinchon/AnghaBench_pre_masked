
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_buf {int len; int data; } ;
struct bt_mesh_send_cb {int dummy; } ;
struct TYPE_4__ {int relay; void* arg; } ;
typedef TYPE_1__ bt_mesh_msg_t ;
struct TYPE_5__ {unsigned int busy; void* cb_data; struct bt_mesh_send_cb const* cb; int type; } ;


 TYPE_3__* FUNC_0 (struct net_buf*) ;
 int FUNC_1 (char*,int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_4 (struct net_buf*) ;
 int VAR_0 ;

void FUNC_5(struct net_buf *VAR_1, const struct bt_mesh_send_cb *VAR_2,
                      void *VAR_3)
{
    bt_mesh_msg_t VAR_4 = {
        .relay = 0,
    };

    FUNC_1("type 0x%02x len %u: %s", FUNC_0(VAR_1)->type, VAR_1->len,
           FUNC_2(VAR_1->data, VAR_1->len));

    FUNC_0(VAR_1)->cb = VAR_2;
    FUNC_0(VAR_1)->cb_data = VAR_3;
    FUNC_0(VAR_1)->busy = 1U;

    VAR_4.arg = (void *)FUNC_4(VAR_1);
    FUNC_3(&VAR_4, VAR_0);
}
