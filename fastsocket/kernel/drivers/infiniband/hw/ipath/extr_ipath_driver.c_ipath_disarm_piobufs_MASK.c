
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipath_devdata {unsigned int ipath_sendctrl; int ipath_sendctrl_lock; TYPE_1__* ipath_kregs; } ;
struct TYPE_2__ {int kr_scratch; int kr_sendctrl; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,unsigned int,unsigned int) ;
 int FUNC_1 (struct ipath_devdata*) ;
 int FUNC_2 (struct ipath_devdata*,int ) ;
 int FUNC_3 (struct ipath_devdata*,int ,unsigned int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

void FUNC_6(struct ipath_devdata *VAR_3, unsigned VAR_4,
     unsigned VAR_5)
{
 unsigned VAR_6, VAR_7 = VAR_4 + VAR_5;
 unsigned long VAR_8;

 FUNC_0(VAR_2, "disarm %u PIObufs first=%u\n", VAR_5, VAR_4);
 for (VAR_6 = VAR_4; VAR_6 < VAR_7; VAR_6++) {
  FUNC_4(&VAR_3->ipath_sendctrl_lock, VAR_8);





  FUNC_3(VAR_3, VAR_3->ipath_kregs->kr_sendctrl,
   VAR_3->ipath_sendctrl | VAR_0 |
   (VAR_6 << VAR_1));

  FUNC_2(VAR_3, VAR_3->ipath_kregs->kr_scratch);
  FUNC_5(&VAR_3->ipath_sendctrl_lock, VAR_8);
 }

 FUNC_1(VAR_3);
}
