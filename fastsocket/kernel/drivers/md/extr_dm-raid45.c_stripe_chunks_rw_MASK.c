
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stripe_cache {int active_stripes_max; } ;
struct stripe {int sc; } ;
struct raid_set {scalar_t__ stats; struct stripe_cache sc; } ;


 struct raid_set* FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (struct stripe*,int ) ;
 int FUNC_5 (struct stripe_cache*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(struct stripe *VAR_3)
{
 int VAR_4;
 struct raid_set *VAR_5 = FUNC_0(VAR_3->sc);
 VAR_4 = FUNC_4(VAR_3, VAR_2);
 if (VAR_4) {

  int VAR_6;
  struct stripe_cache *VAR_7 = &VAR_5->sc;


  FUNC_4(VAR_3, VAR_1);


  VAR_6 = FUNC_5(VAR_7);
  if (FUNC_2(&VAR_7->active_stripes_max) < VAR_6)
   FUNC_3(&VAR_7->active_stripes_max, VAR_6);

  FUNC_1(VAR_5->stats + VAR_0);

 }

 return VAR_4;
}
