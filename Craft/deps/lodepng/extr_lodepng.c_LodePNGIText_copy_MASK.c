
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t itext_num; int * itext_strings; int * itext_transkeys; int * itext_langtags; int * itext_keys; } ;
typedef TYPE_1__ LodePNGInfo ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int ,int ) ;

__attribute__((used)) static unsigned FUNC_2(LodePNGInfo* VAR_0, const LodePNGInfo* VAR_1)
{
  size_t VAR_2 = 0;
  VAR_0->itext_keys = 0;
  VAR_0->itext_langtags = 0;
  VAR_0->itext_transkeys = 0;
  VAR_0->itext_strings = 0;
  VAR_0->itext_num = 0;
  for(VAR_2 = 0; VAR_2 < VAR_1->itext_num; VAR_2++)
  {
    FUNC_0(FUNC_1(VAR_0, VAR_1->itext_keys[VAR_2], VAR_1->itext_langtags[VAR_2],
                                        VAR_1->itext_transkeys[VAR_2], VAR_1->itext_strings[VAR_2]));
  }
  return 0;
}
