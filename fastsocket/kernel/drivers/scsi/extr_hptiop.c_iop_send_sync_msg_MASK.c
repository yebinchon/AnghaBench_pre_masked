
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct hptiop_hba {scalar_t__ msg_done; TYPE_1__* host; TYPE_2__* ops; } ;
struct TYPE_4__ {int (* iop_intr ) (struct hptiop_hba*) ;int (* post_msg ) (struct hptiop_hba*,scalar_t__) ;} ;
struct TYPE_3__ {int host_lock; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct hptiop_hba*,scalar_t__) ;
 int FUNC_4 (struct hptiop_hba*) ;

__attribute__((used)) static int FUNC_5(struct hptiop_hba *VAR_0, u32 VAR_1, u32 VAR_2)
{
 u32 VAR_3;

 VAR_0->msg_done = 0;
 VAR_0->ops->post_msg(VAR_0, VAR_1);

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  FUNC_1(VAR_0->host->host_lock);
  VAR_0->ops->iop_intr(VAR_0);
  FUNC_2(VAR_0->host->host_lock);
  if (VAR_0->msg_done)
   break;
  FUNC_0(1);
 }

 return VAR_0->msg_done? 0 : -1;
}
