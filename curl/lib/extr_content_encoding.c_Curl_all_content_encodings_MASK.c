
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; } ;
typedef TYPE_1__ content_encoding ;


 int VAR_0 ;
 TYPE_1__** VAR_1 ;
 char* FUNC_0 (size_t) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,char*) ;
 char* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char*) ;

char *FUNC_5(void)
{
  size_t VAR_2 = 0;
  const content_encoding * const *VAR_3;
  const content_encoding *VAR_4;
  char *VAR_5;

  for(VAR_3 = VAR_1; *VAR_3; VAR_3++) {
    VAR_4 = *VAR_3;
    if(!FUNC_1(VAR_4->name, VAR_0))
      VAR_2 += FUNC_4(VAR_4->name) + 2;
  }

  if(!VAR_2)
    return FUNC_3(VAR_0);

  VAR_5 = FUNC_0(VAR_2);
  if(VAR_5) {
    char *VAR_6 = VAR_5;
    for(VAR_3 = VAR_1; *VAR_3; VAR_3++) {
      VAR_4 = *VAR_3;
      if(!FUNC_1(VAR_4->name, VAR_0)) {
        FUNC_2(VAR_6, VAR_4->name);
        VAR_6 += FUNC_4(VAR_6);
        *VAR_6++ = ',';
        *VAR_6++ = ' ';
      }
    }
    VAR_6[-2] = '\0';
  }

  return VAR_5;
}
