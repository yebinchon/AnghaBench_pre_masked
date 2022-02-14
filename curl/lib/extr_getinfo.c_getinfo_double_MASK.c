
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; int t_redirect; scalar_t__ size_ul; scalar_t__ size_dl; scalar_t__ ulspeed; scalar_t__ dlspeed; scalar_t__ downloaded; scalar_t__ uploaded; int t_starttransfer; int t_pretransfer; int t_appconnect; int t_connect; int t_nslookup; int timespent; } ;
struct Curl_easy {TYPE_1__ progress; } ;
typedef int CURLcode ;
typedef int CURLINFO ;


 int VAR_0 ;
 int VAR_1 ;
 double FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static CURLcode FUNC_1(struct Curl_easy *VAR_4, CURLINFO VAR_5,
                               double *VAR_6)
{
  switch(VAR_5) {
  case 128:
    *VAR_6 = FUNC_0(VAR_4->progress.timespent);
    break;
  case 136:
    *VAR_6 = FUNC_0(VAR_4->progress.t_nslookup);
    break;
  case 139:
    *VAR_6 = FUNC_0(VAR_4->progress.t_connect);
    break;
  case 140:
    *VAR_6 = FUNC_0(VAR_4->progress.t_appconnect);
    break;
  case 135:
    *VAR_6 = FUNC_0(VAR_4->progress.t_pretransfer);
    break;
  case 129:
    *VAR_6 = FUNC_0(VAR_4->progress.t_starttransfer);
    break;
  case 132:
    *VAR_6 = (double)VAR_4->progress.uploaded;
    break;
  case 133:
    *VAR_6 = (double)VAR_4->progress.downloaded;
    break;
  case 131:
    *VAR_6 = (double)VAR_4->progress.dlspeed;
    break;
  case 130:
    *VAR_6 = (double)VAR_4->progress.ulspeed;
    break;
  case 138:
    *VAR_6 = (VAR_4->progress.flags & VAR_2)?
      (double)VAR_4->progress.size_dl:-1;
    break;
  case 137:
    *VAR_6 = (VAR_4->progress.flags & VAR_3)?
      (double)VAR_4->progress.size_ul:-1;
    break;
  case 134:
    *VAR_6 = FUNC_0(VAR_4->progress.t_redirect);
    break;

  default:
    return VAR_1;
  }

  return VAR_0;
}
