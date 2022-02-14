
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ v3; scalar_t__ v2; scalar_t__ v1; } ;
struct TYPE_3__ {unsigned int psc1; unsigned int psc0; int y; } ;
struct etr_aib {scalar_t__ tsp; TYPE_2__ slsw; TYPE_1__ esw; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct etr_aib *VAR_2, int VAR_3)
{
 unsigned int VAR_4;


 if (VAR_2->tsp == 0)
  return 0;

 VAR_4 = VAR_3 ? VAR_2->esw.psc1 : VAR_2->esw.psc0;
 if (VAR_4 == VAR_1)
  return 1;
 if (VAR_4 == VAR_0)
  return !VAR_2->esw.y && VAR_2->slsw.v1 &&
   VAR_2->slsw.v2 && VAR_2->slsw.v3;
 return 0;
}
