
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd_usb_tx {int watchdog_work; scalar_t__ watchdog_enabled; scalar_t__ submitted_urbs; int submitted; int submitted_skbs; scalar_t__ stopped; int enabled; int lock; } ;
struct zd_usb {struct zd_usb_tx tx; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;

__attribute__((used)) static inline void FUNC_5(struct zd_usb *VAR_1)
{
 struct zd_usb_tx *VAR_2 = &VAR_1->tx;

 FUNC_4(&VAR_2->lock);
 FUNC_1(&VAR_2->enabled, 0);
 VAR_2->stopped = 0;
 FUNC_3(&VAR_2->submitted_skbs);
 FUNC_2(&VAR_2->submitted);
 VAR_2->submitted_urbs = 0;
 VAR_2->watchdog_enabled = 0;
 FUNC_0(&VAR_2->watchdog_work, VAR_0);
}
