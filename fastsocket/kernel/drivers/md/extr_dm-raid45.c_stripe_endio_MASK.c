
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stripe_chunk {int dummy; } ;
struct stripe {int sc; } ;
struct TYPE_2__ {unsigned int raid_devs; } ;
struct raid_set {TYPE_1__ set; } ;
struct bio_list {int dummy; } ;


 struct bio_list* FUNC_0 (struct stripe_chunk*,int) ;
 int FUNC_1 (int) ;
 struct stripe_chunk* FUNC_2 (struct stripe*,unsigned int) ;
 scalar_t__ FUNC_3 (struct stripe_chunk*) ;
 scalar_t__ FUNC_4 (struct stripe_chunk*) ;
 int FUNC_5 (struct stripe_chunk*) ;
 int FUNC_6 (struct stripe_chunk*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct raid_set* FUNC_7 (int ) ;
 int FUNC_8 (struct raid_set*) ;
 int FUNC_9 (struct raid_set*) ;
 scalar_t__ FUNC_10 (struct bio_list*) ;
 int FUNC_11 (struct stripe*,struct bio_list*,unsigned int,int ) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static void FUNC_13(int VAR_2, struct stripe *VAR_3)
{
 struct raid_set *VAR_4 = FUNC_7(VAR_3->sc);
 unsigned VAR_5 = VAR_4->set.raid_devs;
 int VAR_6 = (VAR_2 != VAR_1);

 while (VAR_5--) {
  struct stripe_chunk *VAR_7 = FUNC_2(VAR_3, VAR_5);
  struct bio_list *VAR_8;

  FUNC_1(FUNC_5(VAR_7));

  VAR_8 = FUNC_0(VAR_7, VAR_2);
  if (FUNC_10(VAR_8))
   continue;

  if (FUNC_12(FUNC_4(VAR_7) || !FUNC_6(VAR_7))) {

   if (FUNC_12(FUNC_8(VAR_4)))
    FUNC_11(VAR_3, VAR_8, VAR_5, -VAR_0);

   else if (VAR_6)
    FUNC_11(VAR_3, VAR_8, VAR_5, 0);
  } else {
   FUNC_1(!FUNC_9(VAR_4) && FUNC_3(VAR_7));
   FUNC_11(VAR_3, VAR_8, VAR_5, 0);
  }
 }
}
