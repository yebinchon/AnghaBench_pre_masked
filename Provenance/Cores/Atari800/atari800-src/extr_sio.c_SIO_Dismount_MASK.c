
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ sectors; } ;
typedef TYPE_1__ vapi_additional_info_t ;
struct TYPE_4__ {scalar_t__ count; } ;
typedef TYPE_2__ pro_additional_info_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__* VAR_5 ;
 int ** VAR_6 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__* VAR_7 ;
 int * VAR_8 ;
 int FUNC_2 (int ,char*) ;

void FUNC_3(int VAR_9)
{
 if (VAR_6[VAR_9 - 1] != ((void*)0)) {
  FUNC_0(VAR_6[VAR_9 - 1], VAR_8[VAR_9 - 1]);
  VAR_6[VAR_9 - 1] = ((void*)0);
  VAR_3[VAR_9 - 1] = VAR_2;
  FUNC_2(VAR_4[VAR_9 - 1], "Empty");
  if (VAR_7[VAR_9 - 1] == VAR_0) {
   FUNC_1(((pro_additional_info_t *)VAR_5[VAR_9-1])->count);
  }
  else if (VAR_7[VAR_9 - 1] == VAR_1) {
   FUNC_1(((vapi_additional_info_t *)VAR_5[VAR_9-1])->sectors);
  }
  FUNC_1(VAR_5[VAR_9 - 1]);
  VAR_5[VAR_9 - 1] = 0;
 }
}
