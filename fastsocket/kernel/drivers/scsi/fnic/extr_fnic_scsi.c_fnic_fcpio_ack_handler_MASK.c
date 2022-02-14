
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef int u16 ;
struct vnic_wq_copy {int dummy; } ;
struct fnic {unsigned int raw_wq_count; unsigned int rq_count; int* fw_ack_recd; TYPE_4__* lport; int * wq_copy_lock; int * fw_ack_index; struct vnic_wq_copy* wq_copy; } ;
struct TYPE_5__ {int request_out; } ;
struct TYPE_6__ {TYPE_1__ ack; } ;
struct fcpio_fw_req {TYPE_2__ u; } ;
struct TYPE_8__ {TYPE_3__* host; } ;
struct TYPE_7__ {int host_no; } ;


 int FUNC_0 (void (*) (struct fnic*,unsigned int,struct fcpio_fw_req*),int ,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (struct vnic_wq_copy*,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_4(struct fnic *VAR_0,
       unsigned int VAR_1,
       struct fcpio_fw_req *VAR_2)
{
 struct vnic_wq_copy *VAR_3;
 u16 VAR_4 = VAR_2->u.ack.request_out;
 unsigned long VAR_5;
 u64 *VAR_6 = (u64 *)(void *)VAR_2;


 VAR_3 = &VAR_0->wq_copy[VAR_1 - VAR_0->raw_wq_count - VAR_0->rq_count];
 FUNC_2(&VAR_0->wq_copy_lock[0], VAR_5);

 if (FUNC_1(VAR_3, VAR_4)) {
  VAR_0->fw_ack_index[0] = VAR_4;
  VAR_0->fw_ack_recd[0] = 1;
 }
 FUNC_3(&VAR_0->wq_copy_lock[0], VAR_5);
 FUNC_0(FUNC_4,
    VAR_0->lport->host->host_no, 0, 0, VAR_6[2], VAR_6[3],
    VAR_6[4], VAR_6[5]);
}
