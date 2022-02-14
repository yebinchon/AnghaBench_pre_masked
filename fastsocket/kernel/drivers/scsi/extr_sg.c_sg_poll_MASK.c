
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct file {scalar_t__ private_data; } ;
typedef int poll_table ;
struct TYPE_8__ {TYPE_1__* disk; scalar_t__ detached; } ;
struct TYPE_7__ {int cmd_q; int rq_list_lock; TYPE_2__* headrp; int read_wait; scalar_t__ closed; TYPE_4__* parentdp; } ;
struct TYPE_6__ {int done; int sg_io_owned; struct TYPE_6__* nextrp; } ;
struct TYPE_5__ {int disk_name; } ;
typedef TYPE_2__ Sg_request ;
typedef TYPE_3__ Sg_fd ;
typedef TYPE_4__ Sg_device ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (int,int ) ;
 int VAR_6 ;
 int FUNC_1 (struct file*,int *,int *) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static unsigned int
FUNC_5(struct file *VAR_7, poll_table * VAR_8)
{
 unsigned int VAR_9 = 0;
 Sg_device *VAR_10;
 Sg_fd *VAR_11;
 Sg_request *VAR_12;
 int VAR_13 = 0;
 unsigned long VAR_14;

 if ((!(VAR_11 = (Sg_fd *) VAR_7->private_data)) || (!(VAR_10 = VAR_11->parentdp))
     || VAR_11->closed)
  return VAR_0;
 FUNC_1(VAR_7, &VAR_11->read_wait, VAR_8);
 FUNC_3(&VAR_11->rq_list_lock, VAR_14);
 for (VAR_12 = VAR_11->headrp; VAR_12; VAR_12 = VAR_12->nextrp) {

  if ((0 == VAR_9) && (1 == VAR_12->done) && (!VAR_12->sg_io_owned))
   VAR_9 = VAR_2 | VAR_4;
  ++VAR_13;
 }
 FUNC_4(&VAR_11->rq_list_lock, VAR_14);

 if (VAR_10->detached)
  VAR_9 |= VAR_1;
 else if (!VAR_11->cmd_q) {
  if (0 == VAR_13)
   VAR_9 |= VAR_3 | VAR_5;
 } else if (VAR_13 < VAR_6)
  VAR_9 |= VAR_3 | VAR_5;
 FUNC_0(3, FUNC_2("sg_poll: %s, res=0x%x\n",
       VAR_10->disk->disk_name, (int) VAR_9));
 return VAR_9;
}
