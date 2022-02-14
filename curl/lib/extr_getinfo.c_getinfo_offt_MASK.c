
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int retry_after; int filetime; } ;
struct TYPE_3__ {int uploaded; int downloaded; int dlspeed; int ulspeed; int flags; int size_dl; int size_ul; int timespent; int t_nslookup; int t_connect; int t_appconnect; int t_pretransfer; int t_starttransfer; int t_redirect; } ;
struct Curl_easy {TYPE_2__ info; TYPE_1__ progress; } ;
typedef int curl_off_t ;
typedef int CURLcode ;
typedef int CURLINFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static CURLcode FUNC_0(struct Curl_easy *VAR_4, CURLINFO VAR_5,
                             curl_off_t *VAR_6)
{
  switch(VAR_5) {
  case 138:
    *VAR_6 = (curl_off_t)VAR_4->info.filetime;
    break;
  case 132:
    *VAR_6 = VAR_4->progress.uploaded;
    break;
  case 133:
    *VAR_6 = VAR_4->progress.downloaded;
    break;
  case 131:
    *VAR_6 = VAR_4->progress.dlspeed;
    break;
  case 130:
    *VAR_6 = VAR_4->progress.ulspeed;
    break;
  case 140:
    *VAR_6 = (VAR_4->progress.flags & VAR_2)?
      VAR_4->progress.size_dl:-1;
    break;
  case 139:
    *VAR_6 = (VAR_4->progress.flags & VAR_3)?
      VAR_4->progress.size_ul:-1;
    break;
  case 128:
    *VAR_6 = VAR_4->progress.timespent;
    break;
  case 137:
    *VAR_6 = VAR_4->progress.t_nslookup;
    break;
  case 141:
    *VAR_6 = VAR_4->progress.t_connect;
    break;
  case 142:
    *VAR_6 = VAR_4->progress.t_appconnect;
    break;
  case 136:
    *VAR_6 = VAR_4->progress.t_pretransfer;
    break;
  case 129:
    *VAR_6 = VAR_4->progress.t_starttransfer;
    break;
  case 135:
    *VAR_6 = VAR_4->progress.t_redirect;
    break;
  case 134:
    *VAR_6 = VAR_4->info.retry_after;
    break;
  default:
    return VAR_1;
  }

  return VAR_0;
}
