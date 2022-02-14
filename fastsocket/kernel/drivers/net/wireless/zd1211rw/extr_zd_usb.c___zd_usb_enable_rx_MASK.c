
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd_usb_rx {int urbs_count; int lock; struct urb** urbs; } ;
struct zd_usb {struct zd_usb_rx rx; } ;
struct urb {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 struct urb* FUNC_1 (struct zd_usb*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct urb*) ;
 int FUNC_4 () ;
 struct urb** FUNC_5 (int,int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct urb*) ;
 int FUNC_9 (struct urb*,int ) ;
 int FUNC_10 (struct zd_usb*) ;

__attribute__((used)) static int FUNC_11(struct zd_usb *VAR_3)
{
 int VAR_4, VAR_5;
 struct zd_usb_rx *VAR_6 = &VAR_3->rx;
 struct urb **VAR_7;

 FUNC_2(FUNC_10(VAR_3), "\n");

 VAR_5 = -VAR_0;
 VAR_7 = FUNC_5(VAR_2, sizeof(struct urb *), VAR_1);
 if (!VAR_7)
  goto error;
 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_7[VAR_4] = FUNC_1(VAR_3);
  if (!VAR_7[VAR_4])
   goto error;
 }

 FUNC_0(!FUNC_4());
 FUNC_6(&VAR_6->lock);
 if (VAR_6->urbs) {
  FUNC_7(&VAR_6->lock);
  VAR_5 = 0;
  goto error;
 }
 VAR_6->urbs = VAR_7;
 VAR_6->urbs_count = VAR_2;
 FUNC_7(&VAR_6->lock);

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_5 = FUNC_9(VAR_7[VAR_4], VAR_1);
  if (VAR_5)
   goto error_submit;
 }

 return 0;
error_submit:
 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  FUNC_8(VAR_7[VAR_4]);
 }
 FUNC_6(&VAR_6->lock);
 VAR_6->urbs = ((void*)0);
 VAR_6->urbs_count = 0;
 FUNC_7(&VAR_6->lock);
error:
 if (VAR_7) {
  for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
   FUNC_3(VAR_7[VAR_4]);
 }
 return VAR_5;
}
