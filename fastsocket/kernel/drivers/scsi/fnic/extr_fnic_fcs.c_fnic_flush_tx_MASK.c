
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct fnic {int tx_queue; } ;
struct fc_frame {int dummy; } ;


 int FUNC_0 (struct fnic*,struct fc_frame*) ;
 struct sk_buff* FUNC_1 (int *) ;

void FUNC_2(struct fnic *VAR_0)
{
 struct sk_buff *VAR_1;
 struct fc_frame *VAR_2;

 while ((VAR_1 = FUNC_1(&VAR_0->tx_queue))) {
  VAR_2 = (struct fc_frame *)VAR_1;
  FUNC_0(VAR_0, VAR_2);
 }
}
