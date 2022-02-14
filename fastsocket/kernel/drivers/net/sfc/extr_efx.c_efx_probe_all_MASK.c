
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {int net_dev; scalar_t__ txq_entries; scalar_t__ rxq_entries; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct efx_nic*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct efx_nic*) ;
 int FUNC_4 (struct efx_nic*) ;
 int FUNC_5 (struct efx_nic*) ;
 int FUNC_6 (struct efx_nic*) ;
 int FUNC_7 (struct efx_nic*) ;
 int FUNC_8 (struct efx_nic*) ;
 int FUNC_9 (struct efx_nic*) ;
 int FUNC_10 (struct efx_nic*,int ,int ,char*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_11(struct efx_nic *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_5(VAR_4);
 if (VAR_5) {
  FUNC_10(VAR_4, VAR_3, VAR_4->net_dev, "failed to create NIC\n");
  goto fail1;
 }

 VAR_5 = FUNC_6(VAR_4);
 if (VAR_5) {
  FUNC_10(VAR_4, VAR_3, VAR_4->net_dev, "failed to create port\n");
  goto fail2;
 }

 FUNC_0(VAR_0 < VAR_1);
 if (FUNC_2(VAR_0 < FUNC_1(VAR_4))) {
  VAR_5 = -VAR_2;
  goto fail3;
 }
 VAR_4->rxq_entries = VAR_4->txq_entries = VAR_0;

 VAR_5 = FUNC_4(VAR_4);
 if (VAR_5) {
  FUNC_10(VAR_4, VAR_3, VAR_4->net_dev,
     "failed to create filter tables\n");
  goto fail3;
 }

 VAR_5 = FUNC_3(VAR_4);
 if (VAR_5)
  goto fail4;

 return 0;

 fail4:
 FUNC_7(VAR_4);
 fail3:
 FUNC_9(VAR_4);
 fail2:
 FUNC_8(VAR_4);
 fail1:
 return VAR_5;
}
