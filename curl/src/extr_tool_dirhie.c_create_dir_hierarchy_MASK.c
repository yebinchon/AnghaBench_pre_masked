
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mode_t ;
typedef int FILE ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 char* FUNC_1 (size_t) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,size_t,char*,int ,char*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (char*,char*) ;
 char* FUNC_6 (char const*) ;
 size_t FUNC_7 (char const*) ;
 char* FUNC_8 (char*,int ) ;

CURLcode FUNC_9(const char *VAR_7, FILE *VAR_8)
{
  char *VAR_9;
  char *VAR_10;
  char *VAR_11;
  char *VAR_12;
  CURLcode VAR_13 = VAR_0;
  size_t VAR_14;

  VAR_14 = FUNC_7(VAR_7);
  VAR_11 = FUNC_6(VAR_7);
  if(!VAR_11)
    return VAR_1;

  VAR_12 = FUNC_1(VAR_14 + 1);
  if(!VAR_12) {
    FUNC_0(VAR_11);
    return VAR_1;
  }
  VAR_12[0] = '\0';



  VAR_9 = FUNC_8(VAR_11, VAR_5);

  while(VAR_9 != ((void*)0)) {
    VAR_10 = FUNC_8(((void*)0), VAR_5);


    if(VAR_10 != ((void*)0)) {
      size_t VAR_15 = FUNC_7(VAR_12);
      if(VAR_15)
        FUNC_3(&VAR_12[VAR_15], VAR_14 - VAR_15, "%s%s", VAR_3, VAR_9);
      else {
        if(VAR_11 == VAR_9)

          FUNC_5(VAR_12, VAR_9);
        else
          FUNC_3(VAR_12, VAR_14, "%s%s", VAR_3, VAR_9);
      }
      if((-1 == FUNC_2(VAR_12, (mode_t)0000750)) && (VAR_6 != VAR_4)) {
        FUNC_4(VAR_8, VAR_12);
        VAR_13 = VAR_2;
        break;
      }
    }
    VAR_9 = VAR_10;
  }

  FUNC_0(VAR_12);
  FUNC_0(VAR_11);

  return VAR_13;
}
