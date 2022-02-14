
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct musb {int lock; void* int_rx; int mregs; void* int_tx; scalar_t__ int_usb; } ;
typedef scalar_t__ irqreturn_t ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct musb*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 void* FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,scalar_t__) ;
 int FUNC_5 (int ,int ,void*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_5, void *VAR_6)
{
 unsigned long VAR_7;
 irqreturn_t VAR_8 = VAR_1;
 struct musb *VAR_9 = VAR_6;

 FUNC_6(&VAR_9->lock, VAR_7);

 VAR_9->int_usb = FUNC_2(VAR_9->mregs, VAR_4);
 VAR_9->int_tx = FUNC_3(VAR_9->mregs, VAR_3);
 VAR_9->int_rx = FUNC_3(VAR_9->mregs, VAR_2);

 if (VAR_9->int_usb || VAR_9->int_tx || VAR_9->int_rx) {
  FUNC_4(VAR_9->mregs, VAR_4, VAR_9->int_usb);
  FUNC_5(VAR_9->mregs, VAR_3, VAR_9->int_tx);
  FUNC_5(VAR_9->mregs, VAR_2, VAR_9->int_rx);
  VAR_8 = FUNC_1(VAR_9);
 }

 FUNC_7(&VAR_9->lock, VAR_7);




 if (VAR_8 != VAR_0)
  FUNC_0(5, "spurious?\n");

 return VAR_0;
}
