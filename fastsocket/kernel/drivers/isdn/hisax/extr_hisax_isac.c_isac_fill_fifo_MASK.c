
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct isac {int tx_cnt; int (* write_isac ) (struct isac*,int ,unsigned char) ;int (* write_isac_fifo ) (struct isac*,int *,int) ;TYPE_1__* tx_skb; } ;
struct TYPE_2__ {int len; int * data; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_0 ;
 int FUNC_2 (int ,int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (struct isac*,int *,int) ;
 int FUNC_5 (struct isac*,int ,unsigned char) ;

__attribute__((used)) static void FUNC_6(struct isac *VAR_5)
{



 int VAR_6;
 unsigned char VAR_7;
 u_char *VAR_8;

 FUNC_0(!VAR_5->tx_skb);

 VAR_6 = VAR_5->tx_skb->len;
 FUNC_0(VAR_6 <= 0);

 FUNC_1(VAR_0, "count %d", VAR_6);

 if (VAR_6 > 0x20) {
  VAR_6 = 0x20;
  VAR_7 = VAR_4;
 } else {
  VAR_7 = VAR_4 | VAR_3;
 }

 VAR_8 = VAR_5->tx_skb->data;
 FUNC_3(VAR_5->tx_skb, VAR_6);
 VAR_5->tx_cnt += VAR_6;
 FUNC_2(VAR_1, VAR_8, VAR_6);
 VAR_5->write_isac_fifo(VAR_5, VAR_8, VAR_6);
 VAR_5->write_isac(VAR_5, VAR_2, VAR_7);
}
