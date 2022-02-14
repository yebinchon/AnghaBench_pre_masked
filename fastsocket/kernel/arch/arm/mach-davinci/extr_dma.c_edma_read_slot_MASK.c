
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct edmacc_param {int dummy; } ;
struct TYPE_2__ {unsigned int num_slots; } ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 int VAR_0 ;
 TYPE_1__** VAR_1 ;
 scalar_t__* VAR_2 ;
 int FUNC_3 (struct edmacc_param*,scalar_t__,int ) ;

void FUNC_4(unsigned VAR_3, struct edmacc_param *VAR_4)
{
 unsigned VAR_5;

 VAR_5 = FUNC_1(VAR_3);
 VAR_3 = FUNC_0(VAR_3);

 if (VAR_3 >= VAR_1[VAR_5]->num_slots)
  return;
 FUNC_3(VAR_4, VAR_2[VAR_5] + FUNC_2(VAR_3),
   VAR_0);
}
