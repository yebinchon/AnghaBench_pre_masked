
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct siena_nic_data {int dummy; } ;
struct TYPE_5__ {int dma_addr; int addr; } ;
struct TYPE_4__ {int prtad; } ;
struct efx_nic {struct siena_nic_data* nic_data; TYPE_2__ irq_status; TYPE_1__ mdio; int phy_type; int net_dev; scalar_t__ port_num; } ;
typedef int efx_oword_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct efx_nic*,int,int*) ;
 int FUNC_3 (struct efx_nic*) ;
 int FUNC_4 (struct efx_nic*) ;
 int FUNC_5 (struct efx_nic*) ;
 int FUNC_6 (struct efx_nic*,TYPE_2__*,int) ;
 scalar_t__ FUNC_7 (struct efx_nic*) ;
 int FUNC_8 (struct efx_nic*,TYPE_2__*) ;
 int FUNC_9 (struct efx_nic*) ;
 int FUNC_10 (struct efx_nic*,int *,int ) ;
 int FUNC_11 (struct efx_nic*) ;
 int FUNC_12 (struct siena_nic_data*) ;
 struct siena_nic_data* FUNC_13 (int,int ) ;
 int FUNC_14 (struct efx_nic*,int ,int ,char*,unsigned long long,int ,unsigned long long) ;
 int FUNC_15 (struct efx_nic*,int ,int ,char*) ;
 int VAR_9 ;
 int FUNC_16 (struct efx_nic*) ;
 int FUNC_17 (struct efx_nic*) ;
 int FUNC_18 (struct efx_nic*,int ) ;
 scalar_t__ FUNC_19 (int ) ;

__attribute__((used)) static int FUNC_20(struct efx_nic *VAR_10)
{
 struct siena_nic_data *VAR_11;
 bool VAR_12 = 0;
 efx_oword_t VAR_13;
 int VAR_14;


 VAR_11 = FUNC_13(sizeof(struct siena_nic_data), VAR_5);
 if (!VAR_11)
  return -VAR_2;
 VAR_10->nic_data = VAR_11;

 if (FUNC_7(VAR_10) != 0) {
  FUNC_15(VAR_10, VAR_9, VAR_10->net_dev,
     "Siena FPGA not supported\n");
  VAR_14 = -VAR_1;
  goto fail1;
 }

 FUNC_10(VAR_10, &VAR_13, VAR_4);
 VAR_10->port_num = FUNC_1(VAR_13, VAR_3) - 1;

 FUNC_4(VAR_10);


 VAR_14 = FUNC_3(VAR_10);
 if (VAR_14)
  goto fail1;



 VAR_14 = FUNC_2(VAR_10, 1, &VAR_12);
 if (VAR_14) {
  FUNC_15(VAR_10, VAR_9, VAR_10->net_dev,
     "Unable to register driver with MCPU\n");
  goto fail2;
 }
 if (VAR_12)

  FUNC_15(VAR_10, VAR_9, VAR_10->net_dev,
     "Host already registered with MCPU\n");


 VAR_14 = FUNC_18(VAR_10, VAR_8);
 if (VAR_14) {
  FUNC_15(VAR_10, VAR_9, VAR_10->net_dev, "failed to reset NIC\n");
  goto fail3;
 }

 FUNC_16(VAR_10);


 VAR_14 = FUNC_6(VAR_10, &VAR_10->irq_status, sizeof(efx_oword_t));
 if (VAR_14)
  goto fail4;
 FUNC_0(VAR_10->irq_status.dma_addr & 0x0f);

 FUNC_14(VAR_10, VAR_9, VAR_10->net_dev,
    "INT_KER at %llx (virt %p phys %llx)\n",
    (unsigned long long)VAR_10->irq_status.dma_addr,
    VAR_10->irq_status.addr,
    (unsigned long long)FUNC_19(VAR_10->irq_status.addr));


 VAR_14 = FUNC_17(VAR_10);
 if (VAR_14 == -VAR_0) {
  FUNC_15(VAR_10, VAR_9, VAR_10->net_dev,
     "NVRAM is invalid therefore using defaults\n");
  VAR_10->phy_type = VAR_7;
  VAR_10->mdio.prtad = VAR_6;
 } else if (VAR_14) {
  goto fail5;
 }

 VAR_14 = FUNC_5(VAR_10);
 if (VAR_14)
  goto fail5;

 FUNC_11(VAR_10);
 FUNC_9(VAR_10);

 return 0;

fail5:
 FUNC_8(VAR_10, &VAR_10->irq_status);
fail4:
fail3:
 FUNC_2(VAR_10, 0, ((void*)0));
fail2:
fail1:
 FUNC_12(VAR_10->nic_data);
 return VAR_14;
}
