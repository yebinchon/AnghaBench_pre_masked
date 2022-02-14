
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stripe {int region; } ;
struct TYPE_2__ {int rh; } ;
struct raid_set {scalar_t__ stats; TYPE_1__ recover; } ;
struct raid_address {int di; } ;
struct bio_list {int dummy; } ;
struct bio {int bi_sector; } ;


 struct bio_list* FUNC_0 (struct stripe*,int ,int) ;
 int FUNC_1 (struct stripe*,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct bio*) ;
 int FUNC_4 (struct bio_list*,struct bio*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct raid_set*,int ,struct raid_address*) ;
 struct stripe* FUNC_8 (struct raid_set*,int ) ;
 int FUNC_9 (struct stripe*) ;

__attribute__((used)) static int FUNC_10(struct raid_set *VAR_4, struct bio *VAR_5,
       struct bio_list *VAR_6)
{
 struct raid_address VAR_7;
 struct stripe *VAR_8;

 VAR_8 = FUNC_8(VAR_4, FUNC_7(VAR_4, VAR_5->bi_sector, &VAR_7));
 if (VAR_8) {
  int VAR_9 = 0, VAR_10 = FUNC_3(VAR_5);


  FUNC_4(FUNC_0(VAR_8, VAR_7.di, VAR_10), VAR_5);

  if (VAR_10 == VAR_0)

   FUNC_2(VAR_4->stats + VAR_1);
  else {

   FUNC_6(VAR_4->recover.rh, VAR_8->region);
   VAR_9 = 1;


   FUNC_2(VAR_4->stats + VAR_2);
  }





  if (FUNC_5(FUNC_1(VAR_8, VAR_7.di)) == 1)
   FUNC_9(VAR_8);

  return VAR_9;
 }


 FUNC_4(VAR_6, VAR_5);
 FUNC_2(VAR_4->stats + VAR_3);
 return 0;
}
