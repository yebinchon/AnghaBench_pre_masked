
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stripe_chunk {int stripe; } ;


 int FUNC_0 (struct stripe_chunk*,int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct stripe_chunk*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int ) ;

__attribute__((used)) static inline int FUNC_6(struct stripe_chunk *VAR_2)
{
 if (FUNC_2(VAR_2)) {
  FUNC_1(!FUNC_5(FUNC_0(VAR_2, VAR_1)) &&
         !FUNC_5(FUNC_0(VAR_2, VAR_0)));

  if (!FUNC_5(FUNC_0(VAR_2, VAR_1)) ||
      !FUNC_5(FUNC_0(VAR_2, VAR_0)))
   return 1;

  if (FUNC_3(VAR_2->stripe) ||
      FUNC_4(VAR_2->stripe))
   return 1;
 }

 return 0;
}
