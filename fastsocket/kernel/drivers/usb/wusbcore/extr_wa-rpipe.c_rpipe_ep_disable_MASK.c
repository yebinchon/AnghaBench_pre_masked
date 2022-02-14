
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct wahc {int rpipe_mutex; int usb_dev; } ;
struct TYPE_2__ {int wRPipeIndex; } ;
struct wa_rpipe {TYPE_1__ descr; } ;
struct usb_host_endpoint {struct wa_rpipe* hcpriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct wa_rpipe*) ;
 int FUNC_4 (int ,int ,int ,int,int ,int ,int *,int ,int) ;
 int FUNC_5 (int ,int ) ;

void FUNC_6(struct wahc *VAR_4, struct usb_host_endpoint *VAR_5)
{
 struct wa_rpipe *VAR_6;

 FUNC_1(&VAR_4->rpipe_mutex);
 VAR_6 = VAR_5->hcpriv;
 if (VAR_6 != ((void*)0)) {
  u16 VAR_7 = FUNC_0(VAR_6->descr.wRPipeIndex);

  FUNC_4(
   VAR_4->usb_dev, FUNC_5(VAR_4->usb_dev, 0),
   VAR_2,
   VAR_0 | VAR_3 | VAR_1,
   0, VAR_7, ((void*)0), 0, 1000 );
  FUNC_3(VAR_6);
 }
 FUNC_2(&VAR_4->rpipe_mutex);
}
