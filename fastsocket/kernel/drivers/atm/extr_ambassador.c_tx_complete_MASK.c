
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_13__ ;


struct TYPE_18__ {struct sk_buff* skb; } ;
typedef TYPE_4__ tx_simple ;
struct TYPE_19__ {int handle; } ;
typedef TYPE_5__ tx_out ;
struct sk_buff {int dummy; } ;
struct TYPE_17__ {int tx_ok; } ;
struct TYPE_20__ {TYPE_3__ stats; } ;
typedef TYPE_6__ amb_dev ;
struct TYPE_16__ {TYPE_1__* stats; } ;
struct TYPE_15__ {int tx; } ;
struct TYPE_14__ {TYPE_2__* vcc; } ;


 TYPE_13__* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,char*,TYPE_6__*,TYPE_5__*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int *) ;
 TYPE_4__* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_6 (amb_dev * VAR_2, tx_out * VAR_3) {
  tx_simple * VAR_4 = FUNC_4 (VAR_3->handle);
  struct sk_buff * VAR_5 = VAR_4->skb;

  FUNC_1 (VAR_0|VAR_1, "tx_complete %p %p", VAR_2, VAR_3);


  FUNC_3(&FUNC_0(VAR_5)->vcc->stats->tx);


  FUNC_5 (VAR_4);


  FUNC_2 (VAR_5);

  VAR_2->stats.tx_ok++;
  return;
}
