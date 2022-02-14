
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef enum mimestrategy { ____Placeholder_mimestrategy } mimestrategy ;
struct TYPE_9__ {scalar_t__ state; } ;
struct TYPE_7__ {char* mimetype; int kind; struct TYPE_7__* nextpart; int * curlheaders; TYPE_4__ state; TYPE_1__* encoder; int userheaders; scalar_t__ filename; scalar_t__ name; scalar_t__ arg; scalar_t__ data; } ;
typedef TYPE_2__ curl_mimepart ;
struct TYPE_8__ {char* boundary; TYPE_2__* firstpart; } ;
typedef TYPE_3__ curl_mime ;
struct TYPE_6__ {char* name; } ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int **,char*,char const*,...) ;
 char* FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*) ;
 char* VAR_2 ;
 char* VAR_3 ;


 scalar_t__ VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 scalar_t__ FUNC_3 (int **,char const*,char const*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 char* FUNC_6 (scalar_t__) ;
 int FUNC_7 (TYPE_4__*,scalar_t__,int *) ;
 char* FUNC_8 (int ,char*) ;
 scalar_t__ FUNC_9 (char const*,char*) ;
 int FUNC_10 (char const*,char*,int) ;

CURLcode FUNC_11(curl_mimepart *VAR_7,
                                   const char *VAR_8,
                                   const char *VAR_9,
                                   enum mimestrategy VAR_10)
{
  curl_mime *VAR_11 = ((void*)0);
  const char *VAR_12 = ((void*)0);
  char *VAR_13;
  const char *VAR_14 = ((void*)0);
  CURLcode VAR_15 = VAR_0;


  FUNC_4(VAR_7->curlheaders);
  VAR_7->curlheaders = ((void*)0);


  if(VAR_7->state.state == VAR_4)
    FUNC_7(&VAR_7->state, VAR_4, ((void*)0));


  VAR_13 = VAR_7->mimetype;
  if(!VAR_13)
    VAR_13 = FUNC_8(VAR_7->userheaders, "Content-Type");
  if(VAR_13)
    VAR_8 = VAR_13;


  if(!VAR_8) {
    switch(VAR_7->kind) {
    case 128:
      VAR_8 = VAR_6;
      break;
    case 129:
      VAR_8 = FUNC_1(VAR_7->filename);
      if(!VAR_8)
        VAR_8 = FUNC_1(VAR_7->data);
      if(!VAR_8 && VAR_7->filename)
        VAR_8 = VAR_3;
      break;
    default:
      VAR_8 = FUNC_1(VAR_7->filename);
      break;
    }
  }

  if(VAR_7->kind == 128) {
    VAR_11 = (curl_mime *) VAR_7->arg;
    if(VAR_11)
      VAR_12 = VAR_11->boundary;
  }
  else if(VAR_8 && !VAR_13 &&
          FUNC_9(VAR_8, "text/plain"))
    if(VAR_10 == VAR_5 || !VAR_7->filename)
      VAR_8 = ((void*)0);


  if(!FUNC_8(VAR_7->userheaders, "Content-Disposition")) {
    if(!VAR_9)
      if(VAR_7->filename || VAR_7->name ||
        (VAR_8 && !FUNC_10(VAR_8, "multipart/", 10)))
          VAR_9 = VAR_2;
    if(VAR_9 && FUNC_5(VAR_9, "attachment") &&
     !VAR_7->name && !VAR_7->filename)
      VAR_9 = ((void*)0);
    if(VAR_9) {
      char *VAR_16 = ((void*)0);
      char *VAR_17 = ((void*)0);

      if(VAR_7->name) {
        VAR_16 = FUNC_6(VAR_7->name);
        if(!VAR_16)
          VAR_15 = VAR_1;
      }
      if(!VAR_15 && VAR_7->filename) {
        VAR_17 = FUNC_6(VAR_7->filename);
        if(!VAR_17)
          VAR_15 = VAR_1;
      }
      if(!VAR_15)
        VAR_15 = FUNC_0(&VAR_7->curlheaders,
                                   "Content-Disposition: %s%s%s%s%s%s%s",
                                   VAR_9,
                                   VAR_16? "; name=\"": "",
                                   VAR_16? VAR_16: "",
                                   VAR_16? "\"": "",
                                   VAR_17? "; filename=\"": "",
                                   VAR_17? VAR_17: "",
                                   VAR_17? "\"": "");
      FUNC_2(VAR_16);
      FUNC_2(VAR_17);
      if(VAR_15)
        return VAR_15;
      }
    }


  if(VAR_8) {
    VAR_15 = FUNC_3(&VAR_7->curlheaders, VAR_8, VAR_12);
    if(VAR_15)
      return VAR_15;
  }


  if(!FUNC_8(VAR_7->userheaders, "Content-Transfer-Encoding")) {
    if(VAR_7->encoder)
      VAR_14 = VAR_7->encoder->name;
    else if(VAR_8 && VAR_10 == VAR_5 &&
     VAR_7->kind != 128)
      VAR_14 = "8bit";
    if(VAR_14) {
      VAR_15 = FUNC_0(&VAR_7->curlheaders,
                                 "Content-Transfer-Encoding: %s", VAR_14);
      if(VAR_15)
        return VAR_15;
    }
  }



  if(VAR_7->state.state == VAR_4)
    FUNC_7(&VAR_7->state, VAR_4, VAR_7->curlheaders);


  if(VAR_7->kind == 128 && VAR_11) {
    curl_mimepart *VAR_18;

    VAR_9 = ((void*)0);
    if(FUNC_9(VAR_8, "multipart/form-data"))
      VAR_9 = "form-data";
    for(VAR_18 = VAR_11->firstpart; VAR_18; VAR_18 = VAR_18->nextpart) {
      VAR_15 = FUNC_11(VAR_18, ((void*)0), VAR_9, VAR_10);
      if(VAR_15)
        return VAR_15;
    }
  }
  return VAR_15;
}
