
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int current_speed; struct Curl_easy* headerbuff; struct Curl_easy* buffer; int resolver; int * lastconnect; scalar_t__ headersize; } ;
struct TYPE_3__ {int flags; } ;
struct Curl_easy {TYPE_2__ state; TYPE_1__ progress; int magic; } ;
typedef scalar_t__ CURLcode ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct Curl_easy*) ;
 int FUNC_1 (struct Curl_easy*) ;
 scalar_t__ FUNC_2 (struct Curl_easy*) ;
 int FUNC_3 (struct Curl_easy*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct Curl_easy*,int *) ;
 int FUNC_6 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct Curl_easy* FUNC_7 (int,int) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (struct Curl_easy*) ;
 void* FUNC_10 (scalar_t__) ;
 int VAR_5 ;

CURLcode FUNC_11(struct Curl_easy **VAR_6)
{
  CURLcode VAR_7;
  struct Curl_easy *VAR_8;


  VAR_8 = FUNC_7(1, sizeof(struct Curl_easy));
  if(!VAR_8) {

    FUNC_6(FUNC_8(VAR_5, "Error: calloc of Curl_easy failed\n"));
    return VAR_1;
  }

  VAR_8->magic = VAR_0;

  VAR_7 = FUNC_5(VAR_8, &VAR_8->state.resolver);
  if(VAR_7) {
    FUNC_6(FUNC_8(VAR_5, "Error: resolver_init failed\n"));
    FUNC_9(VAR_8);
    return VAR_7;
  }



  VAR_8->state.buffer = FUNC_10(VAR_4 + 1);
  if(!VAR_8->state.buffer) {
    FUNC_6(FUNC_8(VAR_5, "Error: malloc of buffer failed\n"));
    VAR_7 = VAR_1;
  }
  else {
    VAR_8->state.headerbuff = FUNC_10(VAR_2);
    if(!VAR_8->state.headerbuff) {
      FUNC_6(FUNC_8(VAR_5, "Error: malloc of headerbuff failed\n"));
      VAR_7 = VAR_1;
    }
    else {
      VAR_7 = FUNC_2(VAR_8);

      VAR_8->state.headersize = VAR_2;
      FUNC_0(VAR_8);
      FUNC_3(VAR_8);


      VAR_8->state.lastconnect = ((void*)0);

      VAR_8->progress.flags |= VAR_3;
      VAR_8->state.current_speed = -1;
    }
  }

  if(VAR_7) {
    FUNC_4(VAR_8->state.resolver);
    FUNC_9(VAR_8->state.buffer);
    FUNC_9(VAR_8->state.headerbuff);
    FUNC_1(VAR_8);
    FUNC_9(VAR_8);
    VAR_8 = ((void*)0);
  }
  else
    *VAR_6 = VAR_8;

  return VAR_7;
}
