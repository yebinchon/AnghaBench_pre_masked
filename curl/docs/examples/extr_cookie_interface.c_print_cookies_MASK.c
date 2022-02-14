
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct curl_slist {char* data; struct curl_slist* next; } ;
typedef scalar_t__ CURLcode ;
typedef int CURL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ,struct curl_slist**) ;
 char* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct curl_slist*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,char*) ;
 int FUNC_5 (char*,...) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_6(CURL *VAR_3)
{
  CURLcode VAR_4;
  struct curl_slist *VAR_5;
  struct curl_slist *VAR_6;
  int VAR_7;

  FUNC_5("Cookies, curl knows:\n");
  VAR_4 = FUNC_0(VAR_3, VAR_1, &VAR_5);
  if(VAR_4 != VAR_0) {
    FUNC_4(VAR_2, "Curl curl_easy_getinfo failed: %s\n",
            FUNC_1(VAR_4));
    FUNC_3(1);
  }
  VAR_6 = VAR_5;
  VAR_7 = 1;
  while(VAR_6) {
    FUNC_5("[%d]: %s\n", VAR_7, VAR_6->data);
    VAR_6 = VAR_6->next;
    VAR_7++;
  }
  if(VAR_7 == 1) {
    FUNC_5("(none)\n");
  }
  FUNC_2(VAR_5);
}
