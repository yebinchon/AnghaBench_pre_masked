
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* portalmaxtraveltimes; int numportals; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int*) ;
 scalar_t__ FUNC_2 (int) ;
 TYPE_1__ VAR_0 ;

void FUNC_3(void)
{
 int VAR_1;

 if (VAR_0.portalmaxtraveltimes) FUNC_1(VAR_0.portalmaxtraveltimes);

 VAR_0.portalmaxtraveltimes = (int *) FUNC_2(VAR_0.numportals * sizeof(int));

 for (VAR_1 = 0; VAR_1 < VAR_0.numportals; VAR_1++)
 {
  VAR_0.portalmaxtraveltimes[VAR_1] = FUNC_0(VAR_1);

 }
}
