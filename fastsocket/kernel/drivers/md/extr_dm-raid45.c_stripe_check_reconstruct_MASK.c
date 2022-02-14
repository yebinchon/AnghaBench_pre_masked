
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stripe {int sc; } ;
struct TYPE_2__ {scalar_t__ ei; } ;
struct raid_set {scalar_t__ stats; TYPE_1__ set; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct stripe*) ;
 int FUNC_2 (struct stripe*) ;
 int VAR_0 ;
 struct raid_set* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct raid_set*) ;
 int FUNC_5 (struct raid_set*) ;
 scalar_t__ FUNC_6 (struct raid_set*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_7 (struct stripe*) ;
 scalar_t__ FUNC_8 (struct stripe*) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (struct stripe*,int*) ;
 int FUNC_11 (struct stripe*) ;
 int FUNC_12 (struct stripe*,int) ;
 scalar_t__ FUNC_13 (int ) ;

__attribute__((used)) static int FUNC_14(struct stripe *VAR_5)
{
 struct raid_set *VAR_6 = FUNC_3(VAR_5->sc);

 if (FUNC_4(VAR_6)) {
  FUNC_1(VAR_5);
  FUNC_2(VAR_5);
  FUNC_11(VAR_5);
  return 0;
 }


 if (FUNC_7(VAR_5)) {

  FUNC_9(VAR_6->stats + VAR_4);
  return -VAR_0;
 }


 FUNC_11(VAR_5);


 if (FUNC_8(VAR_5)) {
  FUNC_9(VAR_6->stats + VAR_3);
  return 0;
 }





 if (FUNC_13(FUNC_5(VAR_6))) {

  FUNC_9(VAR_6->stats + VAR_1);

  FUNC_0(VAR_6->set.ei < 0);
  return FUNC_12(VAR_5, VAR_6->set.ei);
 } else {
  int VAR_7, VAR_8 = FUNC_10(VAR_5, &VAR_7);
  if (FUNC_6(VAR_6) || !VAR_7) {

   FUNC_9(VAR_6->stats + VAR_2);

   return FUNC_12(VAR_5, VAR_8);
  }
 }

 return 0;
}
