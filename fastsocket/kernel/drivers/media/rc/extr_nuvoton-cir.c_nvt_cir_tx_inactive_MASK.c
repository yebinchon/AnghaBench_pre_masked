
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {scalar_t__ tx_state; int lock; } ;
struct nvt_dev {TYPE_1__ tx; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static bool FUNC_2(struct nvt_dev *VAR_1)
{
 unsigned long VAR_2;
 bool VAR_3;
 u8 VAR_4;

 FUNC_0(&VAR_1->tx.lock, VAR_2);
 VAR_4 = VAR_1->tx.tx_state;
 FUNC_1(&VAR_1->tx.lock, VAR_2);

 VAR_3 = (VAR_4 == VAR_0);

 return VAR_3;
}
