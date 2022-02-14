
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stripe_chunk {int dummy; } ;
struct TYPE_4__ {unsigned int parity; } ;
struct stripe {TYPE_2__ idx; int sc; } ;
struct TYPE_3__ {unsigned int raid_devs; unsigned int data_devs; } ;
struct raid_set {scalar_t__ stats; TYPE_1__ set; scalar_t__ dev; } ;


 int FUNC_0 (struct stripe_chunk*,int ) ;
 int FUNC_1 (int ) ;
 struct stripe_chunk* FUNC_2 (struct stripe*,unsigned int) ;
 int FUNC_3 (struct stripe_chunk*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 struct raid_set* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct raid_set*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_7 (struct stripe_chunk*) ;
 int FUNC_8 (struct stripe*) ;
 int FUNC_9 (struct stripe*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (struct stripe*) ;
 scalar_t__ FUNC_13 (struct stripe*,unsigned int) ;
 struct stripe_chunk* FUNC_14 (struct stripe*,unsigned int,unsigned int*) ;
 int FUNC_15 (struct stripe*,unsigned int) ;

__attribute__((used)) static int FUNC_16(struct stripe *VAR_8, int VAR_9)
{
 struct raid_set *VAR_10 = FUNC_5(VAR_8->sc);
 unsigned VAR_11 = 0, VAR_12 = 0,
   VAR_13 = 0, VAR_14 = VAR_10->set.raid_devs;


 while (VAR_14--) {
  struct stripe_chunk *VAR_15;


  if (FUNC_4(VAR_10->dev + VAR_14)) {
   VAR_15 = FUNC_2(VAR_8, VAR_14);
   goto prohibit_io;
  }


  VAR_15 = FUNC_14(VAR_8, VAR_14, &VAR_13);
  if (!VAR_15 || VAR_9)
   continue;







  if (VAR_14 != VAR_8->idx.parity &&
      FUNC_11(FUNC_0(VAR_15, VAR_1)) &&
      FUNC_11(FUNC_0(VAR_15, VAR_6))) {
   if (FUNC_11(FUNC_0(VAR_15, VAR_7)))
    goto prohibit_io;
   else if (FUNC_6(VAR_10) &&
     FUNC_13(VAR_8, VAR_14))

    VAR_11++;
  }


  FUNC_7(VAR_15);
  continue;

prohibit_io:

  FUNC_3(VAR_15);
  VAR_12++;

  FUNC_10(FUNC_5(VAR_8->sc)->stats + VAR_5);
 }


 if (VAR_11 == VAR_10->set.data_devs)
  FUNC_10(VAR_10->stats + VAR_4);
 else if (VAR_13 + VAR_12 < VAR_10->set.raid_devs) {

  FUNC_10(VAR_10->stats + VAR_2);
  return -VAR_0;
 }





 if (VAR_13 == VAR_10->set.raid_devs ||
     VAR_11 == VAR_10->set.data_devs) {
  FUNC_15(VAR_8, VAR_8->idx.parity);
  FUNC_1(FUNC_9(VAR_8));
  FUNC_8(VAR_8);
 } else {







  FUNC_12(VAR_8);
 }





 FUNC_10(VAR_10->stats + VAR_3);
 return 0;
}
