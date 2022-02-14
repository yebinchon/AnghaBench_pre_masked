
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct fsl_udc {struct ep_queue_head* ep_qh; } ;
struct ep_queue_head {scalar_t__ setup_buffer; } ;
struct TYPE_2__ {int usbcmd; int endptsetupstat; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int*,int*,int) ;

__attribute__((used)) static void FUNC_3(struct fsl_udc *VAR_3, u8 VAR_4, u8 *VAR_5)
{
 u32 VAR_6;
 struct ep_queue_head *VAR_7;

 VAR_7 = &VAR_3->ep_qh[VAR_4 * 2 + VAR_0];


 VAR_6 = FUNC_0(&VAR_2->endptsetupstat);
 FUNC_1(VAR_6 | (1 << VAR_4), &VAR_2->endptsetupstat);


 do {

  VAR_6 = FUNC_0(&VAR_2->usbcmd);
  FUNC_1(VAR_6 | VAR_1, &VAR_2->usbcmd);


  FUNC_2(VAR_5, (u8 *) VAR_7->setup_buffer, 8);
 } while (!(FUNC_0(&VAR_2->usbcmd) & VAR_1));


 VAR_6 = FUNC_0(&VAR_2->usbcmd);
 FUNC_1(VAR_6 & ~VAR_1, &VAR_2->usbcmd);
}
