
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sw {int bads; int reads; } ;
struct gameport {int dummy; } ;


 struct sw* FUNC_0 (struct gameport*) ;
 scalar_t__ FUNC_1 (struct sw*) ;

__attribute__((used)) static void FUNC_2(struct gameport *VAR_0)
{
 struct sw *VAR_1 = FUNC_0(VAR_0);

 VAR_1->reads++;
 if (FUNC_1(VAR_1))
  VAR_1->bads++;
}
