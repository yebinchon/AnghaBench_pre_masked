
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t text_num; int * text_strings; int * text_keys; } ;
typedef TYPE_1__ LodePNGInfo ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static unsigned FUNC_2(LodePNGInfo* VAR_0, const LodePNGInfo* VAR_1)
{
  size_t VAR_2 = 0;
  VAR_0->text_keys = 0;
  VAR_0->text_strings = 0;
  VAR_0->text_num = 0;
  for(VAR_2 = 0; VAR_2 < VAR_1->text_num; VAR_2++)
  {
    FUNC_0(FUNC_1(VAR_0, VAR_1->text_keys[VAR_2], VAR_1->text_strings[VAR_2]));
  }
  return 0;
}
