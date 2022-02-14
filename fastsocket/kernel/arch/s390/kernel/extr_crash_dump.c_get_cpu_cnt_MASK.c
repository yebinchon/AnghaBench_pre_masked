
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pref_reg; } ;
struct TYPE_4__ {TYPE_1__ s390x; } ;


 TYPE_2__** VAR_0 ;

__attribute__((used)) static int FUNC_0(void)
{
 int VAR_1, VAR_2 = 0;

 for (VAR_1 = 0; VAR_0[VAR_1]; VAR_1++) {
  if (VAR_0[VAR_1]->s390x.pref_reg == 0)
   continue;
  VAR_2++;
 }
 return VAR_2;
}
