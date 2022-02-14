
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stripe {int dummy; } ;
struct raid_set {int sc; } ;


 struct stripe* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct stripe*) ;

__attribute__((used)) static int FUNC_2(struct raid_set *VAR_0)
{
 int VAR_1 = 0;
 struct stripe *VAR_2;

 while ((VAR_2 = FUNC_0(&VAR_0->sc)))
  VAR_1 += FUNC_1(VAR_2);

 return VAR_1;
}
