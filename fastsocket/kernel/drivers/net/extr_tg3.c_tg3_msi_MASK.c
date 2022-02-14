
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tg3_napi {size_t rx_rcb_ptr; int napi; int int_mbox; int * rx_rcb; int * hw_status; struct tg3* tp; } ;
struct tg3 {int dummy; } ;
typedef int irqreturn_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct tg3*) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_0, void *VAR_1)
{
 struct tg3_napi *VAR_2 = VAR_1;
 struct tg3 *VAR_3 = VAR_2->tp;

 FUNC_3(VAR_2->hw_status);
 if (VAR_2->rx_rcb)
  FUNC_3(&VAR_2->rx_rcb[VAR_2->rx_rcb_ptr]);







 FUNC_5(VAR_2->int_mbox, 0x00000001);
 if (FUNC_1(!FUNC_4(VAR_3)))
  FUNC_2(&VAR_2->napi);

 return FUNC_0(1);
}
