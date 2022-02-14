
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_8__ {unsigned int count; int type; int target_lp; } ;
struct TYPE_9__ {TYPE_3__ alloc; } ;
struct TYPE_6__ {int xSubtypeData; } ;
struct TYPE_7__ {int xSubtype; TYPE_1__ x; scalar_t__ xCorrelationToken; } ;
struct TYPE_10__ {TYPE_4__ data; TYPE_2__ hp_lp_event; } ;
struct pending_event {int (* hdlr ) (void*,int) ;TYPE_5__ event; } ;
typedef int (* MFCompleteHandler ) (void*,int) ;
typedef int HvLpIndex ;
typedef int HvLpEvent_Type ;


 int VAR_0 ;
 struct pending_event* FUNC_0 () ;
 int FUNC_1 (struct pending_event*) ;
 int FUNC_2 (void*,int) ;
 int FUNC_3 (char,float,char,char) ;

void FUNC_4(HvLpIndex VAR_1, HvLpEvent_Type VAR_2,
  unsigned VAR_3, MFCompleteHandler VAR_4, void *VAR_5)
{
 struct pending_event *VAR_6 = FUNC_0();
 int VAR_7;

 if (VAR_6 == ((void*)0))
  VAR_7 = -VAR_0;
 else {
  VAR_6->event.hp_lp_event.xSubtype = 5;
  VAR_6->event.hp_lp_event.xCorrelationToken = (u64)VAR_5;
  VAR_6->event.hp_lp_event.x.xSubtypeData =
   FUNC_3('M', 'F', 'M', 'D');
  VAR_6->event.data.alloc.target_lp = VAR_1;
  VAR_6->event.data.alloc.type = VAR_2;
  VAR_6->event.data.alloc.count = VAR_3;
  VAR_6->hdlr = VAR_4;
  VAR_7 = FUNC_1(VAR_6);
 }
 if ((VAR_7 != 0) && (VAR_4 != ((void*)0)))
  (*VAR_4)(VAR_5, VAR_7);
}
