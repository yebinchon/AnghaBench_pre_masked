
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (size_t) ;
 int FUNC_3 (char*,char const*,size_t) ;
 char* FUNC_4 (char const*,char) ;

CURLcode FUNC_5(const char *VAR_2, const size_t VAR_3,
                                  char **VAR_4, char **VAR_5,
                                  char **VAR_6)
{
  CURLcode VAR_7 = VAR_0;
  char *VAR_8 = ((void*)0);
  char *VAR_9 = ((void*)0);
  char *VAR_10 = ((void*)0);
  const char *VAR_11 = ((void*)0);
  const char *VAR_12 = ((void*)0);
  size_t VAR_13;
  size_t VAR_14;
  size_t VAR_15;


  if(VAR_5) {
    VAR_11 = FUNC_4(VAR_2, ':');


    if(VAR_11 >= VAR_2 + VAR_3)
      VAR_11 = ((void*)0);
  }


  if(VAR_6) {
    VAR_12 = FUNC_4(VAR_2, ';');


    if(VAR_12 >= VAR_2 + VAR_3)
      VAR_12 = ((void*)0);
  }


  VAR_13 = (VAR_11 ?
          (size_t)(VAR_12 && VAR_11 > VAR_12 ? VAR_12 - VAR_2 : VAR_11 - VAR_2) :
          (VAR_12 ? (size_t)(VAR_12 - VAR_2) : VAR_3));
  VAR_14 = (VAR_11 ?
          (VAR_12 && VAR_12 > VAR_11 ? (size_t)(VAR_12 - VAR_11) :
                                 (size_t)(VAR_2 + VAR_3 - VAR_11)) - 1 : 0);
  VAR_15 = (VAR_12 ?
          (VAR_11 && VAR_11 > VAR_12 ? (size_t)(VAR_11 - VAR_12) :
                                 (size_t)(VAR_2 + VAR_3 - VAR_12)) - 1 : 0);


  if(VAR_4 && VAR_13) {
    VAR_8 = FUNC_2(VAR_13 + 1);
    if(!VAR_8)
      VAR_7 = VAR_1;
  }


  if(!VAR_7 && VAR_5 && VAR_14) {
    VAR_9 = FUNC_2(VAR_14 + 1);
    if(!VAR_9) {
      FUNC_1(VAR_8);
      VAR_7 = VAR_1;
    }
  }


  if(!VAR_7 && VAR_6 && VAR_15) {
    VAR_10 = FUNC_2(VAR_15 + 1);
    if(!VAR_10) {
      FUNC_1(VAR_9);
      FUNC_1(VAR_8);
      VAR_7 = VAR_1;
    }
  }

  if(!VAR_7) {

    if(VAR_8) {
      FUNC_3(VAR_8, VAR_2, VAR_13);
      VAR_8[VAR_13] = '\0';
      FUNC_0(*VAR_4);
      *VAR_4 = VAR_8;
    }


    if(VAR_9) {
      FUNC_3(VAR_9, VAR_11 + 1, VAR_14);
      VAR_9[VAR_14] = '\0';
      FUNC_0(*VAR_5);
      *VAR_5 = VAR_9;
    }


    if(VAR_10) {
      FUNC_3(VAR_10, VAR_12 + 1, VAR_15);
      VAR_10[VAR_15] = '\0';
      FUNC_0(*VAR_6);
      *VAR_6 = VAR_10;
    }
  }

  return VAR_7;
}
