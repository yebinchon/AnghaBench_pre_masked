
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aoetgt {int minbcnt; } ;
struct aoedev {int ntargets; int maxbcnt; int aoeminor; int aoemajor; struct aoetgt** targets; } ;


 int FUNC_0 (char*,int ,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct aoedev *VAR_0)
{
 struct aoetgt **VAR_1, **VAR_2;
 int VAR_3 = 0;

 VAR_1 = VAR_0->targets;
 VAR_2 = VAR_1 + VAR_0->ntargets;
 for (; VAR_1 < VAR_2 && *VAR_1; VAR_1++)
  if (VAR_3 == 0 || VAR_3 > (*VAR_1)->minbcnt)
   VAR_3 = (*VAR_1)->minbcnt;
 if (VAR_3 != VAR_0->maxbcnt) {
  VAR_0->maxbcnt = VAR_3;
  FUNC_0("aoe: e%ld.%d: setting %d byte data frames\n",
   VAR_0->aoemajor, VAR_0->aoeminor, VAR_3);
 }
}
