
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stripe_chunk {int dummy; } ;


 scalar_t__ FUNC_0 (struct stripe_chunk*) ;
 int FUNC_1 (struct stripe_chunk*) ;
 scalar_t__ FUNC_2 (struct stripe_chunk*) ;
 int FUNC_3 (struct stripe_chunk*) ;
 int FUNC_4 (struct stripe_chunk*) ;
 scalar_t__ FUNC_5 (struct stripe_chunk*) ;

__attribute__((used)) static int FUNC_6(struct stripe_chunk *VAR_0)
{

 if (FUNC_5(VAR_0))
  return 1;


 if (!FUNC_1(VAR_0) || FUNC_2(VAR_0))
  return 0;

 if (!FUNC_3(VAR_0) || FUNC_0(VAR_0)) {
  FUNC_4(VAR_0);
  return 1;
 }

 return 0;
}
