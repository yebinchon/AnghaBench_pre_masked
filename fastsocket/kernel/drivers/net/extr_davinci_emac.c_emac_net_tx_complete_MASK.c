
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {scalar_t__ len; } ;
struct TYPE_2__ {int tx_bytes; int tx_packets; } ;
struct emac_priv {TYPE_1__ net_dev_stats; int ndev; } ;


 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct emac_priv *VAR_0,
    void **VAR_1,
    int VAR_2, u32 VAR_3)
{
 u32 VAR_4;

 if (FUNC_3(VAR_2 && FUNC_1(VAR_0->ndev)))
  FUNC_2(VAR_0->ndev);
 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  struct sk_buff *VAR_5 = (struct sk_buff *)VAR_1[VAR_4];
  if (VAR_5 == ((void*)0))
   continue;
  VAR_0->net_dev_stats.tx_packets++;
  VAR_0->net_dev_stats.tx_bytes += VAR_5->len;
  FUNC_0(VAR_5);
 }
 return 0;
}
