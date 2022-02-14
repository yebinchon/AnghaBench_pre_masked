
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stripe_chunk {struct bio_list* bl; } ;
struct stripe {int sc; } ;
struct TYPE_2__ {unsigned int raid_devs; } ;
struct raid_set {TYPE_1__ set; } ;
struct bio_list {int dummy; } ;


 int FUNC_0 (struct bio_list*) ;
 int FUNC_1 (int ) ;
 struct stripe_chunk* FUNC_2 (struct stripe*,unsigned int) ;
 int VAR_0 ;
 struct raid_set* FUNC_3 (int ) ;
 int FUNC_4 (struct bio_list*) ;
 int FUNC_5 (struct stripe*,struct bio_list*,unsigned int,int ) ;
 int FUNC_6 (struct stripe*) ;
 int FUNC_7 (struct stripe*) ;

__attribute__((used)) static void FUNC_8(struct stripe *VAR_1)
{
 struct raid_set *VAR_2 = FUNC_3(VAR_1->sc);
 unsigned VAR_3 = VAR_2->set.raid_devs;

 while (VAR_3--) {
  struct stripe_chunk *VAR_4 = FUNC_2(VAR_1, VAR_3);
  int VAR_5 = FUNC_0(VAR_4->bl);


  while (VAR_5--) {
   struct bio_list *VAR_6 = VAR_4->bl + VAR_5;

   if (!FUNC_4(VAR_6))
    FUNC_5(VAR_1, VAR_6, VAR_3, -VAR_0);
  }
 }


 FUNC_1(FUNC_6(VAR_1));
 FUNC_1(FUNC_7(VAR_1));
}
