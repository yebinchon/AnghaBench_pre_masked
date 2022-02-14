
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int index; unsigned int evq; unsigned int buf_count; unsigned int label; int flags; int addr; } ;
struct TYPE_6__ {TYPE_2__ init_rxq; } ;
struct vfdi_req {TYPE_3__ u; } ;
struct TYPE_4__ {struct vfdi_req* addr; } ;
struct efx_vf {int rxq_count; int rxq_mask; int pci_name; TYPE_1__ buf; struct efx_nic* efx; } ;
struct efx_nic {int net_dev; } ;
typedef int efx_oword_t ;


 unsigned int FUNC_0 (struct efx_vf*,unsigned int) ;
 unsigned int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,unsigned int,int ,int ,int ,unsigned int,int ,int ,int ,int,int ,int) ;
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
 unsigned int VAR_11 ;
 int FUNC_3 (unsigned int) ;
 scalar_t__ FUNC_4 (unsigned int,int ) ;
 int FUNC_5 (struct efx_vf*,unsigned int) ;
 scalar_t__ FUNC_6 (unsigned int,int ) ;
 scalar_t__ FUNC_7 (struct efx_nic*,unsigned int) ;
 int FUNC_8 (struct efx_nic*,unsigned int,int ,unsigned int) ;
 int FUNC_9 (struct efx_nic*,int *,int ,int ) ;
 int VAR_12 ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 (struct efx_nic*,int ,int ,char*,int ,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_12(struct efx_vf *VAR_13)
{
 struct efx_nic *VAR_14 = VAR_13->efx;
 struct vfdi_req *VAR_15 = VAR_13->buf.addr;
 unsigned VAR_16 = VAR_15->u.init_rxq.index;
 unsigned VAR_17 = VAR_15->u.init_rxq.evq;
 unsigned VAR_18 = VAR_15->u.init_rxq.buf_count;
 unsigned VAR_19 = FUNC_0(VAR_13, VAR_16);
 unsigned VAR_20;
 efx_oword_t VAR_21;

 if (FUNC_7(VAR_14, VAR_17) || FUNC_7(VAR_14, VAR_16) ||
     VAR_16 >= VAR_11 ||
     FUNC_6(VAR_18, VAR_0)) {
  if (FUNC_10())
   FUNC_11(VAR_14, VAR_12, VAR_14->net_dev,
      "ERROR: Invalid INIT_RXQ from %s: rxq %d evq %d "
      "buf_count %d\n", VAR_13->pci_name, VAR_16,
      VAR_17, VAR_18);
  return VAR_8;
 }
 if (FUNC_4(VAR_15->u.init_rxq.index, VAR_13->rxq_mask))
  ++VAR_13->rxq_count;
 FUNC_8(VAR_14, VAR_19, VAR_15->u.init_rxq.addr, VAR_18);

 VAR_20 = VAR_15->u.init_rxq.label & FUNC_1(VAR_5);
 FUNC_2(VAR_21,
        VAR_1, VAR_19,
        VAR_3, FUNC_5(VAR_13, VAR_17),
        VAR_5, VAR_20,
        VAR_6, FUNC_3(VAR_18),
        VAR_4,
        !!(VAR_15->u.init_rxq.flags &
    VAR_10),
        VAR_2, 1);
 FUNC_9(VAR_14, &VAR_21, VAR_7,
    FUNC_5(VAR_13, VAR_16));

 return VAR_9;
}
