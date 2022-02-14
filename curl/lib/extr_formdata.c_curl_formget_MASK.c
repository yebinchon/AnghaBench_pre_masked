
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct curl_httppost {int dummy; } ;
typedef int curl_mimepart ;
typedef size_t (* curl_formget_callback ) (void*,char*,size_t) ;
typedef int buffer ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;


 scalar_t__ FUNC_0 (int *,int *,struct curl_httppost*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,char*,int *,int ) ;
 size_t FUNC_4 (char*,int,int,int *) ;
 int VAR_1 ;

int FUNC_5(struct curl_httppost *VAR_2, void *VAR_3,
                 curl_formget_callback VAR_4)
{
  CURLcode VAR_5;
  curl_mimepart VAR_6;

  FUNC_2(&VAR_6, ((void*)0));
  VAR_5 = FUNC_0(((void*)0), &VAR_6, VAR_2, ((void*)0));
  if(!VAR_5)
    VAR_5 = FUNC_3(&VAR_6, "multipart/form-data",
                                       ((void*)0), VAR_1);

  while(!VAR_5) {
    char VAR_7[8192];
    size_t VAR_8 = FUNC_4(VAR_7, 1, sizeof(VAR_7), &VAR_6);

    if(!VAR_8)
      break;

    switch(VAR_8) {
    default:
      if(VAR_4(VAR_3, VAR_7, VAR_8) != VAR_8)
        VAR_5 = VAR_0;
      break;
    case 129:
    case 128:
      break;
    }
  }

  FUNC_1(&VAR_6);
  return (int) VAR_5;
}
