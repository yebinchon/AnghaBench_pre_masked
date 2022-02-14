
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; int * data; } ;
struct TYPE_2__ {int tx_bytes; int tx_packets; } ;
struct net_device {TYPE_1__ stats; } ;
struct lt_sendlap {int length; int laptype; int dnode; int command; } ;
typedef int netdev_tx_t ;
typedef int cbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct net_device*,struct lt_sendlap*,int,unsigned char*,int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (struct sk_buff*) ;
 unsigned char* FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static netdev_tx_t FUNC_6(struct sk_buff *VAR_4, struct net_device *VAR_5)
{



 int VAR_6;
 struct lt_sendlap VAR_7;
 unsigned char *VAR_8;

 VAR_7.command = VAR_1;
 VAR_7.dnode = VAR_4->data[0];
 VAR_7.laptype = VAR_4->data[2];
 FUNC_3(VAR_4,3);
 VAR_7.length = VAR_4->len;
 FUNC_4(VAR_4);

 if(VAR_3 & VAR_0) {
  FUNC_2("command ");
  for(VAR_6=0;VAR_6<6;VAR_6++)
   FUNC_2("%02x ",((unsigned char *)&VAR_7)[VAR_6]);
  FUNC_2("\n");
 }

 VAR_8 = FUNC_5(VAR_4);
 FUNC_1(VAR_5, &VAR_7, sizeof(VAR_7), VAR_8, VAR_4->len);

 if(VAR_3 & VAR_0) {
  FUNC_2("sent %d ddp bytes\n",VAR_4->len);
  for (VAR_6 = 0; VAR_6 < VAR_4->len; VAR_6++)
   FUNC_2("%02x ", VAR_8[VAR_6]);
  FUNC_2("\n");
 }

 VAR_5->stats.tx_packets++;
 VAR_5->stats.tx_bytes += VAR_4->len;

 FUNC_0(VAR_4);
 return VAR_2;
}
