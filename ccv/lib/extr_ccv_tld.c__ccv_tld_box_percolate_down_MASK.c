
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ confidence; } ;
struct TYPE_7__ {TYPE_1__ classification; } ;
typedef TYPE_2__ ccv_comp_t ;
struct TYPE_8__ {int rnum; } ;
typedef TYPE_3__ ccv_array_t ;


 scalar_t__ FUNC_0 (TYPE_3__*,int) ;

__attribute__((used)) static void FUNC_1(ccv_array_t* VAR_0, int VAR_1)
{
 for (;;)
 {
  int VAR_2 = 2 * (VAR_1 + 1) - 1;
  int VAR_3 = 2 * (VAR_1 + 1);
  int VAR_4 = VAR_1;
  ccv_comp_t* VAR_5 = (ccv_comp_t*)FUNC_0(VAR_0, VAR_4);
  if (VAR_2 < VAR_0->rnum)
  {
   ccv_comp_t* VAR_6 = (ccv_comp_t*)FUNC_0(VAR_0, VAR_2);
   if (VAR_6->classification.confidence < VAR_5->classification.confidence)
    VAR_4 = VAR_2;
  }
  if (VAR_3 < VAR_0->rnum)
  {
   ccv_comp_t* VAR_7 = (ccv_comp_t*)FUNC_0(VAR_0, VAR_3);
   if (VAR_7->classification.confidence < VAR_5->classification.confidence)
    VAR_4 = VAR_3;
  }
  if (VAR_4 == VAR_1)
   break;
  ccv_comp_t VAR_8 = *(ccv_comp_t*)FUNC_0(VAR_0, VAR_4);
  *(ccv_comp_t*)FUNC_0(VAR_0, VAR_4) = *(ccv_comp_t*)FUNC_0(VAR_0, VAR_1);
  *(ccv_comp_t*)FUNC_0(VAR_0, VAR_1) = VAR_8;
  VAR_1 = VAR_4;
 }
}
