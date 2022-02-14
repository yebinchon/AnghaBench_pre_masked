
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibmpex_bmc_data {int bmc_device; int tx_message; int tx_msgid; int address; int user; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int *,int ,int *,struct ibmpex_bmc_data*,int ,int ,int ) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static int FUNC_3(struct ibmpex_bmc_data *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_2(&VAR_0->address, sizeof(VAR_0->address));
 if (VAR_1)
  goto out;

 VAR_0->tx_msgid++;
 VAR_1 = FUNC_1(VAR_0->user, &VAR_0->address, VAR_0->tx_msgid,
       &VAR_0->tx_message, VAR_0, 0, 0, 0);
 if (VAR_1)
  goto out1;

 return 0;
out1:
 FUNC_0(VAR_0->bmc_device, "request_settime=%x\n", VAR_1);
 return VAR_1;
out:
 FUNC_0(VAR_0->bmc_device, "validate_addr=%x\n", VAR_1);
 return VAR_1;
}
