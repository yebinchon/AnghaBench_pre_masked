
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct pci_dev {int dummy; } ;
struct TYPE_4__ {int read_ptr; } ;
struct il_tx_queue {TYPE_2__ q; struct sk_buff** skbs; int * meta; scalar_t__ tfds; } ;
struct il_priv {struct pci_dev* pci_dev; } ;
struct il3945_tfd {TYPE_1__* tbs; int control_flags; } ;
struct TYPE_3__ {int len; int addr; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (struct pci_dev*,int ,int ,int ) ;

void
FUNC_7(struct il_priv *VAR_4, struct il_tx_queue *VAR_5)
{
 struct il3945_tfd *VAR_6 = (struct il3945_tfd *)VAR_5->tfds;
 int VAR_7 = VAR_5->q.read_ptr;
 struct il3945_tfd *VAR_8 = &VAR_6[VAR_7];
 struct pci_dev *VAR_9 = VAR_4->pci_dev;
 int VAR_10;
 int VAR_11;


 VAR_11 = FUNC_1(FUNC_5(VAR_8->control_flags));
 if (VAR_11 > VAR_0) {
  FUNC_0("Too many chunks: %i\n", VAR_11);

  return;
 }


 if (VAR_11)
  FUNC_6(VAR_9, FUNC_3(&VAR_5->meta[VAR_7], VAR_3),
     FUNC_4(&VAR_5->meta[VAR_7], VAR_2),
     VAR_1);



 for (VAR_10 = 1; VAR_10 < VAR_11; VAR_10++)
  FUNC_6(VAR_9, FUNC_5(VAR_8->tbs[VAR_10].addr),
     FUNC_5(VAR_8->tbs[VAR_10].len),
     VAR_1);


 if (VAR_5->skbs) {
  struct sk_buff *VAR_12 = VAR_5->skbs[VAR_5->q.read_ptr];


  if (VAR_12) {
   FUNC_2(VAR_12);
   VAR_5->skbs[VAR_5->q.read_ptr] = ((void*)0);
  }
 }
}
