
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char** text_keys; int text_num; char** text_strings; } ;
typedef TYPE_1__ LodePNGInfo ;


 int FUNC_0 (char**) ;
 scalar_t__ FUNC_1 (char**,int) ;
 int FUNC_2 (char**) ;
 int FUNC_3 (char**,char const*) ;

unsigned FUNC_4(LodePNGInfo* VAR_0, const char* VAR_1, const char* VAR_2)
{
  char** VAR_3 = (char**)(FUNC_1(VAR_0->text_keys, sizeof(char*) * (VAR_0->text_num + 1)));
  char** VAR_4 = (char**)(FUNC_1(VAR_0->text_strings, sizeof(char*) * (VAR_0->text_num + 1)));
  if(!VAR_3 || !VAR_4)
  {
    FUNC_0(VAR_3);
    FUNC_0(VAR_4);
    return 83;
  }

  VAR_0->text_num++;
  VAR_0->text_keys = VAR_3;
  VAR_0->text_strings = VAR_4;

  FUNC_2(&VAR_0->text_keys[VAR_0->text_num - 1]);
  FUNC_3(&VAR_0->text_keys[VAR_0->text_num - 1], VAR_1);

  FUNC_2(&VAR_0->text_strings[VAR_0->text_num - 1]);
  FUNC_3(&VAR_0->text_strings[VAR_0->text_num - 1], VAR_2);

  return 0;
}
