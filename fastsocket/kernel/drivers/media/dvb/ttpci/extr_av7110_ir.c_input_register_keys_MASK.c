
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct infrared {scalar_t__* key_map; TYPE_1__* input_dev; } ;
struct TYPE_2__ {scalar_t__* keycode; int keycodesize; int keycodemax; int keybit; int mscbit; int evbit; } ;


 int FUNC_0 (scalar_t__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_3(struct infrared *VAR_7)
{
 int VAR_8;

 FUNC_2(VAR_0, VAR_7->input_dev->evbit);
 FUNC_2(VAR_2, VAR_7->input_dev->evbit);
 FUNC_2(VAR_1, VAR_7->input_dev->evbit);

 FUNC_2(VAR_5, VAR_7->input_dev->mscbit);
 FUNC_2(VAR_6, VAR_7->input_dev->mscbit);

 FUNC_1(VAR_7->input_dev->keybit, 0, sizeof(VAR_7->input_dev->keybit));

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_7->key_map); VAR_8++) {
  if (VAR_7->key_map[VAR_8] > VAR_3)
   VAR_7->key_map[VAR_8] = 0;
  else if (VAR_7->key_map[VAR_8] > VAR_4)
   FUNC_2(VAR_7->key_map[VAR_8], VAR_7->input_dev->keybit);
 }

 VAR_7->input_dev->keycode = VAR_7->key_map;
 VAR_7->input_dev->keycodesize = sizeof(VAR_7->key_map[0]);
 VAR_7->input_dev->keycodemax = FUNC_0(VAR_7->key_map);
}
