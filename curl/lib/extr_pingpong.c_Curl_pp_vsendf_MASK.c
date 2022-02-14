
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int va_list ;
struct pingpong {scalar_t__ sendleft; size_t sendsize; char* sendthis; int response; struct connectdata* conn; } ;
struct connectdata {int data_prot; struct Curl_easy* data; int * sock; } ;
struct TYPE_2__ {scalar_t__ verbose; } ;
struct Curl_easy {TYPE_1__ set; } ;
typedef scalar_t__ ssize_t ;
typedef enum protection_level { ____Placeholder_protection_level } protection_level ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct Curl_easy*,char*,size_t) ;
 int FUNC_1 (struct Curl_easy*,int ,char*,size_t) ;
 int FUNC_2 () ;
 int FUNC_3 (struct pingpong*) ;
 scalar_t__ FUNC_4 (struct connectdata*,int ,char*,size_t,scalar_t__*) ;
 int FUNC_5 (int) ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char* FUNC_6 (char*,char const*) ;
 int FUNC_7 (char*) ;
 size_t FUNC_8 (char*) ;
 char* FUNC_9 (char*,int ) ;

CURLcode FUNC_10(struct pingpong *VAR_8,
                        const char *VAR_9,
                        va_list VAR_10)
{
  ssize_t VAR_11;
  size_t VAR_12;
  char *VAR_13;
  char *VAR_14;
  CURLcode VAR_15;
  struct connectdata *VAR_16 = VAR_8->conn;
  struct Curl_easy *VAR_17;





  FUNC_5(VAR_8->sendleft == 0);
  FUNC_5(VAR_8->sendsize == 0);
  FUNC_5(VAR_8->sendthis == ((void*)0));

  if(!VAR_16)

    return VAR_2;

  VAR_17 = VAR_16->data;

  VAR_13 = FUNC_6("%s\r\n", VAR_9);
  if(!VAR_13)
    return VAR_1;

  VAR_14 = FUNC_9(VAR_13, VAR_10);
  FUNC_7(VAR_13);
  if(!VAR_14)
    return VAR_1;

  VAR_11 = 0;
  VAR_12 = FUNC_8(VAR_14);

  FUNC_3(VAR_8);

  VAR_15 = FUNC_0(VAR_17, VAR_14, VAR_12);

  if(VAR_15) {
    FUNC_7(VAR_14);
    return VAR_15;
  }




  VAR_15 = FUNC_4(VAR_16, VAR_16->sock[VAR_4], VAR_14, VAR_12,
                     &VAR_11);






  if(VAR_15) {
    FUNC_7(VAR_14);
    return VAR_15;
  }

  if(VAR_16->data->set.verbose)
    FUNC_1(VAR_16->data, VAR_3, VAR_14, (size_t)VAR_11);

  if(VAR_11 != (ssize_t)VAR_12) {

    VAR_8->sendthis = VAR_14;
    VAR_8->sendsize = VAR_12;
    VAR_8->sendleft = VAR_12 - VAR_11;
  }
  else {
    FUNC_7(VAR_14);
    VAR_8->sendthis = ((void*)0);
    VAR_8->sendleft = VAR_8->sendsize = 0;
    VAR_8->response = FUNC_2();
  }

  return VAR_0;
}
