
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int wr ;
typedef union c2wr {int dummy; } c2wr ;
struct TYPE_5__ {scalar_t__ context; } ;
struct c2wr_init_req {void* q2_host_msg_pool; void* q2_host_shared; void* q1_host_msg_pool; void* q1_host_shared; void* q0_host_shared; void* hint_count; TYPE_1__ hdr; } ;
struct TYPE_8__ {int host_dma; int shared_dma; } ;
struct TYPE_7__ {int host_dma; int shared_dma; } ;
struct TYPE_6__ {int shared_dma; } ;
struct c2_dev {TYPE_4__ aeq; TYPE_3__ rep_vq; TYPE_2__ req_vq; int hint_count_dma; } ;


 int VAR_0 ;
 int FUNC_0 (struct c2wr_init_req*,int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct c2wr_init_req*,int ,int) ;
 int FUNC_3 (struct c2_dev*,union c2wr*) ;

__attribute__((used)) static int FUNC_4(struct c2_dev *VAR_1)
{
 struct c2wr_init_req VAR_2;
 int VAR_3;

 FUNC_2(&VAR_2, 0, sizeof(VAR_2));
 FUNC_0(&VAR_2, VAR_0);
 VAR_2.hdr.context = 0;
 VAR_2.hint_count = FUNC_1(VAR_1->hint_count_dma);
 VAR_2.q0_host_shared = FUNC_1(VAR_1->req_vq.shared_dma);
 VAR_2.q1_host_shared = FUNC_1(VAR_1->rep_vq.shared_dma);
 VAR_2.q1_host_msg_pool = FUNC_1(VAR_1->rep_vq.host_dma);
 VAR_2.q2_host_shared = FUNC_1(VAR_1->aeq.shared_dma);
 VAR_2.q2_host_msg_pool = FUNC_1(VAR_1->aeq.host_dma);


 VAR_3 = FUNC_3(VAR_1, (union c2wr *) & VAR_2);

 return VAR_3;
}
