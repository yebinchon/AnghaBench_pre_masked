
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int irq_name; } ;
struct TYPE_7__ {int num_vectors; int start_vector; } ;
struct TYPE_8__ {scalar_t__ intr_mode; TYPE_1__ msix; } ;
struct ocrdma_dev {int id; TYPE_3__ meq; TYPE_2__ nic_info; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ocrdma_dev*,TYPE_3__*) ;
 int FUNC_1 (struct ocrdma_dev*,TYPE_3__*,int ) ;
 int FUNC_2 (struct ocrdma_dev*,TYPE_3__*) ;
 int VAR_4 ;
 int FUNC_3 (int,int ,unsigned long,int ,TYPE_3__*) ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static int FUNC_5(struct ocrdma_dev *VAR_5)
{
 int VAR_6;
 int VAR_7;
 unsigned long VAR_8 = 0;
 int VAR_9 = 0;

 if (VAR_5->nic_info.intr_mode == VAR_0)
  VAR_8 = VAR_2;
 else {
  VAR_9 = VAR_5->nic_info.msix.num_vectors -
    VAR_5->nic_info.msix.start_vector;



  if (VAR_9 < 2)
   return -VAR_1;
 }

 VAR_6 = FUNC_1(VAR_5, &VAR_5->meq, VAR_3);
 if (VAR_6)
  return VAR_6;
 FUNC_4(VAR_5->meq.irq_name, "ocrdma_mq%d", VAR_5->id);
 VAR_7 = FUNC_2(VAR_5, &VAR_5->meq);
 VAR_6 = FUNC_3(VAR_7, VAR_4, VAR_8, VAR_5->meq.irq_name,
        &VAR_5->meq);
 if (VAR_6)
  FUNC_0(VAR_5, &VAR_5->meq);
 return VAR_6;
}
