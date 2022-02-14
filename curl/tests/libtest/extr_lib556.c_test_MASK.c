
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef scalar_t__ CURLcode ;
typedef int CURL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,char*,int,size_t*) ;
 scalar_t__ FUNC_4 (int *,char const*,int ,size_t*) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int) ;
 int VAR_9 ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (int *,int ,...) ;
 int FUNC_11 (int ,char*,size_t) ;

int FUNC_12(char *VAR_10)
{
  CURLcode VAR_11;
  CURL *VAR_12;

  if(FUNC_6(VAR_5) != VAR_1) {
    FUNC_7(VAR_9, "curl_global_init() failed\n");
    return VAR_8;
  }

  VAR_12 = FUNC_1();
  if(!VAR_12) {
    FUNC_7(VAR_9, "curl_easy_init() failed\n");
    FUNC_5();
    return VAR_8;
  }

  FUNC_10(VAR_12, VAR_3, VAR_10);
  FUNC_10(VAR_12, VAR_2, 1L);
  FUNC_10(VAR_12, VAR_4, 1L);

  VAR_11 = FUNC_2(VAR_12);

  if(!VAR_11) {

    const char *VAR_13 =






      "GET /556 HTTP/1.2\r\n"
      "Host: ninja\r\n\r\n";

    size_t VAR_14 = 0;

    VAR_11 = FUNC_4(VAR_12, VAR_13, FUNC_9(VAR_13), &VAR_14);

    if(!VAR_11) {


      do {
        char VAR_15[1024];

        VAR_11 = FUNC_3(VAR_12, VAR_15, sizeof(VAR_15), &VAR_14);





        if(VAR_14) {

          if(!FUNC_11(VAR_6, VAR_15, VAR_14))
            break;
        }

      } while((VAR_11 == VAR_1 && VAR_14 != 0) || (VAR_11 == VAR_0));
    }

    if(VAR_14 != 0)
      VAR_11 = VAR_7;
  }

test_cleanup:

  FUNC_0(VAR_12);
  FUNC_5();

  return (int)VAR_11;
}
