
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct ocrdma_eq {int dummy; } ;
struct TYPE_8__ {int num_vectors; int start_vector; } ;
struct TYPE_9__ {scalar_t__ intr_mode; TYPE_1__ msix; } ;
struct ocrdma_dev {int id; int eq_cnt; TYPE_3__* qp_eq_tbl; TYPE_2__ nic_info; } ;
struct TYPE_10__ {int irq_name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ocrdma_dev*,TYPE_3__*) ;
 TYPE_3__* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (struct ocrdma_dev*,TYPE_3__*,int ) ;
 int FUNC_5 (struct ocrdma_dev*) ;
 int FUNC_6 (struct ocrdma_dev*,TYPE_3__*) ;
 int VAR_6 ;
 int FUNC_7 (int,int ,unsigned long,int ,TYPE_3__*) ;
 int FUNC_8 (int ,char*,int,int) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_9(struct ocrdma_dev *VAR_8)
{
 int VAR_9, VAR_10, VAR_11 = 0;
 int VAR_12;
 unsigned long VAR_13 = 0;

 VAR_9 = VAR_8->nic_info.msix.num_vectors -
   VAR_8->nic_info.msix.start_vector;
 if (VAR_8->nic_info.intr_mode == VAR_0) {
  VAR_9 = 1;
  VAR_13 = VAR_4;
 } else
  VAR_9 = FUNC_2(VAR_7, VAR_9, FUNC_3());
 VAR_8->qp_eq_tbl = FUNC_1(sizeof(struct ocrdma_eq) * VAR_9, VAR_3);
 if (!VAR_8->qp_eq_tbl)
  return -VAR_2;

 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
  VAR_11 = FUNC_4(VAR_8, &VAR_8->qp_eq_tbl[VAR_10],
       VAR_5);
  if (VAR_11) {
   VAR_11 = -VAR_1;
   break;
  }
  FUNC_8(VAR_8->qp_eq_tbl[VAR_10].irq_name, "ocrdma_qp%d-%d",
   VAR_8->id, VAR_10);
  VAR_12 = FUNC_6(VAR_8, &VAR_8->qp_eq_tbl[VAR_10]);
  VAR_11 = FUNC_7(VAR_12, VAR_6, VAR_13,
         VAR_8->qp_eq_tbl[VAR_10].irq_name,
         &VAR_8->qp_eq_tbl[VAR_10]);
  if (VAR_11) {
   FUNC_0(VAR_8, &VAR_8->qp_eq_tbl[VAR_10]);
   VAR_11 = -VAR_1;
   break;
  }
  VAR_8->eq_cnt += 1;
 }

 if (VAR_8->eq_cnt >= 1)
  return 0;
 if (VAR_11)
  FUNC_5(VAR_8);
 return VAR_11;
}
