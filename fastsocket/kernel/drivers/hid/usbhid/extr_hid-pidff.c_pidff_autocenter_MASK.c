
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct pidff_device {int * reports; int hid; TYPE_3__* set_effect; int * type_id; TYPE_2__* set_effect_type; TYPE_1__* block_load; } ;
struct hid_field {int logical_minimum; } ;
struct TYPE_6__ {int* value; } ;
struct TYPE_5__ {int * value; } ;
struct TYPE_4__ {struct hid_field* field; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct pidff_device*,int,int) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct pidff_device *VAR_10, u16 VAR_11)
{
 struct hid_field *VAR_12 =
  VAR_10->block_load[VAR_2].field;

 if (!VAR_11) {
  FUNC_0(VAR_10, VAR_12->logical_minimum, 0);
  return;
 }

 FUNC_0(VAR_10, VAR_12->logical_minimum, 1);

 VAR_10->set_effect[VAR_2].value[0] =
  VAR_10->block_load[VAR_2].field->logical_minimum;
 VAR_10->set_effect_type->value[0] = VAR_10->type_id[VAR_5];
 VAR_10->set_effect[VAR_1].value[0] = 0;
 VAR_10->set_effect[VAR_7].value[0] = 0;
 VAR_10->set_effect[VAR_8].value[0] = 0;
 FUNC_1(&VAR_10->set_effect[VAR_3], VAR_11);
 VAR_10->set_effect[VAR_0].value[0] = 1;
 VAR_10->set_effect[VAR_6].value[0] = 0;

 FUNC_2(VAR_10->hid, VAR_10->reports[VAR_4],
     VAR_9);
}
