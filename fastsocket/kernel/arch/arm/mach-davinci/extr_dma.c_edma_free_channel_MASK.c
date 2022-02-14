
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int num_channels; int edma_inuse; } ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 int VAR_0 ;
 int FUNC_3 (unsigned int,int ) ;
 int VAR_1 ;
 TYPE_1__** VAR_2 ;
 scalar_t__* VAR_3 ;
 int FUNC_4 (scalar_t__,int *,int ) ;
 int FUNC_5 (unsigned int,int *,int *) ;

void FUNC_6(unsigned VAR_4)
{
 unsigned VAR_5;

 VAR_5 = FUNC_1(VAR_4);
 VAR_4 = FUNC_0(VAR_4);

 if (VAR_4 >= VAR_2[VAR_5]->num_channels)
  return;

 FUNC_5(VAR_4, ((void*)0), ((void*)0));


 FUNC_4(VAR_3[VAR_5] + FUNC_2(VAR_4),
   &VAR_1, VAR_0);
 FUNC_3(VAR_4, VAR_2[VAR_5]->edma_inuse);
}
