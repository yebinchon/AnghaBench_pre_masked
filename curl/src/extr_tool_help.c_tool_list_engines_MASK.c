
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct curl_slist {char* data; struct curl_slist* next; } ;
typedef int CURL ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,struct curl_slist**) ;
 int * FUNC_2 () ;
 int FUNC_3 (struct curl_slist*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;

void FUNC_6(void)
{
  CURL *VAR_1 = FUNC_2();
  struct curl_slist *VAR_2 = ((void*)0);


  FUNC_1(VAR_1, VAR_0, &VAR_2);

  FUNC_5("Build-time engines:");
  if(VAR_2) {
    for(; VAR_2; VAR_2 = VAR_2->next)
      FUNC_4("  %s\n", VAR_2->data);
  }
  else {
    FUNC_5("  <none>");
  }


  FUNC_3(VAR_2);
  FUNC_0(VAR_1);
}
