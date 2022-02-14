
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct connectdata {struct Curl_easy* data; } ;
struct IMAP {char* mailbox; char* uidvalidity; char* uid; char* mindex; char* section; char* partial; int query; } ;
struct TYPE_5__ {char* path; } ;
struct TYPE_6__ {int uh; TYPE_2__ up; } ;
struct TYPE_4__ {struct IMAP* protop; } ;
struct Curl_easy {TYPE_3__ state; TYPE_1__ req; } ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct Curl_easy*,char const*,int,char**,size_t*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,int *,int ) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char const) ;
 int FUNC_5 (struct Curl_easy*,char*,char*,char*) ;
 scalar_t__ FUNC_6 (char*,char*) ;

__attribute__((used)) static CURLcode FUNC_7(struct connectdata *VAR_5)
{

  CURLcode VAR_6 = VAR_0;
  struct Curl_easy *VAR_7 = VAR_5->data;
  struct IMAP *VAR_8 = VAR_7->req.protop;
  const char *VAR_9 = &VAR_7->state.up.path[1];
  const char *VAR_10 = VAR_9;


  while(FUNC_4(*VAR_10))
    VAR_10++;

  if(VAR_10 != VAR_9) {

    const char *VAR_11 = VAR_10;
    if(VAR_11 > VAR_9 && VAR_11[-1] == '/')
      VAR_11--;

    VAR_6 = FUNC_0(VAR_7, VAR_9, VAR_11 - VAR_9, &VAR_8->mailbox, ((void*)0),
                            VAR_4);
    if(VAR_6)
      return VAR_6;
  }
  else
    VAR_8->mailbox = ((void*)0);


  while(*VAR_10 == ';') {
    char *VAR_12;
    char *VAR_13;
    size_t VAR_14;


    VAR_9 = ++VAR_10;
    while(*VAR_10 && *VAR_10 != '=')
      VAR_10++;

    if(!*VAR_10)
      return VAR_1;


    VAR_6 = FUNC_0(VAR_7, VAR_9, VAR_10 - VAR_9, &VAR_12, ((void*)0), VAR_4);
    if(VAR_6)
      return VAR_6;


    VAR_9 = ++VAR_10;
    while(FUNC_4(*VAR_10))
      VAR_10++;


    VAR_6 = FUNC_0(VAR_7, VAR_9, VAR_10 - VAR_9, &VAR_13, &VAR_14, VAR_4);
    if(VAR_6) {
      FUNC_3(VAR_12);
      return VAR_6;
    }

    FUNC_1(FUNC_5(VAR_5->data, "IMAP URL parameter '%s' = '%s'\n", VAR_12, VAR_13));





    if(FUNC_6(VAR_12, "UIDVALIDITY") && !VAR_8->uidvalidity) {
      if(VAR_14 > 0 && VAR_13[VAR_14 - 1] == '/')
        VAR_13[VAR_14 - 1] = '\0';

      VAR_8->uidvalidity = VAR_13;
      VAR_13 = ((void*)0);
    }
    else if(FUNC_6(VAR_12, "UID") && !VAR_8->uid) {
      if(VAR_14 > 0 && VAR_13[VAR_14 - 1] == '/')
        VAR_13[VAR_14 - 1] = '\0';

      VAR_8->uid = VAR_13;
      VAR_13 = ((void*)0);
    }
    else if(FUNC_6(VAR_12, "MAILINDEX") && !VAR_8->mindex) {
      if(VAR_14 > 0 && VAR_13[VAR_14 - 1] == '/')
        VAR_13[VAR_14 - 1] = '\0';

      VAR_8->mindex = VAR_13;
      VAR_13 = ((void*)0);
    }
    else if(FUNC_6(VAR_12, "SECTION") && !VAR_8->section) {
      if(VAR_14 > 0 && VAR_13[VAR_14 - 1] == '/')
        VAR_13[VAR_14 - 1] = '\0';

      VAR_8->section = VAR_13;
      VAR_13 = ((void*)0);
    }
    else if(FUNC_6(VAR_12, "PARTIAL") && !VAR_8->partial) {
      if(VAR_14 > 0 && VAR_13[VAR_14 - 1] == '/')
        VAR_13[VAR_14 - 1] = '\0';

      VAR_8->partial = VAR_13;
      VAR_13 = ((void*)0);
    }
    else {
      FUNC_3(VAR_12);
      FUNC_3(VAR_13);

      return VAR_1;
    }

    FUNC_3(VAR_12);
    FUNC_3(VAR_13);
  }



  if(VAR_8->mailbox && !VAR_8->uid && !VAR_8->mindex) {

    (void)FUNC_2(VAR_7->state.uh, VAR_2, &VAR_8->query,
                       VAR_3);
  }


  if(*VAR_10)
    return VAR_1;

  return VAR_0;
}
