
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ confidence; } ;
struct TYPE_8__ {TYPE_1__ classification; } ;
typedef TYPE_2__ ccv_comp_t ;
struct TYPE_9__ {int rnum; } ;
typedef TYPE_3__ ccv_array_t ;


 int FUNC_0 (TYPE_3__*,int) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int) ;

__attribute__((used)) static void FUNC_2(ccv_array_t* VAR_0, int VAR_1)
{
 for (;;)
 {
  int VAR_2 = VAR_1;
  int VAR_3 = (VAR_1 + 1) / 2 - 1;
  if (VAR_3 < 0)
   break;
  ccv_comp_t* VAR_4 = (ccv_comp_t*)FUNC_1(VAR_0, VAR_3);
  ccv_comp_t* VAR_5 = (ccv_comp_t*)FUNC_1(VAR_0, VAR_1);
  if (VAR_5->classification.confidence < VAR_4->classification.confidence)
  {
   VAR_1 = VAR_3;
   VAR_5 = VAR_4;
  }

  if (VAR_1 == VAR_2)
   break;
  ccv_comp_t VAR_6 = *(ccv_comp_t*)FUNC_1(VAR_0, VAR_1);
  *(ccv_comp_t*)FUNC_1(VAR_0, VAR_1) = *(ccv_comp_t*)FUNC_1(VAR_0, VAR_2);
  *(ccv_comp_t*)FUNC_1(VAR_0, VAR_2) = VAR_6;
  int VAR_7 = 2 * (VAR_3 + 1) - !(VAR_2 & 1);
  if (VAR_7 < VAR_0->rnum)
  {
   ccv_comp_t* VAR_8 = (ccv_comp_t*)FUNC_1(VAR_0, VAR_7);

   if (VAR_8->classification.confidence < VAR_5->classification.confidence)
    break;
  }
 }

 FUNC_0(VAR_0, VAR_1);
}
