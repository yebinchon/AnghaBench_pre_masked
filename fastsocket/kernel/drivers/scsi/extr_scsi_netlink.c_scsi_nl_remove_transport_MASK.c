
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_2__ {scalar_t__ refcnt; int flags; int * event_handler; int * msg_handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 TYPE_1__* VAR_6 ;

void
FUNC_4(u8 VAR_7)
{
 unsigned long VAR_8;

 FUNC_2(&VAR_4, VAR_8);
 if (VAR_5 & VAR_3) {
  FUNC_3(&VAR_4, VAR_8);
  FUNC_0(1);
  FUNC_2(&VAR_4, VAR_8);
 }

 if (VAR_7 < VAR_2) {
  VAR_6[VAR_7].flags |= VAR_0;

  while (VAR_6[VAR_7].refcnt != 0) {
   FUNC_3(&VAR_4, VAR_8);
   FUNC_1(VAR_1/4);
   FUNC_2(&VAR_4, VAR_8);
  }
  VAR_6[VAR_7].msg_handler = ((void*)0);
  VAR_6[VAR_7].event_handler = ((void*)0);
  VAR_6[VAR_7].flags = 0;
 }

 FUNC_3(&VAR_4, VAR_8);

 return;
}
