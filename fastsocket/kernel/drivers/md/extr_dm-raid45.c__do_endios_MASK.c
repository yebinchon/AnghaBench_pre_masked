
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int recover; } ;
struct stripe {scalar_t__ lists; TYPE_1__ idx; } ;
struct raid_set {scalar_t__ stats; } ;
struct list_head {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct stripe*) ;
 int FUNC_2 (struct stripe*) ;
 int FUNC_3 (struct stripe*) ;
 int FUNC_4 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (struct raid_set*) ;
 int FUNC_6 (struct raid_set*) ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (struct stripe*) ;
 scalar_t__ FUNC_8 (struct stripe*) ;
 scalar_t__ FUNC_9 (struct stripe*) ;
 scalar_t__ FUNC_10 (struct stripe*) ;
 int FUNC_11 (struct raid_set*) ;
 int VAR_4 ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (scalar_t__,struct list_head*) ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 (struct stripe*) ;
 int FUNC_16 (struct stripe*) ;
 int FUNC_17 (int ,struct stripe*) ;
 int FUNC_18 (struct stripe*) ;
 int FUNC_19 (struct stripe*) ;
 int FUNC_20 (struct stripe*) ;
 scalar_t__ FUNC_21 (struct stripe*) ;

__attribute__((used)) static void FUNC_22(struct raid_set *VAR_5, struct stripe *VAR_6,
         struct list_head *VAR_7)
{

 FUNC_16(VAR_6);






 if (FUNC_10(VAR_6)) {




  FUNC_15(VAR_6);
  FUNC_2(VAR_6);
  FUNC_3(VAR_6);






 }


 if (FUNC_9(VAR_6)) {





  FUNC_20(VAR_6);






  FUNC_2(VAR_6);
  FUNC_7(VAR_6);







  VAR_6->idx.recover = -1;
 }





 FUNC_17(VAR_2, VAR_6);


 if (!FUNC_6(VAR_5) && FUNC_8(VAR_6)) {
  FUNC_1(VAR_6);
  FUNC_17(VAR_4, VAR_6);
 }


 if (FUNC_5(VAR_5)) {
  if (!FUNC_11(VAR_5))
   FUNC_4("RAID set dead: failing ios to dead devices");

  FUNC_18(VAR_6);
 }






 if (FUNC_21(VAR_6)) {
  FUNC_0(!FUNC_14(VAR_6->lists + VAR_1));
  FUNC_13(VAR_6->lists + VAR_0, VAR_7);
  FUNC_12(VAR_5->stats + VAR_3);
 } else
  FUNC_19(VAR_6);
}
