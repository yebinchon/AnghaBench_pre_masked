
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ** rx_pool; } ;
typedef TYPE_1__ pegasus_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static void FUNC_2(pegasus_t * VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (VAR_2->rx_pool[VAR_3])
   continue;
  VAR_2->rx_pool[VAR_3] = FUNC_0(VAR_0 + 2);




  if (VAR_2->rx_pool[VAR_3] == ((void*)0))
   return;
  FUNC_1(VAR_2->rx_pool[VAR_3], 2);
 }
}
