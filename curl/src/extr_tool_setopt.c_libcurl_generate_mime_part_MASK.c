
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* filename; int kind; char const* data; char const* encoder; char const* name; char const* type; scalar_t__ headers; struct TYPE_4__* prev; } ;
typedef TYPE_1__ tool_mime ;
struct GlobalConfig {int dummy; } ;
typedef scalar_t__ CURLcode ;
typedef int CURL ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,int,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;






 char* FUNC_5 (char const*,int ) ;
 scalar_t__ FUNC_6 (char*,size_t) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (int *,struct GlobalConfig*,TYPE_1__*,int*) ;
 scalar_t__ FUNC_9 (scalar_t__,int*) ;
 char* FUNC_10 (size_t) ;
 int FUNC_11 (char*,char const*,size_t) ;
 size_t FUNC_12 (char const*) ;

__attribute__((used)) static CURLcode FUNC_13(CURL *VAR_2,
                                           struct GlobalConfig *VAR_3,
                                           tool_mime *VAR_4,
                                           int VAR_5)
{
  CURLcode VAR_6 = VAR_0;
  int VAR_7 = 0;
  char *VAR_8 = ((void*)0);
  const char *VAR_9 = ((void*)0);
  const char *VAR_10 = VAR_4->filename;


  if(VAR_4->prev) {
    VAR_6 = FUNC_13(VAR_2, VAR_3, VAR_4->prev, VAR_5);
    if(VAR_6)
      return VAR_6;
  }


  FUNC_2("part%d = curl_mime_addpart(mime%d);", VAR_5, VAR_5);

  switch(VAR_4->kind) {
  case 130:
    VAR_6 = FUNC_8(VAR_2, VAR_3, VAR_4, &VAR_7);
    if(!VAR_6) {
      FUNC_2("curl_mime_subparts(part%d, mime%d);", VAR_5, VAR_7);
      FUNC_1("mime%d = NULL;", VAR_7);
    }
    break;

  case 133:
    VAR_9 = VAR_4->data;

    if(!VAR_6) {
      FUNC_3(VAR_8);
      VAR_8 = FUNC_5(VAR_9, VAR_1);
      FUNC_4(VAR_8);
      FUNC_2("curl_mime_data(part%d, \"%s\", CURL_ZERO_TERMINATED);",
                            VAR_5, VAR_8);
    }
    break;

  case 132:
  case 131:
    VAR_8 = FUNC_5(VAR_4->data, VAR_1);
    FUNC_4(VAR_8);
    FUNC_2("curl_mime_filedata(part%d, \"%s\");", VAR_5, VAR_8);
    if(VAR_4->kind == 131 && !VAR_10) {
      FUNC_1("curl_mime_filename(part%d, NULL);", VAR_5);
    }
    break;

  case 129:
    if(!VAR_10)
      VAR_10 = "-";

  case 128:

    FUNC_1("curl_mime_data_cb(part%d, -1, (curl_read_callback) fread, \\",
          VAR_5);
    FUNC_0("                  (curl_seek_callback) fseek, NULL, stdin);");
    break;
  default:

    break;
  }

  if(!VAR_6 && VAR_4->encoder) {
    FUNC_3(VAR_8);
    VAR_8 = FUNC_5(VAR_4->encoder, VAR_1);
    FUNC_4(VAR_8);
    FUNC_2("curl_mime_encoder(part%d, \"%s\");", VAR_5, VAR_8);
  }

  if(!VAR_6 && VAR_10) {
    FUNC_3(VAR_8);
    VAR_8 = FUNC_5(VAR_10, VAR_1);
    FUNC_4(VAR_8);
    FUNC_2("curl_mime_filename(part%d, \"%s\");", VAR_5, VAR_8);
  }

  if(!VAR_6 && VAR_4->name) {
    FUNC_3(VAR_8);
    VAR_8 = FUNC_5(VAR_4->name, VAR_1);
    FUNC_4(VAR_8);
    FUNC_2("curl_mime_name(part%d, \"%s\");", VAR_5, VAR_8);
  }

  if(!VAR_6 && VAR_4->type) {
    FUNC_3(VAR_8);
    VAR_8 = FUNC_5(VAR_4->type, VAR_1);
    FUNC_4(VAR_8);
    FUNC_2("curl_mime_type(part%d, \"%s\");", VAR_5, VAR_8);
  }

  if(!VAR_6 && VAR_4->headers) {
    int VAR_11;

    VAR_6 = FUNC_9(VAR_4->headers, &VAR_11);
    if(!VAR_6) {
      FUNC_2("curl_mime_headers(part%d, slist%d, 1);", VAR_5, VAR_11);
      FUNC_1("slist%d = NULL;", VAR_11);
    }
  }

nomem:





  FUNC_3(VAR_8);
  return VAR_6;
}
