
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_2__ {int pktsz; } ;
struct rxf_fifo {TYPE_1__ m; } ;
struct rxdb {scalar_t__ nelem; } ;
struct rx_map {int skb; scalar_t__ dma; } ;
struct bdx_priv {int pdev; struct rxdb* rxdb; } ;


 int FUNC_0 (char*,scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 struct rx_map* FUNC_1 (struct rxdb*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct rxdb*) ;
 scalar_t__ FUNC_3 (struct rxdb*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct bdx_priv *VAR_2, struct rxf_fifo *VAR_3)
{
 struct rx_map *VAR_4;
 struct rxdb *VAR_5 = VAR_2->rxdb;
 u16 VAR_6;

 VAR_0;
 FUNC_0("total=%d free=%d busy=%d\n", VAR_5->nelem, FUNC_3(VAR_5),
     VAR_5->nelem - FUNC_3(VAR_5));
 while (FUNC_3(VAR_5) > 0) {
  VAR_6 = FUNC_2(VAR_5);
  VAR_4 = FUNC_1(VAR_5, VAR_6);
  VAR_4->dma = 0;
 }
 for (VAR_6 = 0; VAR_6 < VAR_5->nelem; VAR_6++) {
  VAR_4 = FUNC_1(VAR_5, VAR_6);
  if (VAR_4->dma) {
   FUNC_5(VAR_2->pdev,
      VAR_4->dma, VAR_3->m.pktsz,
      VAR_1);
   FUNC_4(VAR_4->skb);
  }
 }
}
