
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int8_t ;
struct secasvar {size_t state; TYPE_1__* sah; } ;
struct TYPE_2__ {int * savtree; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,struct secasvar*,int ) ;
 int FUNC_2 (struct secasvar*,int ) ;
 scalar_t__ FUNC_3 (struct secasvar*) ;
 int VAR_1 ;
 int FUNC_4 (char*) ;
 int VAR_2 ;

void
FUNC_5(
    struct secasvar *VAR_3,
    u_int8_t VAR_4)
{

 if (VAR_3 == ((void*)0))
  FUNC_4("key_sa_chgstate called with sav == NULL");

 if (VAR_3->state == VAR_4)
  return;

 FUNC_0(VAR_2, VAR_0);

 if (FUNC_3(VAR_3))
  FUNC_2(VAR_3, VAR_1);

 VAR_3->state = VAR_4;
 FUNC_1(&VAR_3->sah->savtree[VAR_4], VAR_3, VAR_1);

}
