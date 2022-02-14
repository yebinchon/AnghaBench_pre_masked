
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char** itext_keys; int itext_num; char** itext_langtags; char** itext_transkeys; char** itext_strings; } ;
typedef TYPE_1__ LodePNGInfo ;


 int FUNC_0 (char**) ;
 scalar_t__ FUNC_1 (char**,int) ;
 int FUNC_2 (char**) ;
 int FUNC_3 (char**,char const*) ;

unsigned FUNC_4(LodePNGInfo* VAR_0, const char* VAR_1, const char* VAR_2,
                           const char* VAR_3, const char* VAR_4)
{
  char** VAR_5 = (char**)(FUNC_1(VAR_0->itext_keys, sizeof(char*) * (VAR_0->itext_num + 1)));
  char** VAR_6 = (char**)(FUNC_1(VAR_0->itext_langtags, sizeof(char*) * (VAR_0->itext_num + 1)));
  char** VAR_7 = (char**)(FUNC_1(VAR_0->itext_transkeys, sizeof(char*) * (VAR_0->itext_num + 1)));
  char** VAR_8 = (char**)(FUNC_1(VAR_0->itext_strings, sizeof(char*) * (VAR_0->itext_num + 1)));
  if(!VAR_5 || !VAR_6 || !VAR_7 || !VAR_8)
  {
    FUNC_0(VAR_5);
    FUNC_0(VAR_6);
    FUNC_0(VAR_7);
    FUNC_0(VAR_8);
    return 83;
  }

  VAR_0->itext_num++;
  VAR_0->itext_keys = VAR_5;
  VAR_0->itext_langtags = VAR_6;
  VAR_0->itext_transkeys = VAR_7;
  VAR_0->itext_strings = VAR_8;

  FUNC_2(&VAR_0->itext_keys[VAR_0->itext_num - 1]);
  FUNC_3(&VAR_0->itext_keys[VAR_0->itext_num - 1], VAR_1);

  FUNC_2(&VAR_0->itext_langtags[VAR_0->itext_num - 1]);
  FUNC_3(&VAR_0->itext_langtags[VAR_0->itext_num - 1], VAR_2);

  FUNC_2(&VAR_0->itext_transkeys[VAR_0->itext_num - 1]);
  FUNC_3(&VAR_0->itext_transkeys[VAR_0->itext_num - 1], VAR_3);

  FUNC_2(&VAR_0->itext_strings[VAR_0->itext_num - 1]);
  FUNC_3(&VAR_0->itext_strings[VAR_0->itext_num - 1], VAR_4);

  return 0;
}
