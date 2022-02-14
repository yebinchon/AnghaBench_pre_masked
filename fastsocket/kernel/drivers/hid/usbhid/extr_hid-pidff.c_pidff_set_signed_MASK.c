
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pidff_usage {void** value; TYPE_1__* field; } ;
typedef int s16 ;
struct TYPE_3__ {scalar_t__ logical_minimum; } ;


 int FUNC_0 (char*,int ,void*) ;
 void* FUNC_1 (int ,int,TYPE_1__*) ;
 void* FUNC_2 (int ,TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(struct pidff_usage *VAR_0, s16 VAR_1)
{
 if (VAR_0->field->logical_minimum < 0)
  VAR_0->value[0] = FUNC_2(VAR_1, VAR_0->field);
 else {
  if (VAR_1 < 0)
   VAR_0->value[0] =
       FUNC_1(-VAR_1, 0x8000, VAR_0->field);
  else
   VAR_0->value[0] =
       FUNC_1(VAR_1, 0x7fff, VAR_0->field);
 }
 FUNC_0("calculated from %d to %d", VAR_1, VAR_0->value[0]);
}
