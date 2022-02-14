
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct connectdata {struct Curl_easy* data; } ;
struct IMAP {char* custom; int custom_params; } ;
struct TYPE_4__ {char** str; } ;
struct TYPE_3__ {struct IMAP* protop; } ;
struct Curl_easy {TYPE_2__ set; TYPE_1__ req; } ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct Curl_easy*,char const*,int ,char**,int *,int ) ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static CURLcode FUNC_2(struct connectdata *VAR_4)
{
  CURLcode VAR_5 = VAR_0;
  struct Curl_easy *VAR_6 = VAR_4->data;
  struct IMAP *VAR_7 = VAR_6->req.protop;
  const char *VAR_8 = VAR_6->set.str[VAR_2];

  if(VAR_8) {

    VAR_5 = FUNC_0(VAR_6, VAR_8, 0, &VAR_7->custom, ((void*)0), VAR_3);


    if(!VAR_5) {
      const char *VAR_9 = VAR_7->custom;

      while(*VAR_9 && *VAR_9 != ' ')
        VAR_9++;

      if(*VAR_9) {
        VAR_7->custom_params = FUNC_1(VAR_9);
        VAR_7->custom[VAR_9 - VAR_7->custom] = '\0';

        if(!VAR_7->custom_params)
          VAR_5 = VAR_1;
      }
    }
  }

  return VAR_5;
}
