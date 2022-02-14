
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnp_dev {int dummy; } ;
struct ene_device {int rdev; int hw_io; int irq; int hw_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct ene_device*) ;
 int FUNC_1 (struct ene_device*) ;
 int FUNC_2 (int ,struct ene_device*) ;
 int FUNC_3 (struct ene_device*) ;
 struct ene_device* FUNC_4 (struct pnp_dev*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_9(struct pnp_dev *VAR_1)
{
 struct ene_device *VAR_2 = FUNC_4(VAR_1);
 unsigned long VAR_3;

 FUNC_7(&VAR_2->hw_lock, VAR_3);
 FUNC_0(VAR_2);
 FUNC_1(VAR_2);
 FUNC_8(&VAR_2->hw_lock, VAR_3);

 FUNC_2(VAR_2->irq, VAR_2);
 FUNC_6(VAR_2->hw_io, VAR_0);
 FUNC_5(VAR_2->rdev);
 FUNC_3(VAR_2);
}
