
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ifnet_t ;


 int FUNC_0 (scalar_t__*,int ) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;

void
FUNC_2(ifnet_t *VAR_1)
{
 int VAR_2;

 if (VAR_1 == ((void*)0))
  return;

 for (VAR_2 = 0; VAR_1[VAR_2]; VAR_2++)
  FUNC_1(VAR_1[VAR_2]);

 FUNC_0(VAR_1, VAR_0);
}
