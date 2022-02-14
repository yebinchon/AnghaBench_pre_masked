
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int txtime ;
typedef int timestamps ;
struct skb_shared_hwtstamps {int hwtstamp; } ;
struct sk_buff {scalar_t__ ip_summed; int len; } ;
struct efx_nic {TYPE_1__* ptp_data; } ;
struct TYPE_4__ {scalar_t__ nr_frags; } ;
struct TYPE_3__ {int * txbuf; } ;


 size_t FUNC_0 (int ,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct efx_nic*,int ,int *,size_t,int *,int,size_t*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct skb_shared_hwtstamps*,int ,int) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*,int *,size_t) ;
 int FUNC_10 (struct sk_buff*) ;
 TYPE_2__* FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*,struct skb_shared_hwtstamps*) ;

__attribute__((used)) static int FUNC_13(struct efx_nic *VAR_10, struct sk_buff *VAR_11)
{
 u8 *VAR_12 = VAR_10->ptp_data->txbuf;
 struct skb_shared_hwtstamps VAR_13;
 int VAR_14 = -VAR_1;

 size_t VAR_15 = FUNC_0(FUNC_3(VAR_11->len), 4);
 u8 VAR_16[VAR_5];

 FUNC_2(VAR_12, VAR_6, VAR_4);
 FUNC_2(VAR_12, VAR_7, VAR_11->len);
 if (FUNC_11(VAR_11)->nr_frags != 0) {
  VAR_14 = FUNC_10(VAR_11);
  if (VAR_14 != 0)
   goto fail;
 }

 if (VAR_11->ip_summed == VAR_0) {
  VAR_14 = FUNC_8(VAR_11);
  if (VAR_14 != 0)
   goto fail;
 }
 FUNC_9(VAR_11,
      &VAR_12[VAR_3],
      VAR_15);
 VAR_14 = FUNC_5(VAR_10, VAR_2, VAR_12, VAR_15, VAR_16,
     sizeof(VAR_16), &VAR_15);
 if (VAR_14 != 0)
  goto fail;

 FUNC_7(&VAR_13, 0, sizeof(VAR_13));
 VAR_13.hwtstamp = FUNC_6(
  FUNC_1(VAR_16, VAR_9),
  FUNC_1(VAR_16, VAR_8));

 FUNC_12(VAR_11, &VAR_13);

 VAR_14 = 0;

fail:
 FUNC_4(VAR_11);

 return VAR_14;
}
