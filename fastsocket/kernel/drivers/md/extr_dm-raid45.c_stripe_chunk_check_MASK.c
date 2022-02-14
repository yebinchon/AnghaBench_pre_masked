
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stripe_chunk {int dummy; } ;
struct stripe {int sc; } ;
struct raid_set {unsigned int dev; scalar_t__ stats; } ;


 struct stripe_chunk* FUNC_0 (struct stripe*,unsigned int) ;
 scalar_t__ FUNC_1 (struct stripe_chunk*) ;
 scalar_t__ FUNC_2 (struct stripe_chunk*) ;
 scalar_t__ FUNC_3 (struct stripe_chunk*) ;
 scalar_t__ FUNC_4 (unsigned int) ;
 struct raid_set* FUNC_5 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static struct stripe_chunk *
FUNC_7(struct stripe *VAR_1, unsigned VAR_2, unsigned *VAR_3)
{
 struct raid_set *VAR_4 = FUNC_5(VAR_1->sc);
 struct stripe_chunk *VAR_5 = FUNC_0(VAR_1, VAR_2);


 if (FUNC_2(VAR_5)) {

  FUNC_6(VAR_4->stats + VAR_0);
  return ((void*)0);
 }


 if (FUNC_1(VAR_5) || FUNC_4(VAR_4->dev + VAR_2))
  return ((void*)0);


 if (FUNC_3(VAR_5)) {
  (*VAR_3)++;
  return ((void*)0);
 }

 return VAR_5;
}
