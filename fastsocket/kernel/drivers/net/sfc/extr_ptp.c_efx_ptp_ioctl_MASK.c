
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifreq {int ifr_data; } ;
struct hwtstamp_config {int dummy; } ;
struct efx_nic {int ptp_data; } ;
typedef int config ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct hwtstamp_config*,int ,int) ;
 scalar_t__ FUNC_1 (int ,struct hwtstamp_config*,int) ;
 int FUNC_2 (struct efx_nic*,struct hwtstamp_config*) ;

int FUNC_3(struct efx_nic *VAR_2, struct ifreq *VAR_3, int VAR_4)
{
 struct hwtstamp_config VAR_5;
 int VAR_6;


 if (!VAR_2->ptp_data)
  return -VAR_1;

 if (FUNC_0(&VAR_5, VAR_3->ifr_data, sizeof(VAR_5)))
  return -VAR_0;

 VAR_6 = FUNC_2(VAR_2, &VAR_5);
 if (VAR_6 != 0)
  return VAR_6;

 return FUNC_1(VAR_3->ifr_data, &VAR_5, sizeof(VAR_5))
  ? -VAR_0 : 0;
}
