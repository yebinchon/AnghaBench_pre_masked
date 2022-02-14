
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t text_num; int * text_strings; int * text_keys; } ;
typedef TYPE_1__ LodePNGInfo ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(LodePNGInfo* VAR_0)
{
  size_t VAR_1;
  for(VAR_1 = 0; VAR_1 < VAR_0->text_num; VAR_1++)
  {
    FUNC_1(&VAR_0->text_keys[VAR_1]);
    FUNC_1(&VAR_0->text_strings[VAR_1]);
  }
  FUNC_0(VAR_0->text_keys);
  FUNC_0(VAR_0->text_strings);
}
