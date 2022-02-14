
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct part {char* member_1; int part; scalar_t__ name; int member_0; } ;
typedef int buf ;
typedef scalar_t__ CURLUcode ;
typedef int CURLU ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *,int ,char**,unsigned int) ;
 int FUNC_2 (int ,char*,char const*,char const*,char*) ;
 int FUNC_3 (char*,size_t,char*,char*,...) ;
 int VAR_9 ;
 scalar_t__ FUNC_4 (char*,char const*) ;
 size_t FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(CURLU *VAR_10, const char *VAR_11, const char *VAR_12,
                      unsigned int VAR_13)
{
  int VAR_14;
  CURLUcode VAR_15;
  char VAR_16[256];
  char *VAR_17 = &VAR_16[0];
  size_t VAR_18 = sizeof(VAR_16);
  struct part VAR_19[] = {
    {VAR_7, "scheme"},
    {VAR_8, "user"},
    {VAR_3, "password"},
    {VAR_2, "options"},
    {VAR_1, "host"},
    {VAR_5, "port"},
    {VAR_4, "path"},
    {VAR_6, "query"},
    {VAR_0, "fragment"},
    {0, ((void*)0)}
  };
  VAR_16[0] = 0;

  for(VAR_14 = 0; VAR_19[VAR_14].name; VAR_14++) {
    char *VAR_20 = ((void*)0);
    size_t VAR_21;
    VAR_15 = FUNC_1(VAR_10, VAR_19[VAR_14].part, &VAR_20, VAR_13);
    if(!VAR_15 && VAR_20) {
      FUNC_3(VAR_17, VAR_18, "%s%s", VAR_16[0]?" | ":"", VAR_20);
    }
    else
      FUNC_3(VAR_17, VAR_18, "%s[%d]", VAR_16[0]?" | ":"", (int)VAR_15);

    VAR_21 = FUNC_5(VAR_17);
    VAR_17 += VAR_21;
    VAR_18 -= VAR_21;
    FUNC_0(VAR_20);
  }
  if(FUNC_4(VAR_16, VAR_12)) {
    FUNC_2(VAR_9, "in: %s\nwanted: %s\ngot:    %s\n", VAR_11, VAR_12, VAR_16);
    return 1;
  }
  return 0;
}
