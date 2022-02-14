
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* bch; } ;
typedef TYPE_2__ act2000_card ;
typedef scalar_t__ __u16 ;
struct TYPE_4__ {scalar_t__ plci; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(act2000_card *VAR_1, __u16 VAR_2)
{
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  if (VAR_1->bch[VAR_3].plci == VAR_2)
   return VAR_3;
 return -1;
}
