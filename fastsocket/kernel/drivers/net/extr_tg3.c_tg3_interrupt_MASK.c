
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tg3_napi {size_t rx_rcb_ptr; int napi; int * rx_rcb; struct tg3_hw_status* hw_status; struct tg3* tp; } ;
struct tg3_hw_status {int status; } ;
struct tg3 {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct tg3*,int ) ;
 int FUNC_5 (struct tg3_napi*) ;
 scalar_t__ FUNC_6 (struct tg3*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__,int) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_6, void *VAR_7)
{
 struct tg3_napi *VAR_8 = VAR_7;
 struct tg3 *VAR_9 = VAR_8->tp;
 struct tg3_hw_status *VAR_10 = VAR_8->hw_status;
 unsigned int VAR_11 = 1;






 if (FUNC_9(!(VAR_10->status & VAR_3))) {
  if (FUNC_4(VAR_9, VAR_0) ||
      (FUNC_7(VAR_4) & VAR_2)) {
   VAR_11 = 0;
   goto out;
  }
 }
 FUNC_8(VAR_1 + VAR_5, 0x00000001);
 if (FUNC_6(VAR_9))
  goto out;
 VAR_10->status &= ~VAR_3;
 if (FUNC_1(FUNC_5(VAR_8))) {
  FUNC_3(&VAR_8->rx_rcb[VAR_8->rx_rcb_ptr]);
  FUNC_2(&VAR_8->napi);
 } else {



  FUNC_8(VAR_1 + VAR_5,
          0x00000000);
 }
out:
 return FUNC_0(VAR_11);
}
