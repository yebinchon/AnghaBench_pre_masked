
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pxa_i2c {int msg_ptr; scalar_t__ msg_idx; int msg_num; int* icrlog; int irqlogidx; TYPE_1__* msg; } ;
struct TYPE_2__ {int len; int* buf; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct pxa_i2c*) ;
 int FUNC_1 (struct pxa_i2c*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct pxa_i2c*,int) ;
 int FUNC_4 (struct pxa_i2c*) ;
 int FUNC_5 (struct pxa_i2c*,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct pxa_i2c*) ;
 int FUNC_8 (int,int ) ;

__attribute__((used)) static void FUNC_9(struct pxa_i2c *VAR_13, u32 VAR_14)
{
 u32 VAR_15 = FUNC_6(FUNC_0(VAR_13)) & ~(VAR_5|VAR_6|VAR_3|VAR_7);

 again:



 if (VAR_14 & VAR_9) {




  FUNC_5(VAR_13, "ALD set");







  return;
 }

 if (VAR_14 & VAR_10) {
  int VAR_16 = VAR_0;






  if (VAR_14 & VAR_8) {
   if (VAR_13->msg_ptr == 0 && VAR_13->msg_idx == 0)
    VAR_16 = VAR_2;
   else
    VAR_16 = VAR_12;
  }
  FUNC_3(VAR_13, VAR_16);
 } else if (VAR_14 & VAR_11) {




  if (VAR_13->msg_ptr == VAR_13->msg->len - 1 &&
      VAR_13->msg_idx == VAR_13->msg_num - 1)
   VAR_15 |= VAR_6 | VAR_3;

  VAR_15 |= VAR_4 | VAR_7;
 } else if (VAR_13->msg_ptr < VAR_13->msg->len) {



  FUNC_8(VAR_13->msg->buf[VAR_13->msg_ptr++], FUNC_1(VAR_13));

  VAR_15 |= VAR_4 | VAR_7;





  if (VAR_13->msg_ptr == VAR_13->msg->len &&
      VAR_13->msg_idx == VAR_13->msg_num - 1)
   VAR_15 |= VAR_6;
 } else if (VAR_13->msg_idx < VAR_13->msg_num - 1) {



  VAR_13->msg_ptr = 0;
  VAR_13->msg_idx ++;
  VAR_13->msg++;






  if (VAR_13->msg->flags & VAR_1)
   goto again;




  FUNC_8(FUNC_2(VAR_13->msg), FUNC_1(VAR_13));




  VAR_15 &= ~VAR_4;
  VAR_15 |= VAR_5 | VAR_7;
 } else {
  if (VAR_13->msg->len == 0) {





   FUNC_4(VAR_13);
  }
  FUNC_3(VAR_13, 0);
 }

 VAR_13->icrlog[VAR_13->irqlogidx-1] = VAR_15;

 FUNC_8(VAR_15, FUNC_0(VAR_13));
 FUNC_7(VAR_13);
}
