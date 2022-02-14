
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnic_wq_copy {int dummy; } ;
struct fnic {scalar_t__* wq_copy_desc_low; TYPE_1__* lport; int * wq_copy_lock; int in_flight; int tx_queue; int frame_queue; struct vnic_wq_copy* wq_copy; } ;
struct TYPE_2__ {int host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct fnic*,int ) ;
 int FUNC_3 (struct vnic_wq_copy*,int ) ;
 int FUNC_4 (struct fnic*,int ) ;
 int FUNC_5 (struct fnic*,struct vnic_wq_copy*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 scalar_t__ FUNC_11 (struct vnic_wq_copy*) ;

int FUNC_12(struct fnic *VAR_4)
{
 struct vnic_wq_copy *VAR_5 = &VAR_4->wq_copy[0];
 int VAR_6 = 0;
 unsigned long VAR_7;


 FUNC_4(VAR_4, VAR_1);

 FUNC_8(&VAR_4->frame_queue);
 FUNC_8(&VAR_4->tx_queue);


 while (FUNC_1(&VAR_4->in_flight))
  FUNC_7(FUNC_6(1));

 FUNC_9(&VAR_4->wq_copy_lock[0], VAR_7);

 if (FUNC_11(VAR_5) <= VAR_4->wq_copy_desc_low[0])
  FUNC_5(VAR_4, VAR_5);

 if (!FUNC_11(VAR_5))
  VAR_6 = -VAR_0;
 else
  FUNC_3(VAR_5, VAR_3);

 FUNC_10(&VAR_4->wq_copy_lock[0], VAR_7);

 if (!VAR_6)
  FUNC_0(VAR_2, VAR_4->lport->host,
         "Issued fw reset\n");
 else {
  FUNC_2(VAR_4, VAR_1);
  FUNC_0(VAR_2, VAR_4->lport->host,
         "Failed to issue fw reset\n");
 }

 return VAR_6;
}
