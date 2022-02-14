
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tg3_napi {size_t rx_rcb_ptr; int napi; int * rx_rcb; int * hw_status; struct tg3* tp; } ;
struct tg3 {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct tg3*) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_1, void *VAR_2)
{
 struct tg3_napi *VAR_3 = VAR_2;
 struct tg3 *VAR_4 = VAR_3->tp;

 FUNC_2(VAR_3->hw_status);
 if (VAR_3->rx_rcb)
  FUNC_2(&VAR_3->rx_rcb[VAR_3->rx_rcb_ptr]);

 if (FUNC_0(!FUNC_3(VAR_4)))
  FUNC_1(&VAR_3->napi);

 return VAR_0;
}
