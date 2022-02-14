
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct connectdata {int * sock; struct Curl_easy* data; } ;
struct TYPE_3__ {char* path; char* query; } ;
struct TYPE_4__ {TYPE_1__ up; } ;
struct Curl_easy {TYPE_2__ state; } ;
typedef int ssize_t ;
typedef int curl_socket_t ;
typedef scalar_t__ CURLcode ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct connectdata*,int ,char*,int) ;
 scalar_t__ FUNC_1 (int ,struct connectdata*,char*) ;
 int FUNC_2 (struct Curl_easy*,size_t,int,int ,int) ;
 scalar_t__ FUNC_3 (struct Curl_easy*,char*,int ,char**,size_t*,int ) ;
 scalar_t__ FUNC_4 (struct connectdata*,int ,char*,int,int*) ;
 int FUNC_5 (char*) ;
 int VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ FUNC_6 (int ,int) ;
 int VAR_6 ;
 char* FUNC_7 (char*,char*,char*) ;
 int FUNC_8 (size_t) ;
 int FUNC_9 (struct Curl_easy*,char*) ;
 int FUNC_10 (char*) ;
 char* FUNC_11 (char*) ;
 int FUNC_12 (char*) ;

__attribute__((used)) static CURLcode FUNC_13(struct connectdata *VAR_7, bool *VAR_8)
{
  CURLcode VAR_9 = VAR_1;
  struct Curl_easy *VAR_10 = VAR_7->data;
  curl_socket_t VAR_11 = VAR_7->sock[VAR_5];
  char *VAR_12;
  char *VAR_13 = VAR_10->state.up.path;
  char *VAR_14 = VAR_10->state.up.query;
  char *VAR_15 = ((void*)0);
  char *VAR_16 = ((void*)0);
  ssize_t VAR_17, VAR_18;
  size_t VAR_19;

  *VAR_8 = VAR_6;


  FUNC_5(VAR_13);

  if(VAR_14)
    VAR_12 = FUNC_7("%s?%s", VAR_13, VAR_14);
  else
    VAR_12 = FUNC_11(VAR_13);

  if(!VAR_12)
    return VAR_2;


  if(FUNC_12(VAR_12) <= 2) {
    VAR_15 = (char *)"";
    VAR_19 = FUNC_12(VAR_15);
    FUNC_10(VAR_12);
  }
  else {
    char *VAR_20;


    VAR_20 = VAR_12;
    VAR_20 += 2;


    VAR_9 = FUNC_3(VAR_10, VAR_20, 0, &VAR_15, &VAR_19, VAR_4);
    FUNC_10(VAR_12);
    if(VAR_9)
      return VAR_9;
    VAR_16 = VAR_15;
  }



  VAR_18 = FUNC_8(VAR_19);

  for(;;) {
    VAR_9 = FUNC_4(VAR_7, VAR_11, VAR_15, VAR_18, &VAR_17);
    if(!VAR_9) {
      VAR_9 = FUNC_0(VAR_7, VAR_0, VAR_15, VAR_17);
      if(VAR_9)
        break;

      VAR_18 -= VAR_17;
      VAR_15 += VAR_17;
      if(VAR_18 < 1)
        break;
    }
    else
      break;
    if(FUNC_6(VAR_11, 100) < 0) {
      VAR_9 = VAR_3;
      break;
    }
  }

  FUNC_10(VAR_16);

  if(!VAR_9)


    VAR_9 = FUNC_1(VAR_11, VAR_7, "\r\n");
  if(VAR_9) {
    FUNC_9(VAR_10, "Failed sending Gopher request");
    return VAR_9;
  }
  VAR_9 = FUNC_0(VAR_7, VAR_0, (char *)"\r\n", 2);
  if(VAR_9)
    return VAR_9;

  FUNC_2(VAR_10, VAR_5, -1, VAR_4, -1);
  return VAR_1;
}
