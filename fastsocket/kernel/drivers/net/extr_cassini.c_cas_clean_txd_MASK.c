
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct sk_buff {int dummy; } ;
struct cas_tx_desc {int control; int buffer; } ;
struct cas {TYPE_2__** tx_tiny_use; int pdev; struct sk_buff*** tx_skbs; struct cas_tx_desc** init_txds; } ;
struct TYPE_4__ {scalar_t__ used; } ;
struct TYPE_3__ {int nr_frags; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 TYPE_1__* FUNC_6 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_7(struct cas *VAR_2, int VAR_3)
{
 struct cas_tx_desc *VAR_4 = VAR_2->init_txds[VAR_3];
 struct sk_buff *VAR_5, **VAR_6 = VAR_2->tx_skbs[VAR_3];
 u64 VAR_7, VAR_8;
 int VAR_9, VAR_10;

 VAR_10 = FUNC_1(VAR_3);
 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
  int VAR_11;

  if (VAR_6[VAR_9] == ((void*)0))
   continue;

  VAR_5 = VAR_6[VAR_9];
  VAR_6[VAR_9] = ((void*)0);

  for (VAR_11 = 0; VAR_11 <= FUNC_6(VAR_5)->nr_frags; VAR_11++) {
   int VAR_12 = VAR_9 & (VAR_10 - 1);




   VAR_7 = FUNC_3(VAR_4[VAR_12].buffer);
   VAR_8 = FUNC_0(VAR_1,
      FUNC_3(VAR_4[VAR_12].control));
   FUNC_5(VAR_2->pdev, VAR_7, VAR_8,
           VAR_0);

   if (VAR_11 != FUNC_6(VAR_5)->nr_frags) {
    VAR_9++;




    VAR_12 = VAR_9 & (VAR_10 - 1);
    if (VAR_2->tx_tiny_use[VAR_3][VAR_12].used)
     VAR_9++;
   }
  }
  FUNC_2(VAR_5);
 }


 FUNC_4(VAR_2->tx_tiny_use[VAR_3], 0, VAR_10*sizeof(*VAR_2->tx_tiny_use[VAR_3]));
}
