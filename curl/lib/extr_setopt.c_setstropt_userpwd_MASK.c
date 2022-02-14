
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char*,int ,char**,char**,int *) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static CURLcode FUNC_4(char *VAR_2, char **VAR_3, char **VAR_4)
{
  CURLcode VAR_5 = VAR_0;
  char *VAR_6 = ((void*)0);
  char *VAR_7 = ((void*)0);



  if(VAR_2) {
    VAR_5 = FUNC_0(VAR_2, FUNC_3(VAR_2),
                                      (VAR_3 ? &VAR_6 : ((void*)0)),
                                      (VAR_4 ? &VAR_7 : ((void*)0)),
                                      ((void*)0));
  }

  if(!VAR_5) {

    if(VAR_3) {
      if(!VAR_6 && VAR_2 && VAR_2[0] == ':') {

        VAR_6 = FUNC_2("");
        if(!VAR_6)
          VAR_5 = VAR_1;
      }

      FUNC_1(*VAR_3);
      *VAR_3 = VAR_6;
    }


    if(VAR_4) {
      FUNC_1(*VAR_4);
      *VAR_4 = VAR_7;
    }
  }

  return VAR_5;
}
