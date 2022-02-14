
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aoetgt {struct aoeif* ifp; struct aoeif* ifs; } ;
struct aoeif {int * nd; } ;


 size_t VAR_0 ;

__attribute__((used)) static struct aoeif *
FUNC_0(struct aoetgt *VAR_1)
{
 struct aoeif *VAR_2;

 VAR_2 = VAR_1->ifp;
 VAR_2++;
 if (VAR_2 >= &VAR_1->ifs[VAR_0] || VAR_2->nd == ((void*)0))
  VAR_2 = VAR_1->ifs;
 if (VAR_2->nd == ((void*)0))
  return ((void*)0);
 return VAR_1->ifp = VAR_2;
}
