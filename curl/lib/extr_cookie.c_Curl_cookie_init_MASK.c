
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* cookie_engine; } ;
struct Curl_easy {TYPE_1__ state; } ;
struct CookieInfo {int newsession; void* running; int filename; } ;
typedef int FILE ;


 int FUNC_0 (struct Curl_easy*,struct CookieInfo*,int,void*,char*,int *,int *,void*) ;
 int FUNC_1 (struct CookieInfo*) ;
 scalar_t__ FUNC_2 (char*,int ,int *) ;
 void* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (char) ;
 int VAR_2 ;
 void* VAR_3 ;
 struct CookieInfo* FUNC_4 (int,int) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (char const*,int ) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (int ) ;
 int FUNC_10 (struct CookieInfo*) ;
 int * VAR_4 ;
 int FUNC_11 (char const*,char*) ;
 int FUNC_12 (char const*) ;

struct CookieInfo *FUNC_13(struct Curl_easy *VAR_5,
                                    const char *VAR_6,
                                    struct CookieInfo *VAR_7,
                                    bool VAR_8)
{
  struct CookieInfo *VAR_9;
  FILE *VAR_10 = ((void*)0);
  bool VAR_11 = VAR_3;
  char *VAR_12 = ((void*)0);

  if(((void*)0) == VAR_7) {

    VAR_9 = FUNC_4(1, sizeof(struct CookieInfo));
    if(!VAR_9)
      return ((void*)0);
    VAR_9->filename = FUNC_12(VAR_6?VAR_6:"none");
    if(!VAR_9->filename)
      goto fail;
  }
  else {

    VAR_9 = VAR_7;
  }
  VAR_9->running = VAR_0;

  if(VAR_6 && !FUNC_11(VAR_6, "-")) {
    VAR_10 = VAR_4;
    VAR_11 = VAR_0;
  }
  else if(VAR_6 && !*VAR_6) {

    VAR_10 = ((void*)0);
  }
  else
    VAR_10 = VAR_6?FUNC_7(VAR_6, VAR_1):((void*)0);

  VAR_9->newsession = VAR_8;

  if(VAR_10) {
    char *VAR_13;
    bool VAR_14;

    VAR_12 = FUNC_9(VAR_2);
    if(!VAR_12)
      goto fail;
    while(FUNC_2(VAR_12, VAR_2, VAR_10)) {
      if(FUNC_5("Set-Cookie:", VAR_12)) {

        VAR_13 = &VAR_12[11];
        VAR_14 = VAR_3;
      }
      else {
        VAR_13 = VAR_12;
        VAR_14 = VAR_0;
      }
      while(*VAR_13 && FUNC_3(*VAR_13))
        VAR_13++;

      FUNC_0(VAR_5, VAR_9, VAR_14, VAR_3, VAR_13, ((void*)0), ((void*)0), VAR_3);
    }
    FUNC_8(VAR_12);
    FUNC_10(VAR_9);

    if(VAR_11)
      FUNC_6(VAR_10);
  }

  VAR_9->running = VAR_3;
  if(VAR_5)
    VAR_5->state.cookie_engine = VAR_3;

  return VAR_9;

fail:
  FUNC_8(VAR_12);
  if(!VAR_7)


    FUNC_1(VAR_9);
  if(VAR_11 && VAR_10)
    FUNC_6(VAR_10);
  return ((void*)0);
}
