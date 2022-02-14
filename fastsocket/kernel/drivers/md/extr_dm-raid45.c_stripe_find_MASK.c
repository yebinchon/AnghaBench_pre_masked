
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stripe_cache {int hash; } ;
struct TYPE_4__ {int parity; } ;
struct stripe {TYPE_2__ idx; int region; int key; } ;
struct TYPE_3__ {int rh; } ;
struct raid_set {scalar_t__ stats; TYPE_1__ recover; struct stripe_cache sc; } ;
struct raid_address {int pi; int key; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct stripe*) ;
 int FUNC_4 (struct stripe*) ;
 int FUNC_5 (int *,struct stripe*) ;
 int FUNC_6 (struct stripe*) ;
 int FUNC_7 (struct stripe*) ;
 struct stripe* FUNC_8 (struct stripe_cache*,int ) ;
 struct stripe* FUNC_9 (struct stripe_cache*) ;
 int FUNC_10 (struct stripe*) ;
 int FUNC_11 (struct stripe*) ;

__attribute__((used)) static struct stripe *FUNC_12(struct raid_set *VAR_2,
      struct raid_address *VAR_3)
{
 int VAR_4;
 struct stripe_cache *VAR_5 = &VAR_2->sc;
 struct stripe *VAR_6;


 VAR_6 = FUNC_8(VAR_5, VAR_3->key);
 if (VAR_6) {
  VAR_4 = FUNC_3(VAR_6);
  if (VAR_4)
   goto get_lock_failed;

  FUNC_1(VAR_2->stats + VAR_0);
 } else {

  VAR_6 = FUNC_9(VAR_5);
  if (VAR_6) {




   FUNC_0(FUNC_11(VAR_6));
   FUNC_0(FUNC_7(VAR_6));


   FUNC_4(VAR_6);


   FUNC_6(VAR_6);

   VAR_6->key = VAR_3->key;
   VAR_6->region = FUNC_2(VAR_2->recover.rh,
        VAR_3->key);
   VAR_6->idx.parity = VAR_3->pi;
   VAR_4 = FUNC_3(VAR_6);
   if (VAR_4)
    goto get_lock_failed;


   FUNC_5(&VAR_5->hash, VAR_6);

   FUNC_1(VAR_2->stats + VAR_1);
  }
 }

 return VAR_6;

get_lock_failed:
 FUNC_10(VAR_6);
 return ((void*)0);
}
