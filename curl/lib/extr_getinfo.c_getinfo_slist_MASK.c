
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct curl_tlssessioninfo {int * internals; int backend; } ;
struct curl_slist {int dummy; } ;
struct curl_certinfo {int dummy; } ;
struct connectdata {TYPE_2__* ssl; } ;
struct TYPE_4__ {struct curl_certinfo certs; } ;
struct Curl_easy {struct connectdata* conn; struct curl_tlssessioninfo tsi; TYPE_1__ info; } ;
struct TYPE_6__ {int * (* get_internals ) (TYPE_2__*,int) ;} ;
struct TYPE_5__ {int use; } ;
typedef int CURLcode ;
typedef int CURLINFO ;


 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;
 struct curl_slist* FUNC_0 (struct Curl_easy*) ;
 TYPE_3__* VAR_3 ;
 int FUNC_1 () ;
 struct curl_slist* FUNC_2 (struct Curl_easy*) ;
 int * FUNC_3 (TYPE_2__*,int) ;

__attribute__((used)) static CURLcode FUNC_4(struct Curl_easy *VAR_4, CURLINFO VAR_5,
                              struct curl_slist **VAR_6)
{
  union {
    struct curl_certinfo *to_certinfo;
    struct curl_slist *to_slist;
  } VAR_7;

  switch(VAR_5) {
  case 130:
    *VAR_6 = FUNC_2(VAR_4);
    break;
  case 131:
    *VAR_6 = FUNC_0(VAR_4);
    break;
  case 132:


    VAR_7.to_certinfo = &VAR_4->info.certs;
    *VAR_6 = VAR_7.to_slist;
    break;
  case 129:
  case 128:
    {
      struct curl_tlssessioninfo **VAR_8 = (struct curl_tlssessioninfo **)
                                          VAR_6;
      struct curl_tlssessioninfo *VAR_9 = &VAR_4->tsi;




      *VAR_8 = VAR_9;
      VAR_9->backend = FUNC_1();
      VAR_9->internals = ((void*)0);
    }
    break;
  default:
    return VAR_1;
  }

  return VAR_0;
}
