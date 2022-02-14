
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; char* data; } ;
struct TYPE_2__ {int tx_bytes; int tx_packets; } ;
struct net_device {TYPE_1__ stats; } ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (char,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (struct net_device*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_4(struct net_device *VAR_2,
 struct sk_buff *VAR_3)
{
 int VAR_4 = VAR_3->len;
 char *VAR_5 = VAR_3->data;

 FUNC_2(VAR_3->len, FUNC_3(VAR_2, VAR_1));

 for (; VAR_4; VAR_5++, VAR_4--)
  FUNC_1(*VAR_5, FUNC_3(VAR_2, VAR_0));

 VAR_2->stats.tx_packets++;
 VAR_2->stats.tx_bytes += VAR_3->len;

 FUNC_0(VAR_3);
}
