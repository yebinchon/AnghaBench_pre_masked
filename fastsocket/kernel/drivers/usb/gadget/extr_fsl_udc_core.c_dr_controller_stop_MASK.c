
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsl_udc {int stopped; } ;
struct TYPE_2__ {int usbcmd; int usbintr; } ;


 unsigned int VAR_0 ;
 TYPE_1__* VAR_1 ;
 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (unsigned int,int *) ;

__attribute__((used)) static void FUNC_2(struct fsl_udc *VAR_2)
{
 unsigned int VAR_3;


 FUNC_1(0, &VAR_1->usbintr);


 VAR_2->stopped = 1;





 VAR_3 = FUNC_0(&VAR_1->usbcmd);
 VAR_3 &= ~VAR_0;
 FUNC_1(VAR_3, &VAR_1->usbcmd);

 return;
}
