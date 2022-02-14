
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tg3_napi {scalar_t__ last_irq_tag; size_t rx_rcb_ptr; int napi; int * rx_rcb; struct tg3_hw_status* hw_status; struct tg3* tp; } ;
struct tg3_hw_status {scalar_t__ status_tag; } ;
struct tg3 {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct tg3*,int ) ;
 scalar_t__ FUNC_4 (struct tg3*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__,int) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_5, void *VAR_6)
{
 struct tg3_napi *VAR_7 = VAR_6;
 struct tg3 *VAR_8 = VAR_7->tp;
 struct tg3_hw_status *VAR_9 = VAR_7->hw_status;
 unsigned int VAR_10 = 1;






 if (FUNC_7(VAR_9->status_tag == VAR_7->last_irq_tag)) {
  if (FUNC_3(VAR_8, VAR_0) ||
      (FUNC_5(VAR_3) & VAR_2)) {
   VAR_10 = 0;
   goto out;
  }
 }
 FUNC_6(VAR_1 + VAR_4, 0x00000001);







 VAR_7->last_irq_tag = VAR_9->status_tag;

 if (FUNC_4(VAR_8))
  goto out;

 FUNC_2(&VAR_7->rx_rcb[VAR_7->rx_rcb_ptr]);

 FUNC_1(&VAR_7->napi);

out:
 return FUNC_0(VAR_10);
}
