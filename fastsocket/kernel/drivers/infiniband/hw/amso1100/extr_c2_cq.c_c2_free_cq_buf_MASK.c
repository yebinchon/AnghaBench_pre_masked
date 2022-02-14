
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int host; } ;
struct c2_mq {int q_size; int msg_size; TYPE_2__ msg_pool; } ;
struct c2_dev {TYPE_1__* pcidev; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int *,int,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct c2_mq*,int ) ;

__attribute__((used)) static void FUNC_2(struct c2_dev *VAR_1, struct c2_mq *VAR_2)
{
 FUNC_0(&VAR_1->pcidev->dev, VAR_2->q_size * VAR_2->msg_size,
     VAR_2->msg_pool.host, FUNC_1(VAR_2, VAR_0));
}
