
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int num_channels; unsigned int num_slots; int edma_inuse; } ;


 unsigned int FUNC_0 (int) ;
 unsigned int FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (unsigned int) ;
 int VAR_1 ;
 int FUNC_3 (unsigned int,int ) ;
 int VAR_2 ;
 TYPE_1__** VAR_3 ;
 scalar_t__* VAR_4 ;
 int FUNC_4 (scalar_t__,int *,int ) ;

int FUNC_5(unsigned VAR_5, int VAR_6)
{
 unsigned VAR_7;
 int VAR_8;

 VAR_7 = FUNC_1(VAR_5);
 VAR_5 = FUNC_0(VAR_5);

 if (VAR_5 < VAR_3[VAR_7]->num_channels ||
  VAR_5 >= VAR_3[VAR_7]->num_slots ||
  VAR_6 < 1)
  return -VAR_0;

 for (VAR_8 = VAR_5; VAR_8 < VAR_5 + VAR_6; ++VAR_8) {
  VAR_7 = FUNC_1(VAR_8);
  VAR_5 = FUNC_0(VAR_8);

  FUNC_4(VAR_4[VAR_7] + FUNC_2(VAR_5),
   &VAR_2, VAR_1);
  FUNC_3(VAR_5, VAR_3[VAR_7]->edma_inuse);
 }

 return 0;
}
