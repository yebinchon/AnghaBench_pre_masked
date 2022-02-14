
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SingleRequest {char* p; char* httpcode; } ;
struct Curl_easy {struct SingleRequest req; } ;


 int FUNC_0 (struct Curl_easy*,char*,char*) ;
 char* FUNC_1 (char*,char) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static void FUNC_3(struct Curl_easy *VAR_0)
{
  struct SingleRequest *VAR_1 = &VAR_0->req;
  char *VAR_2 = VAR_1->p;


  if(!FUNC_2(VAR_2, "HTTP", 4)) {


    VAR_2 = FUNC_1(VAR_2, ' ');
    if(VAR_2 && *++VAR_2) {


      char VAR_3 = '\r';
      char *VAR_4 = FUNC_1(VAR_2, VAR_3);
      if(!VAR_4) {

        VAR_3 = '\n';
        VAR_4 = FUNC_1(VAR_2, VAR_3);
      }

      if(VAR_4) {

        *VAR_4 = '\0';
        FUNC_0(VAR_0, "The requested URL returned error: %s", VAR_2);


        *VAR_4 = VAR_3;
        return;
      }
    }
  }


  FUNC_0(VAR_0, "The requested URL returned error: %d", VAR_1->httpcode);
}
