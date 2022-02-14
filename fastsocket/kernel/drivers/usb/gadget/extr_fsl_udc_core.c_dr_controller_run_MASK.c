
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct fsl_udc {scalar_t__ stopped; } ;
struct TYPE_2__ {int usbcmd; int usbmode; int usbintr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;

__attribute__((used)) static void FUNC_2(struct fsl_udc *VAR_9)
{
 u32 VAR_10;


 VAR_10 = VAR_3 | VAR_2
  | VAR_4 | VAR_5
  | VAR_1 | VAR_6;

 FUNC_1(VAR_10, &VAR_8->usbintr);


 VAR_9->stopped = 0;


 VAR_10 = FUNC_0(&VAR_8->usbmode);
 VAR_10 |= VAR_7;
 FUNC_1(VAR_10, &VAR_8->usbmode);


 VAR_10 = FUNC_0(&VAR_8->usbcmd);
 VAR_10 |= VAR_0;
 FUNC_1(VAR_10, &VAR_8->usbcmd);

 return;
}
