
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct usbnet {scalar_t__* data; } ;
struct smsc95xx_priv {scalar_t__ use_tx_csum; } ;
struct sk_buff {scalar_t__ ip_summed; int len; int data; } ;
typedef int gfp_t ;
struct TYPE_2__ {int nr_frags; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ,int*,int) ;
 struct sk_buff* FUNC_4 (struct sk_buff*,int,int ,int ) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,int) ;
 TYPE_1__* FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;

__attribute__((used)) static struct sk_buff *FUNC_9(struct usbnet *VAR_6,
      struct sk_buff *VAR_7, gfp_t VAR_8)
{
 struct smsc95xx_priv *VAR_9 = (struct smsc95xx_priv *)(VAR_6->data[0]);
 bool VAR_10 = VAR_9->use_tx_csum && (VAR_7->ip_summed == VAR_0);
 int VAR_11 = VAR_10 ? VAR_2 : VAR_1;
 u32 VAR_12, VAR_13;


 FUNC_0(FUNC_7(VAR_7)->nr_frags);

 if (FUNC_5(VAR_7) < VAR_11) {
  struct sk_buff *VAR_14 = FUNC_4(VAR_7,
   VAR_11, 0, VAR_8);
  FUNC_2(VAR_7);
  VAR_7 = VAR_14;
  if (!VAR_7)
   return ((void*)0);
 }

 if (VAR_10) {
  u32 VAR_15 = FUNC_8(VAR_7);
  FUNC_6(VAR_7, 4);
  FUNC_3(VAR_7->data, &VAR_15, 4);
 }

 FUNC_6(VAR_7, 4);
 VAR_13 = (u32)(VAR_7->len - 4);
 if (VAR_10)
  VAR_13 |= VAR_5;
 FUNC_1(&VAR_13);
 FUNC_3(VAR_7->data, &VAR_13, 4);

 FUNC_6(VAR_7, 4);
 VAR_12 = (u32)(VAR_7->len - 8) | VAR_3 |
  VAR_4;
 FUNC_1(&VAR_12);
 FUNC_3(VAR_7->data, &VAR_12, 4);

 return VAR_7;
}
