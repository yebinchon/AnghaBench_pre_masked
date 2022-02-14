
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int speed; } ;
struct ci13xxx {int lock; TYPE_2__ gadget; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int* buf; int cnt; int idx; } ;
struct TYPE_6__ {int none; int sli; int ui; int uei; int pci; int uri; TYPE_1__ hndl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct ci13xxx* VAR_10 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct ci13xxx*) ;
 TYPE_3__ VAR_11 ;
 int FUNC_4 (struct ci13xxx*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;

__attribute__((used)) static irqreturn_t FUNC_8(void)
{
 struct ci13xxx *VAR_12 = VAR_10;
 irqreturn_t VAR_13;
 u32 VAR_14;

 FUNC_7();

 if (VAR_12 == ((void*)0)) {
  FUNC_0("ENODEV");
  return VAR_0;
 }

 FUNC_5(VAR_12->lock);
 VAR_14 = FUNC_2();
 if (VAR_14) {
  VAR_11.hndl.buf[VAR_11.hndl.idx++] = VAR_14;
  VAR_11.hndl.idx &= VAR_2;
  VAR_11.hndl.cnt++;


  if (VAR_9 & VAR_14) {
   VAR_11.uri++;
   FUNC_3(VAR_12);
  }
  if (VAR_5 & VAR_14) {
   VAR_11.pci++;
   VAR_12->gadget.speed = FUNC_1() ?
    VAR_4 : VAR_3;
  }
  if (VAR_7 & VAR_14)
   VAR_11.uei++;
  if (VAR_8 & VAR_14) {
   VAR_11.ui++;
   FUNC_4(VAR_12);
  }
  if (VAR_6 & VAR_14)
   VAR_11.sli++;
  VAR_13 = VAR_0;
 } else {
  VAR_11.none++;
  VAR_13 = VAR_1;
 }
 FUNC_6(VAR_12->lock);

 return VAR_13;
}
