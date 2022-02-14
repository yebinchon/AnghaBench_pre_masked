
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int IpCombine; } ;
typedef TYPE_1__ VH ;
typedef scalar_t__ UINT ;
typedef int IP_COMBINE ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int * FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(VH *VAR_0)
{
 UINT VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 for (VAR_1 = 0;VAR_1 < FUNC_2(VAR_0->IpCombine);VAR_1++)
 {
  IP_COMBINE *VAR_2 = FUNC_1(VAR_0->IpCombine, VAR_1);

  FUNC_0(VAR_0, VAR_2);
 }

 FUNC_3(VAR_0->IpCombine);
}
