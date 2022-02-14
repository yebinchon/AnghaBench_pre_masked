
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_mcdi_request {int len; scalar_t__ cmd; int rc; scalar_t__ payload; } ;
union efx_ioctl_data {struct efx_mcdi_request mcdi_request; } ;
typedef int u8 ;
struct efx_nic {int net_dev; } ;
typedef int __u8 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct efx_nic*,scalar_t__,int const*,int,int *,int,size_t*) ;
 scalar_t__ FUNC_1 (struct efx_nic*) ;
 int FUNC_2 (struct efx_nic*,int ) ;
 int FUNC_3 (struct efx_nic*,int ,int ,char*,...) ;

__attribute__((used)) static int FUNC_4(struct efx_nic *VAR_7, union efx_ioctl_data *VAR_8)
{
 struct efx_mcdi_request *VAR_9 = &VAR_8->mcdi_request;
 size_t VAR_10;
 int VAR_11;

 if (VAR_9->len > sizeof(VAR_9->payload) || VAR_9->len & 3) {
  FUNC_3(VAR_7, VAR_6, VAR_7->net_dev, "inlen is too long");
  return -VAR_1;
 }

 if (FUNC_1(VAR_7) < VAR_0) {
  FUNC_3(VAR_7, VAR_6, VAR_7->net_dev,
     "error: NIC has no MC for MCDI\n");
  return -VAR_3;
 }

 VAR_11 = FUNC_0(VAR_7, VAR_9->cmd, (const u8 *)VAR_9->payload,
     VAR_9->len, (u8 *)VAR_9->payload,
     sizeof(VAR_9->payload), &VAR_10);






 if (VAR_9->cmd == VAR_4 && VAR_11 == -VAR_2) {
  FUNC_3(VAR_7, VAR_6, VAR_7->net_dev, "MC fatal error %d\n", -VAR_11);
  FUNC_2(VAR_7, VAR_5);
 }




 VAR_9->rc = -VAR_11;
 VAR_9->len = (__u8)VAR_10;
 return 0;
}
