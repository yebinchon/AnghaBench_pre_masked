
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct curl_slist {int data; struct curl_slist* next; } ;


 struct curl_slist* FUNC_0 (struct curl_slist*,char*) ;
 int FUNC_1 (struct curl_slist*) ;
 char* FUNC_2 (int,int ,int,int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static struct curl_slist *
FUNC_4(int VAR_0, struct curl_slist *VAR_1, int VAR_2)

{
  struct curl_slist *VAR_3 = (struct curl_slist *) ((void*)0);

  for(; VAR_1; VAR_1 = VAR_1->next) {
    struct curl_slist *VAR_4;
    char *VAR_5 = FUNC_2(VAR_0, VAR_1->data, -1, VAR_2);

    if(!VAR_5) {
      FUNC_1(VAR_3);
      return (struct curl_slist *) ((void*)0);
    }
    VAR_4 = FUNC_0(VAR_3, VAR_5);
    if(!VAR_4) {
      FUNC_1(VAR_3);
      FUNC_3(VAR_5);
      return ((void*)0);
    }
    VAR_3 = VAR_4;
  }
  return VAR_3;
}
