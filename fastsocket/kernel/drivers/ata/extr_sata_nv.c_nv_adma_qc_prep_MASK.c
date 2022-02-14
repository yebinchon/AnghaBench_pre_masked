
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct nv_adma_prd {int dummy; } ;
struct nv_adma_port_priv {int flags; struct nv_adma_cpb* cpb; } ;
struct nv_adma_cpb {int ctl_flags; int len; size_t tag; scalar_t__ resp_flags; int * aprd; int tf; scalar_t__ next_cpb_idx; } ;
struct TYPE_3__ {scalar_t__ protocol; } ;
struct ata_queued_cmd {size_t tag; int flags; TYPE_1__ tf; TYPE_2__* ap; } ;
struct TYPE_4__ {struct nv_adma_port_priv* private_data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct ata_queued_cmd*) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (struct ata_queued_cmd*,struct nv_adma_cpb*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_7 (struct ata_queued_cmd*) ;
 int FUNC_8 () ;

__attribute__((used)) static void FUNC_9(struct ata_queued_cmd *VAR_9)
{
 struct nv_adma_port_priv *VAR_10 = VAR_9->ap->private_data;
 struct nv_adma_cpb *VAR_11 = &VAR_10->cpb[VAR_9->tag];
 u8 VAR_12 = VAR_4 |
         VAR_6;

 if (FUNC_7(VAR_9)) {
  FUNC_0(!(VAR_10->flags & VAR_2) &&
   (VAR_9->flags & VAR_1));
  FUNC_5(VAR_9->ap);
  FUNC_2(VAR_9);
  return;
 }

 VAR_11->resp_flags = VAR_8;
 FUNC_8();
 VAR_11->ctl_flags = 0;
 FUNC_8();

 VAR_11->len = 3;
 VAR_11->tag = VAR_9->tag;
 VAR_11->next_cpb_idx = 0;


 if (VAR_9->tf.protocol == VAR_0)
  VAR_12 |= VAR_7 | VAR_5;

 FUNC_1("qc->flags = 0x%lx\n", VAR_9->flags);

 FUNC_6(&VAR_9->tf, VAR_11->tf);

 if (VAR_9->flags & VAR_1) {
  FUNC_4(VAR_9, VAR_11);
  VAR_12 |= VAR_3;
 } else
  FUNC_3(&VAR_11->aprd[0], 0, sizeof(struct nv_adma_prd) * 5);



 FUNC_8();
 VAR_11->ctl_flags = VAR_12;
 FUNC_8();
 VAR_11->resp_flags = 0;
}
