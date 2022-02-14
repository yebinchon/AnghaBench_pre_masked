
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stripe_chunk {int dummy; } ;
struct stripe {int region; int sc; } ;
struct TYPE_2__ {int rh; } ;
struct raid_set {scalar_t__ stats; TYPE_1__ recover; } ;
struct page_list {int dummy; } ;
struct bio_list {int dummy; } ;
struct bio {int dummy; } ;


 struct stripe_chunk* FUNC_0 (struct stripe*,int) ;
 struct page_list* FUNC_1 (struct stripe*,int) ;
 scalar_t__ VAR_0 ;
 struct raid_set* FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,struct stripe*,struct page_list*,struct bio*) ;
 scalar_t__ FUNC_5 (struct bio*) ;
 int FUNC_6 (struct bio*,int) ;
 struct bio* FUNC_7 (struct bio_list*) ;
 int FUNC_8 (struct stripe_chunk*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (struct raid_set*) ;
 int FUNC_11 (struct stripe*) ;

__attribute__((used)) static void FUNC_12(struct stripe *VAR_4, struct bio_list *VAR_5,
      int VAR_6, int VAR_7)
{
 struct raid_set *VAR_8 = FUNC_2(VAR_4->sc);
 struct bio *VAR_9;
 struct page_list *VAR_10 = FUNC_1(VAR_4, VAR_6);
 struct stripe_chunk *VAR_11 = FUNC_0(VAR_4, VAR_6);


 while ((VAR_9 = FUNC_7(VAR_5))) {
  if (FUNC_5(VAR_9) == VAR_3)

   FUNC_9(VAR_8->recover.rh, VAR_4->region);
  else if (!VAR_7)

   FUNC_4(VAR_0, VAR_4, VAR_10, VAR_9);

  FUNC_6(VAR_9, VAR_7);


  FUNC_3(VAR_8->stats + (FUNC_5(VAR_9) == VAR_0 ?
      VAR_1 : VAR_2));

  FUNC_8(VAR_11);
  FUNC_11(VAR_4);
  FUNC_10(VAR_8);
 }
}
