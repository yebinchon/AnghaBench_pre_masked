
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct curl_pushheaders {int dummy; } ;


 int VAR_0 ;
 char* FUNC_0 (struct curl_pushheaders*,size_t) ;
 char* FUNC_1 (unsigned int,char*,int,int ) ;

char *
FUNC_2(struct curl_pushheaders *VAR_1,
                            size_t VAR_2, unsigned int VAR_3)

{
  char *VAR_4 = (char *) ((void*)0);
  char *VAR_5 = FUNC_0(VAR_1, VAR_2);

  if(VAR_5)
    VAR_4 = FUNC_1(VAR_3, VAR_5, -1, VAR_0);

  return VAR_4;
}
