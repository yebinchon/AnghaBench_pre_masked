
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd_usb_rx {unsigned int urbs_count; int lock; struct urb** urbs; } ;
struct zd_usb {struct zd_usb_rx rx; } ;
struct urb {int dummy; } ;


 int FUNC_0 (struct urb*) ;
 int FUNC_1 (struct urb**) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct urb*) ;

__attribute__((used)) static void FUNC_5(struct zd_usb *VAR_0)
{
 int VAR_1;
 unsigned long VAR_2;
 struct urb **VAR_3;
 unsigned int VAR_4;
 struct zd_usb_rx *VAR_5 = &VAR_0->rx;

 FUNC_2(&VAR_5->lock, VAR_2);
 VAR_3 = VAR_5->urbs;
 VAR_4 = VAR_5->urbs_count;
 FUNC_3(&VAR_5->lock, VAR_2);
 if (!VAR_3)
  return;

 for (VAR_1 = 0; VAR_1 < VAR_4; VAR_1++) {
  FUNC_4(VAR_3[VAR_1]);
  FUNC_0(VAR_3[VAR_1]);
 }
 FUNC_1(VAR_3);

 FUNC_2(&VAR_5->lock, VAR_2);
 VAR_5->urbs = ((void*)0);
 VAR_5->urbs_count = 0;
 FUNC_3(&VAR_5->lock, VAR_2);
}
