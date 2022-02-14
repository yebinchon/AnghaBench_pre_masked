
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t itext_num; int * itext_strings; int * itext_transkeys; int * itext_langtags; int * itext_keys; } ;
typedef TYPE_1__ LodePNGInfo ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(LodePNGInfo* VAR_0)
{
  size_t VAR_1;
  for(VAR_1 = 0; VAR_1 < VAR_0->itext_num; VAR_1++)
  {
    FUNC_1(&VAR_0->itext_keys[VAR_1]);
    FUNC_1(&VAR_0->itext_langtags[VAR_1]);
    FUNC_1(&VAR_0->itext_transkeys[VAR_1]);
    FUNC_1(&VAR_0->itext_strings[VAR_1]);
  }
  FUNC_0(VAR_0->itext_keys);
  FUNC_0(VAR_0->itext_langtags);
  FUNC_0(VAR_0->itext_transkeys);
  FUNC_0(VAR_0->itext_strings);
}
