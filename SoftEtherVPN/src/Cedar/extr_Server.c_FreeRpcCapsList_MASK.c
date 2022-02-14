
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_3__ {int CapsList; } ;
typedef TYPE_1__ CAPSLIST ;
typedef int CAPS ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(CAPSLIST *VAR_0)
{
 UINT VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 for (VAR_1 = 0;VAR_1 < FUNC_2(VAR_0->CapsList);VAR_1++)
 {
  CAPS *VAR_2 = FUNC_1(VAR_0->CapsList, VAR_1);

  FUNC_0(VAR_2);
 }

 FUNC_3(VAR_0->CapsList);
}
