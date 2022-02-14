
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pidff_device {int * reports; int hid; TYPE_2__* effect_operation; int * operation_id; TYPE_1__* effect_operation_status; } ;
struct TYPE_4__ {int* value; } ;
struct TYPE_3__ {int * value; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct pidff_device *VAR_6, int VAR_7, int VAR_8)
{
 VAR_6->effect_operation[VAR_0].value[0] = VAR_7;

 if (VAR_8 == 0) {
  VAR_6->effect_operation_status->value[0] =
   VAR_6->operation_id[VAR_3];
 } else {
  VAR_6->effect_operation_status->value[0] =
   VAR_6->operation_id[VAR_2];
  VAR_6->effect_operation[VAR_4].value[0] = VAR_8;
 }

 FUNC_0(VAR_6->hid, VAR_6->reports[VAR_1],
     VAR_5);
}
