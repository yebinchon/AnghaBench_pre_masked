
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct efx_spi_device {int device_id; } ;
struct efx_nic {int net_dev; } ;
typedef int status ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct efx_nic*,struct efx_spi_device const*,int ,int,int *,int*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct efx_nic*,int ,int ,char*,int ,int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int,unsigned long) ;

int
FUNC_5(struct efx_nic *VAR_6, const struct efx_spi_device *VAR_7)
{
 unsigned long VAR_8 = VAR_5 + 1 + FUNC_0(VAR_1, 100);
 u8 VAR_9;
 int VAR_10;

 for (;;) {
  VAR_10 = FUNC_1(VAR_6, VAR_7, VAR_2, -1, ((void*)0),
        &VAR_9, sizeof(VAR_9));
  if (VAR_10)
   return VAR_10;
  if (!(VAR_9 & VAR_3))
   return 0;
  if (FUNC_4(VAR_5, VAR_8)) {
   FUNC_2(VAR_6, VAR_4, VAR_6->net_dev,
      "SPI write timeout on device %d"
      " last status=0x%02x\n",
      VAR_7->device_id, VAR_9);
   return -VAR_0;
  }
  FUNC_3(1);
 }
}
