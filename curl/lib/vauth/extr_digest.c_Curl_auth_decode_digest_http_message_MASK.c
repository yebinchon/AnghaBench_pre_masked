
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct digestdata {char* nonce; int nc; char* realm; char* opaque; char* qop; char* algorithm; void* stale; void* userhash; int algo; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct digestdata*) ;
 scalar_t__ FUNC_1 (char const*,char*,char*,char const**) ;
 int VAR_9 ;
 int VAR_10 ;
 char* VAR_11 ;
 char* VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_2 (char const) ;
 void* VAR_14 ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 void* FUNC_5 (char*) ;
 char* FUNC_6 (char*,char*,char**) ;

CURLcode FUNC_7(const char *VAR_15,
                                              struct digestdata *VAR_16)
{
  bool VAR_17 = VAR_13;
  bool VAR_18 = VAR_13;
  bool VAR_19 = VAR_13;
  char *VAR_20 = ((void*)0);
  char *VAR_21 = ((void*)0);


  if(VAR_16->nonce)
    VAR_17 = VAR_14;


  FUNC_0(VAR_16);

  for(;;) {
    char VAR_22[VAR_10];
    char VAR_23[VAR_9];


    while(*VAR_15 && FUNC_2(*VAR_15))
      VAR_15++;


    if(FUNC_1(VAR_15, VAR_22, VAR_23, &VAR_15)) {
      if(FUNC_4(VAR_22, "nonce")) {
        FUNC_3(VAR_16->nonce);
        VAR_16->nonce = FUNC_5(VAR_23);
        if(!VAR_16->nonce)
          return VAR_8;
      }
      else if(FUNC_4(VAR_22, "stale")) {
        if(FUNC_4(VAR_23, "true")) {
          VAR_16->stale = VAR_14;
          VAR_16->nc = 1;
        }
      }
      else if(FUNC_4(VAR_22, "realm")) {
        FUNC_3(VAR_16->realm);
        VAR_16->realm = FUNC_5(VAR_23);
        if(!VAR_16->realm)
          return VAR_8;
      }
      else if(FUNC_4(VAR_22, "opaque")) {
        FUNC_3(VAR_16->opaque);
        VAR_16->opaque = FUNC_5(VAR_23);
        if(!VAR_16->opaque)
          return VAR_8;
      }
      else if(FUNC_4(VAR_22, "qop")) {
        char *VAR_24 = ((void*)0);


        VAR_21 = FUNC_5(VAR_23);
        if(!VAR_21)
          return VAR_8;

        VAR_20 = FUNC_6(VAR_21, ",", &VAR_24);
        while(VAR_20 != ((void*)0)) {
          if(FUNC_4(VAR_20, VAR_11)) {
            VAR_18 = VAR_14;
          }
          else if(FUNC_4(VAR_20, VAR_12)) {
            VAR_19 = VAR_14;
          }
          VAR_20 = FUNC_6(((void*)0), ",", &VAR_24);
        }

        FUNC_3(VAR_21);


        if(VAR_18) {
          FUNC_3(VAR_16->qop);
          VAR_16->qop = FUNC_5(VAR_11);
          if(!VAR_16->qop)
            return VAR_8;
        }
        else if(VAR_19) {
          FUNC_3(VAR_16->qop);
          VAR_16->qop = FUNC_5(VAR_12);
          if(!VAR_16->qop)
            return VAR_8;
        }
      }
      else if(FUNC_4(VAR_22, "algorithm")) {
        FUNC_3(VAR_16->algorithm);
        VAR_16->algorithm = FUNC_5(VAR_23);
        if(!VAR_16->algorithm)
          return VAR_8;

        if(FUNC_4(VAR_23, "MD5-sess"))
          VAR_16->algo = VAR_1;
        else if(FUNC_4(VAR_23, "MD5"))
          VAR_16->algo = VAR_0;
        else if(FUNC_4(VAR_23, "SHA-256"))
          VAR_16->algo = VAR_2;
        else if(FUNC_4(VAR_23, "SHA-256-SESS"))
          VAR_16->algo = VAR_3;
        else if(FUNC_4(VAR_23, "SHA-512-256"))
          VAR_16->algo = VAR_4;
        else if(FUNC_4(VAR_23, "SHA-512-256-SESS"))
          VAR_16->algo = VAR_5;
        else
          return VAR_6;
      }
      else if(FUNC_4(VAR_22, "userhash")) {
        if(FUNC_4(VAR_23, "true")) {
          VAR_16->userhash = VAR_14;
        }
      }
      else {

      }
    }
    else
      break;


    while(*VAR_15 && FUNC_2(*VAR_15))
      VAR_15++;


    if(',' == *VAR_15)
      VAR_15++;
  }




  if(VAR_17 && !VAR_16->stale)
    return VAR_6;


  if(!VAR_16->nonce)
    return VAR_6;

  return VAR_7;
}
