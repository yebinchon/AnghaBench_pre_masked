
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stripe_cache {int stripes; int mem_cache_client; } ;
struct stripe {int dummy; } ;
typedef enum grow { ____Placeholder_grow } grow ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct stripe*) ;
 int FUNC_2 (struct stripe_cache*) ;
 struct stripe* FUNC_3 (struct stripe_cache*,int ,int) ;
 int FUNC_4 (struct stripe*) ;

__attribute__((used)) static int FUNC_5(struct stripe_cache *VAR_1, unsigned VAR_2, enum grow VAR_3)
{
 int VAR_4 = 0;


 while (VAR_2--) {
  struct stripe *VAR_5 =
   FUNC_3(VAR_1, VAR_1->mem_cache_client, VAR_3);

  if (FUNC_1(VAR_5)) {
   FUNC_4(VAR_5);
   FUNC_0(&VAR_1->stripes);
  } else {
   VAR_4 = -VAR_0;
   break;
  }
 }

 return VAR_4 ? VAR_4 : FUNC_2(VAR_1);
}
