
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * prev_ent; struct TYPE_5__* next_ent; } ;
typedef TYPE_1__ aas_link_t ;
struct TYPE_7__ {TYPE_1__* freelinks; } ;
struct TYPE_6__ {int (* Print ) (int ,char*) ;} ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;

aas_link_t *FUNC_1(void)
{
 aas_link_t *VAR_5;

 VAR_5 = VAR_1.freelinks;
 if (!VAR_5)
 {

  if (VAR_2)

  {
   VAR_3.Print(VAR_0, "empty aas link heap\n");
  }
  return ((void*)0);
 }
 if (VAR_1.freelinks) VAR_1.freelinks = VAR_1.freelinks->next_ent;
 if (VAR_1.freelinks) VAR_1.freelinks->prev_ent = ((void*)0);
 VAR_4--;
 return VAR_5;
}
