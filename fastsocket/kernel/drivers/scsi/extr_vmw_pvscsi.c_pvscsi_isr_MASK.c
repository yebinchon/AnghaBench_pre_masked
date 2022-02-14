
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pvscsi_adapter {int hw_lock; int work; int workqueue; scalar_t__ use_msg; scalar_t__ use_msix; scalar_t__ use_msi; } ;
typedef int irqreturn_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct pvscsi_adapter*) ;
 int FUNC_2 (struct pvscsi_adapter*) ;
 int FUNC_3 (struct pvscsi_adapter*) ;
 int FUNC_4 (void*,int) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_1, void *VAR_2)
{
 struct pvscsi_adapter *VAR_3 = VAR_2;
 int VAR_4;

 if (VAR_3->use_msi || VAR_3->use_msix)
  VAR_4 = 1;
 else {
  u32 VAR_5 = FUNC_3(VAR_3);
  VAR_4 = (VAR_5 & VAR_0) != 0;
  if (VAR_4)
   FUNC_4(VAR_2, VAR_5);
 }

 if (VAR_4) {
  unsigned long VAR_6;

  FUNC_6(&VAR_3->hw_lock, VAR_6);

  FUNC_2(VAR_3);
  if (VAR_3->use_msg && FUNC_1(VAR_3))
   FUNC_5(VAR_3->workqueue, &VAR_3->work);

  FUNC_7(&VAR_3->hw_lock, VAR_6);
 }

 return FUNC_0(VAR_4);
}
