
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef int u8 ;
typedef int u64 ;
typedef void* u32 ;
typedef size_t u16 ;
struct mlx4_mad_snd_buf {int payload; } ;
struct TYPE_15__ {size_t*** virt2phys_pkey; } ;
struct TYPE_14__ {struct mlx4_ib_demux_pv_ctx** sqps; } ;
struct mlx4_ib_dev {int ib_dev; TYPE_2__ pkeys; int dev; TYPE_1__ sriov; } ;
struct mlx4_ib_demux_pv_qp {int tx_ix_head; int tx_ix_tail; TYPE_7__* tx_ring; int tx_lock; struct ib_qp* qp; } ;
struct mlx4_ib_demux_pv_ctx {scalar_t__ state; TYPE_8__* mr; int pd; struct mlx4_ib_demux_pv_qp* qp; } ;
struct ib_sge {int length; int lkey; int addr; } ;
struct TYPE_22__ {int port_num; size_t pkey_index; void* remote_qpn; void* remote_qkey; struct ib_ah* ah; } ;
struct TYPE_12__ {TYPE_9__ ud; } ;
struct ib_send_wr {int wr_id; int num_sge; int send_flags; int opcode; struct ib_sge* sg_list; int * next; TYPE_10__ wr; } ;
struct ib_qp {int dummy; } ;
struct ib_mad {int dummy; } ;
struct TYPE_16__ {int sgid_index; } ;
struct ib_ah_attr {TYPE_3__ grh; } ;
struct ib_ah {int dummy; } ;
typedef enum ib_qp_type { ____Placeholder_ib_qp_type } ib_qp_type ;
struct TYPE_21__ {int lkey; } ;
struct TYPE_19__ {int map; scalar_t__ addr; } ;
struct TYPE_20__ {TYPE_6__ buf; struct ib_ah* ah; } ;
struct TYPE_17__ {int gid_index; int port_pd; } ;
struct TYPE_18__ {TYPE_4__ ib; } ;
struct TYPE_13__ {TYPE_5__ av; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct ib_ah*) ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 struct ib_ah* FUNC_3 (int ,struct ib_ah_attr*) ;
 int FUNC_4 (struct ib_ah*) ;
 int FUNC_5 (int *,int ,int,int ) ;
 int FUNC_6 (int *,int ,int,int ) ;
 int FUNC_7 (struct ib_qp*,struct ib_send_wr*,struct ib_send_wr**) ;
 int FUNC_8 (int *,struct ib_mad*,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 TYPE_11__* FUNC_12 (struct ib_ah*) ;

int FUNC_13(struct mlx4_ib_dev *VAR_9, int VAR_10, u8 VAR_11,
    enum ib_qp_type VAR_12, u16 VAR_13, u32 VAR_14,
    u32 VAR_15, struct ib_ah_attr *VAR_16, struct ib_mad *VAR_17)
{
 struct ib_sge VAR_18;
 struct ib_send_wr VAR_19, *VAR_20;
 struct mlx4_ib_demux_pv_ctx *VAR_21;
 struct mlx4_ib_demux_pv_qp *VAR_22;
 struct mlx4_mad_snd_buf *VAR_23;
 struct ib_ah *VAR_24;
 struct ib_qp *VAR_25 = ((void*)0);
 unsigned VAR_26 = 0;
 int VAR_27 = 0;
 u16 VAR_28;
 int VAR_29;
 u8 VAR_30;


 VAR_21 = VAR_9->sriov.sqps[VAR_11-1];


 if (!VAR_21 || VAR_21->state != VAR_0)
  return -VAR_2;


 if (VAR_12 == VAR_5 && (FUNC_9(VAR_9->dev) != VAR_10))
  return -VAR_3;

 if (VAR_12 == VAR_5) {
  VAR_29 = 0;
  VAR_22 = &VAR_21->qp[0];
  VAR_28 = VAR_9->pkeys.virt2phys_pkey[VAR_10][VAR_11 - 1][0];
 } else {
  VAR_29 = 1;
  VAR_22 = &VAR_21->qp[1];
  VAR_28 = VAR_9->pkeys.virt2phys_pkey[VAR_10][VAR_11 - 1][VAR_13];
 }

 VAR_25 = VAR_22->qp;


 VAR_30 = VAR_16->grh.sgid_index;
 VAR_16->grh.sgid_index = 0;
 VAR_24 = FUNC_3(VAR_21->pd, VAR_16);
 if (FUNC_0(VAR_24))
  return -VAR_4;
 VAR_16->grh.sgid_index = VAR_30;
 FUNC_12(VAR_24)->av.ib.gid_index = VAR_30;

 FUNC_12(VAR_24)->av.ib.port_pd &= FUNC_2(0x7FFFFFFF);
 FUNC_10(&VAR_22->tx_lock);
 if (VAR_22->tx_ix_head - VAR_22->tx_ix_tail >=
     (VAR_8 - 1))
  VAR_27 = -VAR_2;
 else
  VAR_26 = (++VAR_22->tx_ix_head) & (VAR_8 - 1);
 FUNC_11(&VAR_22->tx_lock);
 if (VAR_27)
  goto out;

 VAR_23 = (struct mlx4_mad_snd_buf *) (VAR_22->tx_ring[VAR_26].buf.addr);
 if (VAR_22->tx_ring[VAR_26].ah)
  FUNC_4(VAR_22->tx_ring[VAR_26].ah);
 VAR_22->tx_ring[VAR_26].ah = VAR_24;
 FUNC_5(&VAR_9->ib_dev,
       VAR_22->tx_ring[VAR_26].buf.map,
       sizeof (struct mlx4_mad_snd_buf),
       VAR_1);

 FUNC_8(&VAR_23->payload, VAR_17, sizeof *VAR_17);

 FUNC_6(&VAR_9->ib_dev,
          VAR_22->tx_ring[VAR_26].buf.map,
          sizeof (struct mlx4_mad_snd_buf),
          VAR_1);

 VAR_18.addr = VAR_22->tx_ring[VAR_26].buf.map;
 VAR_18.length = sizeof (struct mlx4_mad_snd_buf);
 VAR_18.lkey = VAR_21->mr->lkey;

 VAR_19.wr.ud.ah = VAR_24;
 VAR_19.wr.ud.port_num = VAR_11;
 VAR_19.wr.ud.pkey_index = VAR_28;
 VAR_19.wr.ud.remote_qkey = VAR_15;
 VAR_19.wr.ud.remote_qpn = VAR_14;
 VAR_19.next = ((void*)0);
 VAR_19.wr_id = ((u64) VAR_26) | FUNC_1(VAR_29);
 VAR_19.sg_list = &VAR_18;
 VAR_19.num_sge = 1;
 VAR_19.opcode = VAR_7;
 VAR_19.send_flags = VAR_6;

 VAR_27 = FUNC_7(VAR_25, &VAR_19, &VAR_20);
out:
 if (VAR_27)
  FUNC_4(VAR_24);
 return VAR_27;
}
