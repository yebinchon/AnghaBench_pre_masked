
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct ocrdma_eqe {int id_valid; } ;
struct TYPE_4__ {int id; } ;
struct ocrdma_eq {TYPE_2__ q; struct ocrdma_dev* dev; } ;
struct TYPE_3__ {scalar_t__ intr_mode; } ;
struct ocrdma_dev {TYPE_1__ nic_info; } ;
typedef int irqreturn_t ;
typedef int eqe ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ocrdma_dev*,int) ;
 int FUNC_1 (struct ocrdma_eq*) ;
 struct ocrdma_eqe* FUNC_2 (struct ocrdma_eq*) ;
 int FUNC_3 (struct ocrdma_eqe*,int) ;
 int FUNC_4 (struct ocrdma_dev*,int ,int,int,int) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_5, void *VAR_6)
{
 struct ocrdma_eq *VAR_7 = VAR_6;
 struct ocrdma_dev *VAR_8 = VAR_7->dev;
 struct ocrdma_eqe VAR_9;
 struct ocrdma_eqe *VAR_10;
 u16 VAR_11 = 0;
 u16 VAR_12;
 while (1) {
  VAR_10 = FUNC_2(VAR_7);
  VAR_9 = *VAR_10;
  FUNC_3(&VAR_9, sizeof(VAR_9));
  if ((VAR_9.id_valid & VAR_4) == 0)
   break;
  VAR_11 += 1;
  VAR_10->id_valid = 0;

  if ((VAR_9.id_valid & VAR_2) == 0) {
   VAR_12 = VAR_9.id_valid >> VAR_3;
   FUNC_0(VAR_8, VAR_12);
  }
  FUNC_1(VAR_7);
 }
 FUNC_4(VAR_8, VAR_7->q.id, 1, 1, VAR_11);

 if (VAR_8->nic_info.intr_mode == VAR_0)
  FUNC_4(VAR_8, VAR_7->q.id, 1, 1, 0);
 return VAR_1;
}
