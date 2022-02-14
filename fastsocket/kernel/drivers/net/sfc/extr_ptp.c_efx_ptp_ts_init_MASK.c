
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hwtstamp_config {scalar_t__ tx_type; int rx_filter; scalar_t__ flags; } ;
struct efx_nic {TYPE_1__* ptp_data; } ;
struct TYPE_2__ {unsigned int mode; struct hwtstamp_config config; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (struct efx_nic*,int,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct efx_nic *VAR_7, struct hwtstamp_config *VAR_8)
{
 bool VAR_9 = 0;
 unsigned int VAR_10;
 int VAR_11;

 if (VAR_8->flags)
  return -VAR_0;

 if ((VAR_8->tx_type != VAR_2) &&
     (VAR_8->tx_type != VAR_3))
  return -VAR_1;

 VAR_10 = VAR_7->ptp_data->mode;

 switch (VAR_8->rx_filter) {
 case 140:
  break;
 case 138:
 case 137:
 case 139:
  VAR_8->rx_filter = 138;
  VAR_10 = VAR_4;
  VAR_9 = 1;
  break;
 case 130:
 case 129:
 case 131:



  VAR_8->rx_filter = 130;
  VAR_10 = VAR_6;
  VAR_9 = 1;
  break;
 case 135:
 case 128:
 case 136:
 case 133:
 case 132:
 case 134:

  return -VAR_1;
  break;
 default:
  return -VAR_1;
 }

 if (VAR_8->tx_type != VAR_2)
  VAR_9 = 1;






 VAR_11 = FUNC_0(VAR_7, VAR_9, VAR_10);
 if ((VAR_11 != 0) && (VAR_10 == VAR_6))
  VAR_11 = FUNC_0(VAR_7, VAR_9, VAR_5);
 if (VAR_11 != 0)
  return VAR_11;

 VAR_7->ptp_data->config = *VAR_8;

 return 0;
}
