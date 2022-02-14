
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd_usb {int submitted_cmds; struct urb* urb_async_waiting; } ;
struct urb {int transfer_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct urb*,int *) ;
 int FUNC_2 (struct urb*) ;
 int FUNC_3 (struct urb*,int ) ;
 int FUNC_4 (struct urb*) ;
 int FUNC_5 (struct zd_usb*) ;

__attribute__((used)) static int FUNC_6(struct zd_usb *VAR_2, bool VAR_3)
{
 int VAR_4 = 0;
 struct urb *VAR_5 = VAR_2->urb_async_waiting;

 if (!VAR_5)
  return 0;

 VAR_2->urb_async_waiting = ((void*)0);

 if (!VAR_3)
  VAR_5->transfer_flags |= VAR_1;

 FUNC_1(VAR_5, &VAR_2->submitted_cmds);
 VAR_4 = FUNC_3(VAR_5, VAR_0);
 if (VAR_4) {
  FUNC_4(VAR_5);
  FUNC_0(FUNC_5(VAR_2),
   "error in usb_submit_urb(). Error number %d\n", VAR_4);
  goto error;
 }


error:
 FUNC_2(VAR_5);
 return VAR_4;
}
