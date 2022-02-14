
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pbuf {scalar_t__ tot_len; int len; int payload; struct pbuf* next; } ;
struct netif {scalar_t__ state; } ;
struct bba_priv {int dummy; } ;
typedef int err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int VAR_10 ;
 int FUNC_3 (struct bba_priv*) ;
 int FUNC_4 (struct bba_priv*) ;
 int FUNC_5 (struct bba_priv*) ;
 int FUNC_6 (struct bba_priv*) ;
 int FUNC_7 (struct bba_priv*) ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,scalar_t__) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 () ;

__attribute__((used)) static err_t FUNC_16(struct netif *VAR_11,struct pbuf *VAR_12)
{
 u8 VAR_13[VAR_0];
 struct pbuf *VAR_14;
 struct bba_priv *VAR_15 = (struct bba_priv*)VAR_11->state;

 FUNC_5(VAR_15);
 FUNC_3(VAR_15);

 if(VAR_12->tot_len>VAR_5) {
  FUNC_1(("__bba_link_tx(%d,%p) pkt_size\n",VAR_12->tot_len,FUNC_2()));
  FUNC_6(VAR_15);
  FUNC_4(VAR_15);
  return VAR_9;
 }

 if(!FUNC_7(VAR_15)) {
  FUNC_1(("__bba_link_tx(error link state)\n"));
  FUNC_6(VAR_15);
  FUNC_4(VAR_15);
  return VAR_7;
 }

 FUNC_0(VAR_10,("__bba_link_tx(%d,%p)\n",VAR_12->tot_len,FUNC_2()));

 FUNC_10(VAR_4,VAR_12->tot_len);

 FUNC_15();
 FUNC_14(VAR_6);
 for(VAR_14=VAR_12;VAR_14!=((void*)0);VAR_14=VAR_14->next) {
  FUNC_13(VAR_14->payload,VAR_14->len);
 }
 if(VAR_12->tot_len<VAR_0) FUNC_12(VAR_13,(VAR_0-VAR_12->tot_len));
 FUNC_8();

 FUNC_11(VAR_1,((FUNC_9(VAR_1)&~VAR_2)|VAR_3));
 FUNC_4(VAR_15);
 return VAR_8;
}
