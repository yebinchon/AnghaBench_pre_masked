
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int flags; } ;
struct TYPE_7__ {scalar_t__ track; } ;
struct TYPE_6__ {int (* redo ) () ;int (* done ) (int ) ;} ;
struct TYPE_5__ {int flags; scalar_t__ track; } ;


 TYPE_4__* VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_3__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_11 ;
 int FUNC_5 () ;
 TYPE_2__* VAR_12 ;
 int VAR_13 ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_8 (int) ;
 TYPE_1__* VAR_16 ;
 int FUNC_9 () ;
 int VAR_17 ;
 int FUNC_10 (int ,int,int ) ;
 int FUNC_11 () ;
 int FUNC_12 (int ) ;
 int FUNC_13 () ;

__attribute__((used)) static void FUNC_14(void)
{
 int VAR_18;

 VAR_11 = 0;







 if (!FUNC_3(VAR_4) &&
     FUNC_7(VAR_13) && (VAR_16->flags & VAR_5)) {




  FUNC_2(VAR_3);
  VAR_12->done(0);
  VAR_12->redo();
  return;
 }
 if (VAR_1->track <= VAR_9) {
  FUNC_9();
  return;
 } else if (FUNC_3(VAR_4) &&
     (VAR_16->flags & VAR_5) &&
     (VAR_1->track <= VAR_10 || VAR_1->track == VAR_16->track)) {


  if (VAR_16->track)
   VAR_18 = VAR_16->track - 1;
  else {
   if (VAR_0->flags & VAR_8) {
    FUNC_10(VAR_15, ~(0x10 << FUNC_4(VAR_13)), 0);
    VAR_11 = 1;
    VAR_16->flags |= VAR_6;
   }
   VAR_18 = 1;
  }
 } else {
  FUNC_5();
  if (VAR_16->track != VAR_1->track &&
      (VAR_16->flags & VAR_6))
   VAR_18 = VAR_16->track;
  else {
   FUNC_11();
   return;
  }
 }

 VAR_14 = VAR_17;
 FUNC_8(VAR_7);
 FUNC_8(FUNC_4(VAR_13));
 FUNC_1(VAR_18);
 FUNC_6("seek command:");
}
