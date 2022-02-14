
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct curl_tlssessioninfo {scalar_t__ backend; } ;
struct OperationConfig {void* cacert; void* capath; int insecure_ok; TYPE_1__* url_list; } ;
struct GlobalConfig {int errors; } ;
struct TYPE_2__ {int url; } ;
typedef scalar_t__ CURLcode ;
typedef int CURLSH ;
typedef int CURL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct OperationConfig*,scalar_t__,char*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ,struct curl_tlssessioninfo**) ;
 int * FUNC_3 () ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (int ,char*) ;
 scalar_t__ FUNC_7 (struct GlobalConfig*,struct OperationConfig*,int *,int,int*) ;
 void* FUNC_8 (char*) ;

__attribute__((used)) static CURLcode FUNC_9(struct GlobalConfig *VAR_6,
                                    struct OperationConfig *VAR_7,
                                    CURLSH *VAR_8,
                                    bool *VAR_9)
{
  CURLcode VAR_10 = VAR_1;
  bool VAR_11;
  *VAR_9 = VAR_5;


  if(!VAR_7->url_list || !VAR_7->url_list->url) {
    FUNC_6(VAR_6->errors, "no URL specified!\n");
    return VAR_0;
  }
  VAR_11 = 0;
  if(!VAR_7->cacert &&
     !VAR_7->capath &&
     !VAR_7->insecure_ok) {
    CURL *VAR_12 = FUNC_3();
    struct curl_tlssessioninfo *VAR_13 = ((void*)0);





    VAR_10 = FUNC_2(VAR_12, VAR_3,
                               &VAR_13);
    if(VAR_10)
      return VAR_10;
    if(VAR_13->backend != VAR_4) {
      char *VAR_14;
      VAR_14 = FUNC_5("CURL_CA_BUNDLE");
      if(VAR_14) {
        VAR_7->cacert = FUNC_8(VAR_14);
        if(!VAR_7->cacert) {
          FUNC_4(VAR_14);
          FUNC_6(VAR_6->errors, "out of memory\n");
          return VAR_2;
        }
      }
      else {
        VAR_14 = FUNC_5("SSL_CERT_DIR");
        if(VAR_14) {
          VAR_7->capath = FUNC_8(VAR_14);
          if(!VAR_7->capath) {
            FUNC_4(VAR_14);
            FUNC_6(VAR_6->errors, "out of memory\n");
            return VAR_2;
          }
          VAR_11 = 1;
        }
        else {
          VAR_14 = FUNC_5("SSL_CERT_FILE");
          if(VAR_14) {
            VAR_7->cacert = FUNC_8(VAR_14);
            if(!VAR_7->cacert) {
              FUNC_4(VAR_14);
              FUNC_6(VAR_6->errors, "out of memory\n");
              return VAR_2;
            }
          }
        }
      }

      if(VAR_14)
        FUNC_4(VAR_14);






    }
    FUNC_1(VAR_12);
  }

  if(!VAR_10)
    VAR_10 = FUNC_7(VAR_6, VAR_7, VAR_8, VAR_11, VAR_9);

  return VAR_10;
}
