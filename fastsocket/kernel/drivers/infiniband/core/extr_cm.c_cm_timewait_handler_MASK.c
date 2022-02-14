
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct cm_work {int list; } ;
struct TYPE_4__ {int remote_id; int local_id; } ;
struct cm_timewait_info {scalar_t__ remote_qpn; TYPE_1__ work; int list; } ;
struct TYPE_5__ {scalar_t__ state; } ;
struct cm_id_private {scalar_t__ remote_qpn; int lock; int work_list; int work_count; TYPE_2__ id; } ;
struct TYPE_6__ {int lock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 TYPE_3__ VAR_3 ;
 struct cm_id_private* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct cm_id_private*) ;
 int FUNC_3 (struct cm_id_private*,struct cm_work*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct cm_work *VAR_4)
{
 struct cm_timewait_info *VAR_5;
 struct cm_id_private *VAR_6;
 int VAR_7;

 VAR_5 = (struct cm_timewait_info *)VAR_4;
 FUNC_6(&VAR_3.lock);
 FUNC_5(&VAR_5->list);
 FUNC_7(&VAR_3.lock);

 VAR_6 = FUNC_1(VAR_5->work.local_id,
       VAR_5->work.remote_id);
 if (!VAR_6)
  return -VAR_0;

 FUNC_6(&VAR_6->lock);
 if (VAR_6->id.state != VAR_2 ||
     VAR_6->remote_qpn != VAR_5->remote_qpn) {
  FUNC_7(&VAR_6->lock);
  goto out;
 }
 VAR_6->id.state = VAR_1;
 VAR_7 = FUNC_0(&VAR_6->work_count);
 if (!VAR_7)
  FUNC_4(&VAR_4->list, &VAR_6->work_list);
 FUNC_7(&VAR_6->lock);

 if (VAR_7)
  FUNC_3(VAR_6, VAR_4);
 else
  FUNC_2(VAR_6);
 return 0;
out:
 FUNC_2(VAR_6);
 return -VAR_0;
}
