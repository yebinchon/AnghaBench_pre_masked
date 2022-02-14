
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bna_tx {TYPE_1__* bna; int (* tx_cleanup_cbfn ) (int ,struct bna_tx*) ;int (* tx_stall_cbfn ) (int ,struct bna_tx*) ;} ;
typedef enum bna_tx_event { ____Placeholder_bna_tx_event } bna_tx_event ;
struct TYPE_2__ {int bnad; } ;






 int FUNC_0 (struct bna_tx*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct bna_tx*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,struct bna_tx*) ;
 int FUNC_4 (int ,struct bna_tx*) ;
 int FUNC_5 (int ,struct bna_tx*) ;

__attribute__((used)) static void
FUNC_6(struct bna_tx *VAR_3, enum bna_tx_event VAR_4)
{
 switch (VAR_4) {
 case 128:
  FUNC_0(VAR_3, VAR_2);
  VAR_3->tx_stall_cbfn(VAR_3->bna->bnad, VAR_3);
  FUNC_2(VAR_3);
  break;

 case 130:
  FUNC_0(VAR_3, VAR_0);
  VAR_3->tx_stall_cbfn(VAR_3->bna->bnad, VAR_3);
  VAR_3->tx_cleanup_cbfn(VAR_3->bna->bnad, VAR_3);
  break;

 case 129:
 case 131:
  FUNC_0(VAR_3, VAR_1);
  break;

 default:
  FUNC_1(VAR_4);
 }
}
