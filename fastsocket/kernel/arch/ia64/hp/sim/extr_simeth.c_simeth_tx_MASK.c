
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {unsigned int len; int data; } ;
struct TYPE_2__ {unsigned int tx_bytes; int tx_packets; } ;
struct simeth_local {int simfd; TYPE_1__ stats; } ;
struct net_device {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (char*,int ,unsigned int) ;
 struct simeth_local* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int ,unsigned int) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_4(struct sk_buff *VAR_3, struct net_device *VAR_4)
{
 struct simeth_local *VAR_5 = FUNC_2(VAR_4);
 unsigned int VAR_6 = VAR_3->len;


 VAR_5->stats.tx_bytes += VAR_3->len;
 VAR_5->stats.tx_packets++;


 if (VAR_2 > 5) FUNC_1("simeth_tx", VAR_3->data, VAR_6);

 FUNC_3(VAR_5->simfd, VAR_3->data, VAR_6);






 FUNC_0(VAR_3);
 return VAR_1;
}
