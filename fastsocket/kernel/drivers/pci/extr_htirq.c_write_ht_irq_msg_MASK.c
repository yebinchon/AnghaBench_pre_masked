
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ht_irq_msg {int address_hi; int address_lo; } ;
struct ht_irq_cfg {struct ht_irq_msg msg; int dev; int (* update ) (int ,unsigned int,struct ht_irq_msg*) ;scalar_t__ pos; scalar_t__ idx; } ;


 struct ht_irq_cfg* FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (int ,scalar_t__,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int ,unsigned int,struct ht_irq_msg*) ;

void FUNC_6(unsigned int VAR_1, struct ht_irq_msg *VAR_2)
{
 struct ht_irq_cfg *VAR_3 = FUNC_0(VAR_1);
 unsigned long VAR_4;
 FUNC_3(&VAR_0, VAR_4);
 if (VAR_3->msg.address_lo != VAR_2->address_lo) {
  FUNC_1(VAR_3->dev, VAR_3->pos + 2, VAR_3->idx);
  FUNC_2(VAR_3->dev, VAR_3->pos + 4, VAR_2->address_lo);
 }
 if (VAR_3->msg.address_hi != VAR_2->address_hi) {
  FUNC_1(VAR_3->dev, VAR_3->pos + 2, VAR_3->idx + 1);
  FUNC_2(VAR_3->dev, VAR_3->pos + 4, VAR_2->address_hi);
 }
 if (VAR_3->update)
  VAR_3->update(VAR_3->dev, VAR_1, VAR_2);
 FUNC_4(&VAR_0, VAR_4);
 VAR_3->msg = *VAR_2;
}
