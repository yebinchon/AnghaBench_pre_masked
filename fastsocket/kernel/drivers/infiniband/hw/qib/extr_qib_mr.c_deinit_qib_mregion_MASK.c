
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_mregion {int mapsz; int * map; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct qib_mregion *VAR_0)
{
 int VAR_1 = VAR_0->mapsz;

 VAR_0->mapsz = 0;
 while (VAR_1)
  FUNC_0(VAR_0->map[--VAR_1]);
}
