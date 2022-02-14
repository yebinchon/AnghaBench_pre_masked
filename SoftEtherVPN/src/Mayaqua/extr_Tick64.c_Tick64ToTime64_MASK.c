
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT64 ;
struct TYPE_5__ {int AdjustTime; } ;
struct TYPE_4__ {scalar_t__ Tick; scalar_t__ Time; } ;
typedef scalar_t__ INT ;
typedef TYPE_1__ ADJUST_TIME ;


 TYPE_1__* FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 TYPE_2__* VAR_0 ;

UINT64 FUNC_4(UINT64 VAR_1)
{
 UINT64 VAR_2 = 0;
 if (VAR_1 == 0)
 {
  return 0;
 }
 FUNC_2(VAR_0->AdjustTime);
 {
  INT VAR_3;
  for (VAR_3 = ((INT)FUNC_1(VAR_0->AdjustTime) - 1); VAR_3 >= 0; VAR_3--)
  {
   ADJUST_TIME *VAR_4 = FUNC_0(VAR_0->AdjustTime, VAR_3);
   if (VAR_4->Tick <= VAR_1)
   {
    VAR_2 = VAR_4->Time + (VAR_1 - VAR_4->Tick);
    break;
   }
  }
 }
 FUNC_3(VAR_0->AdjustTime);
 if (VAR_2 == 0)
 {
  VAR_2++;
 }
 return VAR_2;
}
