
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8_t ;
typedef int u64_t ;
struct seg_rx {int in_use; unsigned int block; int dst; int src; int ttl; int hdr; int seg_n; int seq_auth; int ctl; int sub; int buf; } ;
struct TYPE_2__ {int recv_dst; int addr; int send_ttl; } ;
struct bt_mesh_net_rx {TYPE_1__ ctx; int ctl; int sub; } ;


 int FUNC_0 (struct seg_rx*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int *) ;
 struct seg_rx* VAR_0 ;

__attribute__((used)) static struct seg_rx *FUNC_4(struct bt_mesh_net_rx *VAR_1,
                                   const u8_t *VAR_2, const u64_t *VAR_3,
                                   u8_t VAR_4)
{
    int VAR_5;

    for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_0); VAR_5++) {
        struct seg_rx *VAR_6 = &VAR_0[VAR_5];

        if (VAR_6->in_use) {
            continue;
        }

        VAR_6->in_use = 1U;
        FUNC_3(&VAR_6->buf);
        VAR_6->sub = VAR_1->sub;
        VAR_6->ctl = VAR_1->ctl;
        VAR_6->seq_auth = *VAR_3;
        VAR_6->seg_n = VAR_4;
        VAR_6->hdr = *VAR_2;
        VAR_6->ttl = VAR_1->ctx.send_ttl;
        VAR_6->src = VAR_1->ctx.addr;
        VAR_6->dst = VAR_1->ctx.recv_dst;
        VAR_6->block = 0U;

        FUNC_2("New RX context. Block Complete 0x%08x",
               FUNC_1(VAR_4));

        return VAR_6;
    }

    return ((void*)0);
}
