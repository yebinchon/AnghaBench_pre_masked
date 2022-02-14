
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int va; int wptr; int pktsz; int memsz; } ;
struct rxf_fifo {TYPE_1__ m; } ;
struct rxf_desc {void* len; void* pa_hi; void* pa_lo; int va_lo; void* info; } ;
struct rxdb {int dummy; } ;
struct rxd_desc {int va_lo; } ;
struct rx_map {int dma; struct sk_buff* skb; } ;
struct bdx_priv {struct rxdb* rxdb; struct rxf_fifo rxf_fifo0; } ;


 void* FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 struct rx_map* FUNC_5 (struct rxdb*,int ) ;
 int FUNC_6 (int,int,int) ;
 int FUNC_7 (struct rxf_desc*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct bdx_priv *VAR_1, struct rxd_desc *VAR_2)
{
 struct rxf_desc *VAR_3;
 struct rx_map *VAR_4;
 struct rxf_fifo *VAR_5;
 struct rxdb *VAR_6;
 struct sk_buff *VAR_7;
 int VAR_8;

 VAR_0;
 FUNC_1("priv=%p rxdd=%p\n", VAR_1, VAR_2);
 VAR_5 = &VAR_1->rxf_fifo0;
 VAR_6 = VAR_1->rxdb;
 FUNC_1("db=%p f=%p\n", VAR_6, VAR_5);
 VAR_4 = FUNC_5(VAR_6, VAR_2->va_lo);
 FUNC_1("dm=%p\n", VAR_4);
 VAR_7 = VAR_4->skb;
 VAR_3 = (struct rxf_desc *)(VAR_5->m.va + VAR_5->m.wptr);
 VAR_3->info = FUNC_0(0x10003);
 VAR_3->va_lo = VAR_2->va_lo;
 VAR_3->pa_lo = FUNC_0(FUNC_3(VAR_4->dma));
 VAR_3->pa_hi = FUNC_0(FUNC_2(VAR_4->dma));
 VAR_3->len = FUNC_0(VAR_5->m.pktsz);
 FUNC_7(VAR_3);

 VAR_5->m.wptr += sizeof(struct rxf_desc);
 VAR_8 = VAR_5->m.wptr - VAR_5->m.memsz;
 if (FUNC_8(VAR_8 >= 0)) {
  VAR_5->m.wptr = VAR_8;
  if (VAR_8 > 0) {
   FUNC_6(VAR_5->m.va, VAR_5->m.va + VAR_5->m.memsz, VAR_8);
   FUNC_1("wrapped descriptor\n");
  }
 }
 FUNC_4();
}
