
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stripe_cache {int stripes; int active_stripes_max; int mem_cache_client; } ;
struct stripe {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct stripe_cache*) ;
 int FUNC_5 (struct stripe*,int ) ;
 int FUNC_6 (struct stripe*) ;
 int FUNC_7 (struct stripe*) ;
 struct stripe* FUNC_8 (struct stripe_cache*) ;
 int FUNC_9 (struct stripe*) ;

__attribute__((used)) static int FUNC_10(struct stripe_cache *VAR_1, unsigned VAR_2)
{
 int VAR_3 = 0;


 while (VAR_2--) {
  struct stripe *VAR_4;

  VAR_4 = FUNC_8(VAR_1);
  if (VAR_4) {

   FUNC_0(FUNC_7(VAR_4));
   FUNC_0(FUNC_9(VAR_4));
   FUNC_1(&VAR_1->stripes);

   FUNC_6(VAR_4);
   FUNC_5(VAR_4, VAR_1->mem_cache_client);
  } else {
   VAR_3 = -VAR_0;
   break;
  }
 }


 if (FUNC_2(&VAR_1->active_stripes_max) >
     FUNC_2(&VAR_1->stripes))
  FUNC_3(&VAR_1->active_stripes_max, 0);

 if (VAR_3)
  return VAR_3;

 return FUNC_2(&VAR_1->stripes) ? FUNC_4(VAR_1) : 0;
}
