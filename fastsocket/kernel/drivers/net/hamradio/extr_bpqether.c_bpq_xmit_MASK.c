
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; int protocol; } ;
struct TYPE_2__ {int tx_bytes; int tx_packets; int tx_dropped; } ;
struct net_device {TYPE_1__ stats; } ;
struct bpqdev {int dest_addr; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*,struct net_device*) ;
 struct net_device* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct sk_buff*,struct net_device*,int ,int ,int *,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 () ;
 struct bpqdev* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (struct sk_buff*,int ) ;
 int FUNC_11 (struct sk_buff*,int) ;
 unsigned char* FUNC_12 (struct sk_buff*,int) ;
 int FUNC_13 (struct sk_buff*) ;

__attribute__((used)) static netdev_tx_t FUNC_14(struct sk_buff *VAR_3, struct net_device *VAR_4)
{
 unsigned char *VAR_5;
 struct bpqdev *VAR_6;
 int VAR_7;





 if (!FUNC_7(VAR_4)) {
  FUNC_4(VAR_3);
  return VAR_2;
 }

 FUNC_11(VAR_3, 1);
 VAR_7 = VAR_3->len;






 if (FUNC_10(VAR_3, VAR_0)) {
  if (FUNC_5())
   FUNC_9("bpqether: out of memory\n");
  FUNC_4(VAR_3);

  return VAR_2;
 }

 VAR_5 = FUNC_12(VAR_3, 2);

 *VAR_5++ = (VAR_7 + 5) % 256;
 *VAR_5++ = (VAR_7 + 5) / 256;

 VAR_6 = FUNC_6(VAR_4);

 if ((VAR_4 = FUNC_1(VAR_4)) == ((void*)0)) {
  VAR_4->stats.tx_dropped++;
  FUNC_4(VAR_3);
  return VAR_2;
 }

 VAR_3->protocol = FUNC_0(VAR_3, VAR_4);
 FUNC_13(VAR_3);
 FUNC_2(VAR_3, VAR_4, VAR_1, VAR_6->dest_addr, ((void*)0), 0);
 VAR_4->stats.tx_packets++;
 VAR_4->stats.tx_bytes+=VAR_3->len;

 FUNC_3(VAR_3);
 FUNC_8(VAR_4);
 return VAR_2;
}
