
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct curl_slist {int data; struct curl_slist* next; } ;
typedef int CURLcode ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,int,int,char*) ;
 int FUNC_4 (char*,int) ;
 char* FUNC_5 (int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static CURLcode FUNC_6(struct curl_slist *VAR_4, int *VAR_5)
{
  CURLcode VAR_6 = VAR_0;
  char *VAR_7 = ((void*)0);


  *VAR_5 = ++VAR_3;

  FUNC_4("struct curl_slist *slist%d;", *VAR_5);
  FUNC_2("slist%d = NULL;", *VAR_5);
  FUNC_0("curl_slist_free_all(slist%d);", *VAR_5);
  FUNC_0("slist%d = NULL;", *VAR_5);
  for(; VAR_4; VAR_4 = VAR_4->next) {
    FUNC_1(VAR_7);
    VAR_7 = FUNC_5(VAR_4->data, VAR_2);
    if(!VAR_7)
      return VAR_1;
    FUNC_3("slist%d = curl_slist_append(slist%d, \"%s\");",
                                       *VAR_5, *VAR_5, VAR_7);
  }

 nomem:
  FUNC_1(VAR_7);
  return VAR_6;
}
