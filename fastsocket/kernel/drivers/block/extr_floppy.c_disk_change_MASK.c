
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int dor; } ;
struct TYPE_5__ {int flags; scalar_t__ select_delay; } ;
struct TYPE_4__ {scalar_t__ keep_data; int last_checked; scalar_t__ maxblock; int flags; scalar_t__ select_date; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int) ;
 TYPE_3__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 TYPE_2__* VAR_9 ;
 TYPE_1__* VAR_10 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int ** VAR_11 ;
 int FUNC_7 (int ) ;
 int* VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_8 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_9(int VAR_14)
{
 int VAR_15 = FUNC_1(VAR_14);
 if (VAR_9->flags & VAR_1)
  return FUNC_6(VAR_4);
 if ((FUNC_7(VAR_3) ^ VAR_9->flags) & 0x80) {
  FUNC_5(VAR_6);
  if (VAR_10->maxblock) {

   FUNC_5(VAR_4);
  }


  if (VAR_10->keep_data >= 0) {
   if ((VAR_9->flags & VAR_7) &&
       VAR_11[VAR_14] != ((void*)0))
    FUNC_0("Disk type is undefined after "
           "disk change\n");
   VAR_11[VAR_14] = ((void*)0);
   VAR_12[FUNC_2(VAR_14)] = VAR_8 << 1;
  }

  return 1;
 } else {
  VAR_10->last_checked = VAR_13;
  FUNC_3(VAR_5);
 }
 return 0;
}
