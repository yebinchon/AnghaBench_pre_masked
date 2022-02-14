
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct curl_pushheaders {int dummy; } ;


 unsigned int VAR_0 ;
 char* FUNC_0 (struct curl_pushheaders*,char const*) ;
 void* FUNC_1 (unsigned int,char const*,int,unsigned int) ;
 int FUNC_2 (char*) ;

char *
FUNC_3(struct curl_pushheaders *VAR_1, const char *VAR_2,
                             unsigned int VAR_3, unsigned int VAR_4)

{
  char *VAR_5 = (char *) ((void*)0);

  if(VAR_2) {
    VAR_2 = FUNC_1(VAR_0, VAR_2, -1, VAR_3);

    if(VAR_2) {
      char *VAR_6 = FUNC_0(VAR_1, VAR_2);
      FUNC_2((char *) VAR_2);

      if(VAR_6)
        VAR_5 = FUNC_1(VAR_4, VAR_6, -1, VAR_0);
    }
  }

  return VAR_5;
}
