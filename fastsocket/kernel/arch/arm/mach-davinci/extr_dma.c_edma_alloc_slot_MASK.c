
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_channels; int num_slots; int edma_inuse; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__** VAR_5 ;
 scalar_t__* VAR_6 ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (scalar_t__,int *,int ) ;
 scalar_t__ FUNC_5 (int,int ) ;

int FUNC_6(unsigned VAR_7, int VAR_8)
{
 if (VAR_8 >= 0)
  VAR_8 = FUNC_0(VAR_8);

 if (VAR_8 < 0) {
  VAR_8 = VAR_5[VAR_7]->num_channels;
  for (;;) {
   VAR_8 = FUNC_3(VAR_5[VAR_7]->edma_inuse,
     VAR_5[VAR_7]->num_slots, VAR_8);
   if (VAR_8 == VAR_5[VAR_7]->num_slots)
    return -VAR_2;
   if (!FUNC_5(VAR_8,
      VAR_5[VAR_7]->edma_inuse))
    break;
  }
 } else if (VAR_8 < VAR_5[VAR_7]->num_channels ||
   VAR_8 >= VAR_5[VAR_7]->num_slots) {
  return -VAR_1;
 } else if (FUNC_5(VAR_8, VAR_5[VAR_7]->edma_inuse)) {
  return -VAR_0;
 }

 FUNC_4(VAR_6[VAR_7] + FUNC_2(VAR_8),
   &VAR_4, VAR_3);

 return FUNC_1(VAR_7, VAR_8);
}
