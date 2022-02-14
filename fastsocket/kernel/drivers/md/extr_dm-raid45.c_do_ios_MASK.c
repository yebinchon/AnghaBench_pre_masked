
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ lists; } ;
struct TYPE_3__ {struct dm_rh_client* rh; } ;
struct raid_set {scalar_t__ stats; TYPE_2__ sc; TYPE_1__ recover; } ;
struct dm_rh_client {int dummy; } ;
struct bio_list {int dummy; } ;
struct bio {int dummy; } ;
typedef int sector_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct raid_set*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct raid_set*) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (struct raid_set*,struct bio*) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (struct bio*) ;
 int FUNC_6 (struct bio*) ;
 int FUNC_7 (struct bio_list*,struct bio*) ;
 int FUNC_8 (struct bio_list*) ;
 int FUNC_9 (struct bio_list*) ;
 int FUNC_10 (struct bio_list*,struct bio_list*) ;
 struct bio* FUNC_11 (struct bio_list*) ;
 int FUNC_12 (struct bio_list*,struct bio*) ;
 int FUNC_13 (struct dm_rh_client*,struct bio*,int ) ;
 int FUNC_14 (struct dm_rh_client*) ;
 int FUNC_15 (struct dm_rh_client*,int ) ;
 int FUNC_16 (scalar_t__) ;
 int FUNC_17 (struct raid_set*,int ,int ) ;
 scalar_t__ FUNC_18 (TYPE_2__*) ;
 scalar_t__ FUNC_19 (struct raid_set*,struct bio*,struct bio_list*) ;
 scalar_t__ FUNC_20 (int) ;

__attribute__((used)) static void FUNC_21(struct raid_set *VAR_6, struct bio_list *VAR_7)
{
 int VAR_8;
 unsigned VAR_9 = 0, VAR_10 = 0;
 sector_t VAR_11;
 struct dm_rh_client *VAR_12 = VAR_6->recover.rh;
 struct bio *VAR_13;
 struct bio_list VAR_14;

 FUNC_9(&VAR_14);






 while ((VAR_13 = FUNC_11(VAR_7))) {





  if (FUNC_20(FUNC_6(VAR_13))) {

   FUNC_4(VAR_6->stats + VAR_2);
   if (VAR_10 ||
       !FUNC_16(VAR_6->sc.lists + VAR_1) ||
       !FUNC_8(&VAR_14) ||
       FUNC_18(&VAR_6->sc)) {
    FUNC_12(VAR_7, VAR_13);
    break;
   }
  }


  if (FUNC_1(VAR_6) && FUNC_5(VAR_13) == VAR_5) {
   FUNC_7(&VAR_14, VAR_13);
   continue;
  }


  VAR_11 = FUNC_3(VAR_6, VAR_13);
  VAR_8 = FUNC_17(VAR_6, VAR_11, VAR_0);
  if (FUNC_20(VAR_8)) {
   VAR_10++;

   FUNC_13(VAR_12, VAR_13,
           FUNC_15(VAR_12,
             VAR_11));

   FUNC_4(VAR_6->stats + VAR_3);
   FUNC_4(VAR_6->stats + VAR_4);


   FUNC_2(VAR_6);
  } else {




   VAR_9 += FUNC_19(VAR_6, VAR_13, &VAR_14);
  }
 }

 if (VAR_9) {

  VAR_8 = FUNC_14(VAR_12);
  if (VAR_8)
   FUNC_0("dirty log flush");
 }


 FUNC_10(VAR_7, &VAR_14);
}
