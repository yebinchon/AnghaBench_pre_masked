
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct cm_work {TYPE_4__* mad_recv_wc; int port; } ;
struct TYPE_7__ {int remote_id; int local_id; } ;
struct cm_timewait_info {TYPE_2__ work; } ;
struct cm_req_msg {int private_data; int service_id; } ;
struct TYPE_8__ {int state; int device; } ;
struct cm_id_private {int work_count; TYPE_3__ id; int refcount; int timewait_info; } ;
struct TYPE_10__ {int lock; } ;
struct TYPE_6__ {scalar_t__ mad; } ;
struct TYPE_9__ {TYPE_1__ recv_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 TYPE_5__ VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct cm_id_private*) ;
 int FUNC_3 (struct cm_work*,struct cm_id_private*) ;
 struct cm_id_private* FUNC_4 (int ,int ,int ) ;
 struct cm_id_private* FUNC_5 (int ,int ) ;
 struct cm_timewait_info* FUNC_6 (int ) ;
 struct cm_timewait_info* FUNC_7 (int ) ;
 int FUNC_8 (int ,TYPE_4__*,int ,int ,int *,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static struct cm_id_private * FUNC_11(struct cm_work *VAR_5,
        struct cm_id_private *VAR_6)
{
 struct cm_id_private *VAR_7, *VAR_8;
 struct cm_timewait_info *VAR_9;
 struct cm_req_msg *VAR_10;

 VAR_10 = (struct cm_req_msg *)VAR_5->mad_recv_wc->recv_buf.mad;


 FUNC_9(&VAR_4.lock);
 VAR_9 = FUNC_6(VAR_6->timewait_info);
 if (VAR_9) {
  VAR_8 = FUNC_5(VAR_9->work.local_id,
        VAR_9->work.remote_id);
  FUNC_10(&VAR_4.lock);
  if (VAR_8) {
   FUNC_3(VAR_5, VAR_8);
   FUNC_2(VAR_8);
  }
  return ((void*)0);
 }


 VAR_9 = FUNC_7(VAR_6->timewait_info);
 if (VAR_9) {
  FUNC_1(VAR_6->timewait_info);
  FUNC_10(&VAR_4.lock);
  FUNC_8(VAR_5->port, VAR_5->mad_recv_wc,
        VAR_2, VAR_0,
        ((void*)0), 0);
  return ((void*)0);
 }


 VAR_7 = FUNC_4(VAR_6->id.device,
        VAR_10->service_id,
        VAR_10->private_data);
 if (!VAR_7) {
  FUNC_1(VAR_6->timewait_info);
  FUNC_10(&VAR_4.lock);
  FUNC_8(VAR_5->port, VAR_5->mad_recv_wc,
        VAR_1, VAR_0,
        ((void*)0), 0);
  goto out;
 }
 FUNC_0(&VAR_7->refcount);
 FUNC_0(&VAR_6->refcount);
 VAR_6->id.state = VAR_3;
 FUNC_0(&VAR_6->work_count);
 FUNC_10(&VAR_4.lock);
out:
 return VAR_7;
}
