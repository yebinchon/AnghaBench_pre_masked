
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sk_buff {int len; int data; } ;
struct TYPE_10__ {TYPE_3__* hdev; int tx_state; int txq; TYPE_5__* p_dev; } ;
typedef TYPE_4__ bt3c_info_t ;
struct TYPE_7__ {unsigned int BasePort1; } ;
struct TYPE_11__ {TYPE_1__ io; } ;
struct TYPE_8__ {int byte_tx; } ;
struct TYPE_9__ {TYPE_2__ stat; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (unsigned int,int,int ,int) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (TYPE_5__*) ;
 struct sk_buff* FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(bt3c_info_t *VAR_1)
{
 if (!VAR_1) {
  FUNC_0("Unknown device");
  return;
 }

 if (FUNC_6(VAR_0, &(VAR_1->tx_state)))
  return;

 do {
  register unsigned int VAR_2 = VAR_1->p_dev->io.BasePort1;
  register struct sk_buff *VAR_3;
  register int VAR_4;

  if (!FUNC_4(VAR_1->p_dev))
   break;


  if (!(VAR_3 = FUNC_5(&(VAR_1->txq)))) {
   FUNC_2(VAR_0, &(VAR_1->tx_state));
   break;
  }


  VAR_4 = FUNC_1(VAR_2, 256, VAR_3->data, VAR_3->len);

  if (VAR_4 != VAR_3->len) {
   FUNC_0("Very strange");
  }

  FUNC_3(VAR_3);

  VAR_1->hdev->stat.byte_tx += VAR_4;

 } while (0);
}
