
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff_head {int dummy; } ;
struct sk_buff {scalar_t__ cb; } ;
struct efx_ptp_match {scalar_t__ state; int expiry; } ;
struct efx_ptp_data {int rxq; } ;
struct efx_nic {int net_dev; struct efx_ptp_data* ptp_data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct sk_buff_head*,struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct efx_nic*,struct sk_buff*) ;
 int VAR_3 ;
 int FUNC_2 (struct efx_nic*,int ,int ,char*) ;
 int VAR_4 ;
 struct sk_buff* FUNC_3 (int *) ;
 int FUNC_4 (int *,struct sk_buff*) ;
 scalar_t__ FUNC_5 (int ,int ) ;

__attribute__((used)) static bool FUNC_6(struct efx_nic *VAR_5, struct sk_buff_head *VAR_6)
{
 struct efx_ptp_data *VAR_7 = VAR_5->ptp_data;
 bool VAR_8 = 0;
 struct sk_buff *VAR_9;

 while ((VAR_9 = FUNC_3(&VAR_7->rxq))) {
  struct efx_ptp_match *VAR_10;

  VAR_10 = (struct efx_ptp_match *)VAR_9->cb;
  if (VAR_10->state == VAR_1) {
   FUNC_0(VAR_6, VAR_9);
  } else if (FUNC_1(VAR_5, VAR_9) ==
      VAR_0) {
   VAR_8 = 1;
   FUNC_0(VAR_6, VAR_9);
  } else if (FUNC_5(VAR_3, VAR_10->expiry)) {
   VAR_10->state = VAR_2;
   FUNC_2(VAR_5, VAR_4, VAR_5->net_dev,
       "PTP packet - no timestamp seen\n");
   FUNC_0(VAR_6, VAR_9);
  } else {

   FUNC_4(&VAR_7->rxq, VAR_9);
   break;
  }
 }

 return VAR_8;
}
