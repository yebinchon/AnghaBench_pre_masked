
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CURLUcode ;
typedef scalar_t__ CURLUPart ;
typedef int CURLU ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__,char*,unsigned int) ;
 int FUNC_1 (int ,char*,char*,...) ;
 int FUNC_2 (char*,char const*,size_t) ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,char*,char*) ;
 int VAR_2 ;
 char* FUNC_5 (char const*,char) ;
 int FUNC_6 (char*,char*) ;

__attribute__((used)) static CURLUcode FUNC_7(CURLU *VAR_3, const char *VAR_4, unsigned int VAR_5)
{
  const char *VAR_6 = VAR_4;
  CURLUcode VAR_7;


  while(VAR_6) {
    char *VAR_8 = FUNC_5(VAR_6, ',');
    if(VAR_8) {
      size_t VAR_9 = VAR_8-VAR_6;
      char VAR_10[80];
      char VAR_11[80];
      char VAR_12[80];
      FUNC_2(VAR_10, VAR_6, VAR_9);
      VAR_10[VAR_9] = 0;
      if(2 == FUNC_4(VAR_10, "%79[^=]=%79[^,]", VAR_11, VAR_12)) {
        CURLUPart VAR_13 = FUNC_3(VAR_11);




        if(VAR_13 > VAR_1)
          FUNC_1(VAR_2, "UNKNOWN part '%s'\n", VAR_11);

        if(!FUNC_6("NULL", VAR_12))
          VAR_7 = FUNC_0(VAR_3, VAR_13, ((void*)0), VAR_5);
        else if(!FUNC_6("\"\"", VAR_12))
          VAR_7 = FUNC_0(VAR_3, VAR_13, "", VAR_5);
        else
          VAR_7 = FUNC_0(VAR_3, VAR_13, VAR_12, VAR_5);
        if(VAR_7)
          return VAR_7;
      }
      VAR_6 = VAR_8 + 1;
      continue;
    }
    break;
  }
  return VAR_0;
}
