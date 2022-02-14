
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int rawalloc; } ;
struct connectdata {TYPE_1__ host; int transport; struct Curl_easy* data; } ;
struct TYPE_6__ {int prefer_ascii; } ;
struct TYPE_7__ {int path; } ;
struct TYPE_8__ {TYPE_3__ up; } ;
struct Curl_easy {TYPE_2__ set; TYPE_4__ state; } ;
typedef int CURLcode ;


 int VAR_0 ;
 char FUNC_0 (char) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_1 (int ,char*) ;

__attribute__((used)) static CURLcode FUNC_2(struct connectdata * VAR_4)
{
  struct Curl_easy *VAR_5 = VAR_4->data;
  char *VAR_6;

  VAR_4->transport = VAR_2;



  VAR_6 = FUNC_1(VAR_5->state.up.path, ";mode=");

  if(!VAR_6)
    VAR_6 = FUNC_1(VAR_4->host.rawalloc, ";mode=");

  if(VAR_6) {
    char VAR_7;
    *VAR_6 = 0;
    VAR_7 = FUNC_0(VAR_6[6]);

    switch(VAR_7) {
    case 'A':
    case 'N':
      VAR_5->set.prefer_ascii = VAR_3;
      break;

    case 'O':
    case 'I':
    default:

      VAR_5->set.prefer_ascii = VAR_1;
      break;
    }
  }

  return VAR_0;
}
