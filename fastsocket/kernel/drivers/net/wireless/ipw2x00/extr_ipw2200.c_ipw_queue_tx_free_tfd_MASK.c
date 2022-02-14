
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * chunk_len; int * chunk_ptr; int num_chunks; } ;
struct TYPE_7__ {TYPE_2__ data; } ;
struct TYPE_5__ {scalar_t__ message_type; } ;
struct tfd_frame {TYPE_3__ u; TYPE_1__ control_flags; } ;
struct pci_dev {int dummy; } ;
struct ipw_priv {struct pci_dev* pci_dev; } ;
struct TYPE_8__ {size_t last_used; } ;
struct clx2_tx_queue {TYPE_4__ q; int ** txb; struct tfd_frame* bd; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct pci_dev*,int,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct ipw_priv *VAR_3,
      struct clx2_tx_queue *VAR_4)
{
 struct tfd_frame *VAR_5 = &VAR_4->bd[VAR_4->q.last_used];
 struct pci_dev *VAR_6 = VAR_3->pci_dev;
 int VAR_7;


 if (VAR_5->control_flags.message_type == VAR_2)

  return;


 if (FUNC_2(VAR_5->u.data.num_chunks) > VAR_0) {
  FUNC_0("Too many chunks: %i\n",
     FUNC_2(VAR_5->u.data.num_chunks));

  return;
 }


 for (VAR_7 = 0; VAR_7 < FUNC_2(VAR_5->u.data.num_chunks); VAR_7++) {
  FUNC_4(VAR_6, FUNC_2(VAR_5->u.data.chunk_ptr[VAR_7]),
     FUNC_1(VAR_5->u.data.chunk_len[VAR_7]),
     VAR_1);
  if (VAR_4->txb[VAR_4->q.last_used]) {
   FUNC_3(VAR_4->txb[VAR_4->q.last_used]);
   VAR_4->txb[VAR_4->q.last_used] = ((void*)0);
  }
 }
}
