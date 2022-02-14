
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sock {int sk_state; } ;
struct sk_buff {int dummy; } ;
struct pppox_sock {int chan; } ;
struct TYPE_4__ {int rx_bytes; int rx_packets; } ;
struct pppol2tp_tunnel {TYPE_1__ stats; } ;
struct TYPE_5__ {int rx_bytes; int rx_errors; int rx_packets; } ;
struct pppol2tp_session {struct sock* sock; TYPE_2__ stats; int name; int debug; int nr; struct pppol2tp_tunnel* tunnel; } ;
struct TYPE_6__ {int length; scalar_t__ has_seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_0 (struct sk_buff*) ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ,char*,int ,...) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int *,struct sk_buff*) ;
 struct pppox_sock* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sock*) ;

__attribute__((used)) static void FUNC_10(struct pppol2tp_session *VAR_5, struct sk_buff *VAR_6)
{
 struct pppol2tp_tunnel *VAR_7 = VAR_5->tunnel;
 int VAR_8 = FUNC_0(VAR_6)->length;
 struct sock *VAR_9 = ((void*)0);




 FUNC_8(VAR_6);

 VAR_7->stats.rx_packets++;
 VAR_7->stats.rx_bytes += VAR_8;
 VAR_5->stats.rx_packets++;
 VAR_5->stats.rx_bytes += VAR_8;

 if (FUNC_0(VAR_6)->has_seq) {

  VAR_5->nr++;
  FUNC_1(VAR_5->debug, VAR_3, VAR_0,
         "%s: updated nr to %hu\n", VAR_5->name, VAR_5->nr);
 }




 VAR_9 = VAR_5->sock;
 if (VAR_9->sk_state & VAR_4) {
  struct pppox_sock *VAR_10;
  FUNC_1(VAR_5->debug, VAR_2, VAR_0,
         "%s: recv %d byte data frame, passing to ppp\n",
         VAR_5->name, VAR_8);
  FUNC_6(VAR_6);
  FUNC_7(VAR_6);
  FUNC_3(VAR_6);

  VAR_10 = FUNC_5(VAR_9);
  FUNC_4(&VAR_10->chan, VAR_6);
 } else {
  FUNC_1(VAR_5->debug, VAR_2, VAR_1,
         "%s: socket not bound\n", VAR_5->name);


  VAR_5->stats.rx_errors++;
  FUNC_2(VAR_6);
 }

 FUNC_9(VAR_5->sock);
}
