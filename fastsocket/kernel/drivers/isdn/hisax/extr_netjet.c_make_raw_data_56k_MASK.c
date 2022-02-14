
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u_int ;
typedef int u_char ;
struct TYPE_6__ {int* sendbuf; size_t sendcnt; int* sp; } ;
struct TYPE_7__ {TYPE_2__ tiger; } ;
struct BCState {TYPE_3__ hw; TYPE_1__* tx_skb; int tx_cnt; TYPE_4__* cs; } ;
struct TYPE_8__ {int debug; } ;
struct TYPE_5__ {size_t len; int* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (size_t,int) ;
 size_t VAR_3 ;
 int FUNC_1 (TYPE_4__*,char*,...) ;

__attribute__((used)) static int FUNC_2(struct BCState *VAR_4) {

 register u_int VAR_5,VAR_6=0;
 register u_char VAR_7;
 register u_char VAR_8;
 register u_char VAR_9 = 0;
 register u_char VAR_10 = 0;
 register u_char VAR_11 = 0;
 u_int VAR_12;

 if (!VAR_4->tx_skb) {
  FUNC_1(VAR_4->cs, "tiger make_raw_56k: NULL skb");
  return(1);
 }
 VAR_8 = VAR_0;
 for (VAR_7=0; VAR_7<8; VAR_7++) {
  VAR_11++;
  VAR_10 >>= 1;
  if (VAR_8 & 1)
   VAR_10 |= 0x80;
  else
   VAR_10 &= 0x7f;
  if (VAR_11==7) {
   VAR_10 >>= 1;
   VAR_10 |= 0x80;
   VAR_4->hw.tiger.sendbuf[VAR_6++] = VAR_10;
   VAR_11 = 0;
  }
  VAR_8 >>= 1;
 };
 VAR_12 = VAR_3;
 for (VAR_5=0; VAR_5<VAR_4->tx_skb->len; VAR_5++) {
  VAR_8 = VAR_4->tx_skb->data[VAR_5];
  VAR_12 = FUNC_0 (VAR_12, VAR_8);
  VAR_2;
 }
 VAR_12 ^= 0xffff;
 VAR_8 = VAR_12 & 0xff;
 VAR_2;
 VAR_8 = (VAR_12>>8) & 0xff;
 VAR_2;
 VAR_8 = VAR_0;
 for (VAR_7=0; VAR_7<8; VAR_7++) {
  VAR_11++;
  VAR_10 >>= 1;
  if (VAR_8 & 1)
   VAR_10 |= 0x80;
  else
   VAR_10 &= 0x7f;
  if (VAR_11==7) {
   VAR_10 >>= 1;
   VAR_10 |= 0x80;
   VAR_4->hw.tiger.sendbuf[VAR_6++] = VAR_10;
   VAR_11 = 0;
  }
  VAR_8 >>= 1;
 }
 if (VAR_4->cs->debug & VAR_1)
  FUNC_1(VAR_4->cs,"tiger make_raw_56k: in %ld out %d.%d",
   VAR_4->tx_skb->len, VAR_6, VAR_11);
 if (VAR_11) {
  while (8>VAR_11++) {
   VAR_10 >>= 1;
   VAR_10 |= 0x80;
  }
  VAR_4->hw.tiger.sendbuf[VAR_6++] = VAR_10;
  VAR_4->hw.tiger.sendbuf[VAR_6++] = 0xff;
 }
 VAR_4->hw.tiger.sendcnt = VAR_6;
 VAR_4->tx_cnt -= VAR_4->tx_skb->len;
 VAR_4->hw.tiger.sp = VAR_4->hw.tiger.sendbuf;
 return(0);
}
