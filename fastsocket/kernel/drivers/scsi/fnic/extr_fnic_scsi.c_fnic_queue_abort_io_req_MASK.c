
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct vnic_wq_copy {int dummy; } ;
struct fnic_io_req {int port_id; } ;
struct TYPE_4__ {int ed_tov; int ra_tov; } ;
struct fnic {scalar_t__* wq_copy_desc_low; int in_flight; int * wq_copy_lock; TYPE_2__ config; TYPE_1__* lport; struct vnic_wq_copy* wq_copy; } ;
struct Scsi_Host {int * host_lock; } ;
struct TYPE_3__ {struct Scsi_Host* host; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct Scsi_Host*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct fnic*,int ) ;
 int FUNC_4 (struct vnic_wq_copy*,int,int ,int ,int,int *,int ,int ,int ) ;
 int FUNC_5 (struct fnic*,struct vnic_wq_copy*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (struct vnic_wq_copy*) ;

__attribute__((used)) static inline int FUNC_10(struct fnic *VAR_3, int VAR_4,
       u32 VAR_5, u8 *VAR_6,
       struct fnic_io_req *VAR_7)
{
 struct vnic_wq_copy *VAR_8 = &VAR_3->wq_copy[0];
 struct Scsi_Host *VAR_9 = VAR_3->lport->host;
 unsigned long VAR_10;

 FUNC_6(VAR_9->host_lock, VAR_10);
 if (FUNC_8(FUNC_3(VAR_3,
      VAR_0))) {
  FUNC_7(VAR_9->host_lock, VAR_10);
  return 1;
 } else
  FUNC_2(&VAR_3->in_flight);
 FUNC_7(VAR_9->host_lock, VAR_10);

 FUNC_6(&VAR_3->wq_copy_lock[0], VAR_10);

 if (FUNC_9(VAR_8) <= VAR_3->wq_copy_desc_low[0])
  FUNC_5(VAR_3, VAR_8);

 if (!FUNC_9(VAR_8)) {
  FUNC_7(&VAR_3->wq_copy_lock[0], VAR_10);
  FUNC_1(&VAR_3->in_flight);
  FUNC_0(VAR_2, VAR_3->lport->host,
   "fnic_queue_abort_io_req: failure: no descriptors\n");
  return 1;
 }
 FUNC_4(VAR_8, VAR_4 | VAR_1,
         0, VAR_5, VAR_4, VAR_6, VAR_7->port_id,
         VAR_3->config.ra_tov, VAR_3->config.ed_tov);

 FUNC_7(&VAR_3->wq_copy_lock[0], VAR_10);
 FUNC_1(&VAR_3->in_flight);

 return 0;
}
