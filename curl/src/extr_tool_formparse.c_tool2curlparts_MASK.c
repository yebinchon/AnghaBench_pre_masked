
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* filename; int kind; char* data; int name; int encoder; int headers; int type; int size; struct TYPE_5__* prev; } ;
typedef TYPE_1__ tool_mime ;
typedef int curl_seek_callback ;
typedef int curl_read_callback ;
typedef int curl_mimepart ;
typedef int curl_mime ;
typedef scalar_t__ CURLcode ;
typedef int CURL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;






 scalar_t__ FUNC_0 (char*,size_t) ;
 int * FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,char*,int ) ;
 scalar_t__ FUNC_3 (int *,int ,int ,int ,int *,TYPE_1__*) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int *,char*) ;
 scalar_t__ FUNC_6 (int *,char const*) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int ,int ) ;
 scalar_t__ FUNC_9 (int *,int ) ;
 scalar_t__ FUNC_10 (int *,int *) ;
 scalar_t__ FUNC_11 (int *,int ) ;
 int FUNC_12 (char*) ;
 char* FUNC_13 (size_t) ;
 int FUNC_14 (char*,char*,size_t) ;
 size_t FUNC_15 (char*) ;
 scalar_t__ FUNC_16 (int *,TYPE_1__*,int **) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static CURLcode FUNC_17(CURL *VAR_5, tool_mime *VAR_6, curl_mime *VAR_7)
{
  CURLcode VAR_8 = VAR_0;
  curl_mimepart *VAR_9 = ((void*)0);
  curl_mime *VAR_10 = ((void*)0);
  const char *VAR_11 = ((void*)0);

  if(VAR_6) {
    VAR_8 = FUNC_17(VAR_5, VAR_6->prev, VAR_7);
    if(!VAR_8) {
      VAR_9 = FUNC_1(VAR_7);
      if(!VAR_9)
        VAR_8 = VAR_1;
    }
    if(!VAR_8) {
      VAR_11 = VAR_6->filename;
      switch(VAR_6->kind) {
      case 130:
        VAR_8 = FUNC_16(VAR_5, VAR_6, &VAR_10);
        if(!VAR_8) {
          VAR_8 = FUNC_10(VAR_9, VAR_10);
          if(VAR_8)
            FUNC_7(VAR_10);
        }
        break;

      case 133:
        VAR_8 = FUNC_2(VAR_9, VAR_6->data, VAR_2);

        break;

      case 132:
      case 131:
        VAR_8 = FUNC_5(VAR_9, VAR_6->data);
        if(!VAR_8 && VAR_6->kind == 131 && !VAR_11)
          VAR_8 = FUNC_6(VAR_9, ((void*)0));
        break;

      case 129:
        if(!VAR_11)
          VAR_11 = "-";

      case 128:
        VAR_8 = FUNC_3(VAR_9, VAR_6->size,
                                (curl_read_callback) VAR_3,
                                (curl_seek_callback) VAR_4,
                                ((void*)0), VAR_6);
        break;

      default:

        break;
      }
    }
    if(!VAR_8 && VAR_11)
      VAR_8 = FUNC_6(VAR_9, VAR_11);
    if(!VAR_8)
      VAR_8 = FUNC_11(VAR_9, VAR_6->type);
    if(!VAR_8)
      VAR_8 = FUNC_8(VAR_9, VAR_6->headers, 0);
    if(!VAR_8)
      VAR_8 = FUNC_4(VAR_9, VAR_6->encoder);
    if(!VAR_8)
      VAR_8 = FUNC_9(VAR_9, VAR_6->name);
  }
  return VAR_8;
}
