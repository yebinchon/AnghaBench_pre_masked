
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct curl_slist {int dummy; } ;


 int VAR_0 ;
 struct curl_slist* FUNC_0 (struct curl_slist*,char const*) ;
 char* FUNC_1 (int ,char const*,int,unsigned int) ;
 int FUNC_2 (char*) ;

struct curl_slist *
FUNC_3(struct curl_slist *VAR_1,
                        const char *VAR_2, unsigned int VAR_3)

{
  char *VAR_4;

  VAR_4 = (char *) ((void*)0);

  if(!VAR_2)
    return FUNC_0(VAR_1, VAR_2);

  VAR_4 = FUNC_1(VAR_0, VAR_2, -1, VAR_3);

  if(!VAR_4)
    return (struct curl_slist *) ((void*)0);

  VAR_1 = FUNC_0(VAR_1, VAR_4);
  FUNC_2(VAR_4);
  return VAR_1;
}
