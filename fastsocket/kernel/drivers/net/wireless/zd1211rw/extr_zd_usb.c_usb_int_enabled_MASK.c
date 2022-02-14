
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd_usb_interrupt {int lock; struct urb* urb; } ;
struct zd_usb {struct zd_usb_interrupt intr; } ;
struct urb {int dummy; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static inline int FUNC_2(struct zd_usb *VAR_0)
{
 unsigned long VAR_1;
 struct zd_usb_interrupt *VAR_2 = &VAR_0->intr;
 struct urb *VAR_3;

 FUNC_0(&VAR_2->lock, VAR_1);
 VAR_3 = VAR_2->urb;
 FUNC_1(&VAR_2->lock, VAR_1);
 return VAR_3 != ((void*)0);
}
