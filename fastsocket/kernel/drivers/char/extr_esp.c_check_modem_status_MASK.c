
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int flags; int tty; int open_wait; int delta_msr_wait; } ;
struct TYPE_3__ {int cts; int dcd; int dsr; int rng; } ;
struct esp_struct {TYPE_2__ port; int line; TYPE_1__ icount; } ;


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
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct esp_struct*,int ) ;
 int FUNC_2 (struct esp_struct*,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct esp_struct *VAR_10)
{
 int VAR_11;

 FUNC_2(VAR_10, VAR_2, VAR_1);
 VAR_11 = FUNC_1(VAR_10, VAR_3);

 if (VAR_11 & VAR_4) {

  if (VAR_11 & VAR_9)
   VAR_10->icount.rng++;
  if (VAR_11 & VAR_8)
   VAR_10->icount.dsr++;
  if (VAR_11 & VAR_7)
   VAR_10->icount.dcd++;
  if (VAR_11 & VAR_6)
   VAR_10->icount.cts++;
  FUNC_4(&VAR_10->port.delta_msr_wait);
 }

 if ((VAR_10->port.flags & VAR_0) && (VAR_11 & VAR_7)) {




  if (VAR_11 & VAR_5)
   FUNC_4(&VAR_10->port.open_wait);
  else {



   FUNC_3(VAR_10->port.tty);
  }
 }
}
