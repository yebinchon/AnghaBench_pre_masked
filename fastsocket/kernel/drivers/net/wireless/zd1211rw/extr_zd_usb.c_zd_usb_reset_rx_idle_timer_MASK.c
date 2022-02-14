
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd_usb_rx {int idle_work; } ;
struct zd_usb {struct zd_usb_rx rx; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,int ) ;
 int VAR_1 ;

void FUNC_2(struct zd_usb *VAR_2)
{
 struct zd_usb_rx *VAR_3 = &VAR_2->rx;

 FUNC_0(&VAR_3->idle_work);
 FUNC_1(VAR_1, &VAR_3->idle_work, VAR_0);
}
