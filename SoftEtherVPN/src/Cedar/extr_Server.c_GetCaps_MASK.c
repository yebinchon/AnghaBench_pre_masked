
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_7__ {int Name; } ;
struct TYPE_6__ {int CapsList; } ;
typedef TYPE_1__ CAPSLIST ;
typedef TYPE_2__ CAPS ;


 TYPE_2__* FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,char*) ;

CAPS *FUNC_3(CAPSLIST *VAR_0, char *VAR_1)
{
 UINT VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 for (VAR_2 = 0;VAR_2 < FUNC_1(VAR_0->CapsList);VAR_2++)
 {
  CAPS *VAR_3 = FUNC_0(VAR_0->CapsList, VAR_2);

  if (FUNC_2(VAR_3->Name, VAR_1) == 0)
  {
   return VAR_3;
  }
 }

 return ((void*)0);
}
