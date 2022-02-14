
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int index; unsigned int evq; unsigned int buf_count; unsigned int label; int addr; } ;
struct TYPE_6__ {TYPE_2__ init_txq; } ;
struct vfdi_req {TYPE_3__ u; } ;
struct TYPE_4__ {struct vfdi_req* addr; } ;
struct efx_vf {scalar_t__ tx_filter_mode; int txq_lock; int txq_count; int txq_mask; int pci_name; TYPE_1__ buf; struct efx_nic* efx; } ;
struct efx_nic {int vi_scale; int net_dev; } ;
typedef int efx_oword_t ;


 unsigned int FUNC_0 (struct efx_vf*,unsigned int) ;
 unsigned int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,int ,int ,unsigned int,int ,int,int ,unsigned int,int ,int ,int ,unsigned int,int ,int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_3 (unsigned int) ;
 scalar_t__ FUNC_4 (unsigned int,int ) ;
 int FUNC_5 (struct efx_vf*,unsigned int) ;
 scalar_t__ FUNC_6 (unsigned int,int ) ;
 scalar_t__ FUNC_7 (struct efx_nic*,unsigned int) ;
 int FUNC_8 (struct efx_nic*,unsigned int,int ,unsigned int) ;
 int FUNC_9 (struct efx_nic*,int *,int ,int ) ;
 int VAR_13 ;
 int FUNC_10 (int ,unsigned int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 () ;
 int FUNC_14 (struct efx_nic*,int ,int ,char*,int ,unsigned int,unsigned int,unsigned int) ;
 unsigned int VAR_14 ;

__attribute__((used)) static int FUNC_15(struct efx_vf *VAR_15)
{
 struct efx_nic *VAR_16 = VAR_15->efx;
 struct vfdi_req *VAR_17 = VAR_15->buf.addr;
 unsigned VAR_18 = VAR_17->u.init_txq.index;
 unsigned VAR_19 = VAR_17->u.init_txq.evq;
 unsigned VAR_20 = VAR_17->u.init_txq.buf_count;
 unsigned VAR_21 = FUNC_0(VAR_15, VAR_18);
 unsigned VAR_22, VAR_23;
 efx_oword_t VAR_24;

 if (FUNC_7(VAR_16, VAR_19) || FUNC_7(VAR_16, VAR_18) ||
     VAR_18 >= VAR_14 ||
     FUNC_6(VAR_20, VAR_0)) {
  if (FUNC_13())
   FUNC_14(VAR_16, VAR_13, VAR_16->net_dev,
      "ERROR: Invalid INIT_TXQ from %s: txq %d evq %d "
      "buf_count %d\n", VAR_15->pci_name, VAR_18,
      VAR_19, VAR_20);
  return VAR_10;
 }

 FUNC_11(&VAR_15->txq_lock);
 if (FUNC_4(VAR_17->u.init_txq.index, VAR_15->txq_mask))
  ++VAR_15->txq_count;
 FUNC_12(&VAR_15->txq_lock);
 FUNC_8(VAR_16, VAR_21, VAR_17->u.init_txq.addr, VAR_20);

 VAR_23 = VAR_15->tx_filter_mode == VAR_12;

 VAR_22 = VAR_17->u.init_txq.label & FUNC_1(VAR_4);
 FUNC_2(VAR_24,
        VAR_8, FUNC_10(VAR_16->vi_scale, 1U),
        VAR_7, VAR_23,
        VAR_2, 1,
        VAR_1, VAR_21,
        VAR_3, FUNC_5(VAR_15, VAR_19),
        VAR_4, VAR_22,
        VAR_5, FUNC_3(VAR_20),
        VAR_6, 1);
 FUNC_9(VAR_16, &VAR_24, VAR_9,
    FUNC_5(VAR_15, VAR_18));

 return VAR_11;
}
