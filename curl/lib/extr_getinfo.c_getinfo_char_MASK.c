
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {char* contenttype; char* wouldredirect; char* conn_primary_ip; char* conn_local_ip; char* conn_scheme; } ;
struct TYPE_7__ {char** str; scalar_t__ private_data; } ;
struct TYPE_6__ {char* most_recent_ftp_entrypath; } ;
struct TYPE_5__ {char* url; } ;
struct Curl_easy {TYPE_4__ info; TYPE_3__ set; TYPE_2__ state; TYPE_1__ change; } ;
typedef int CURLcode ;
typedef int CURLINFO ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static CURLcode FUNC_0(struct Curl_easy *VAR_3, CURLINFO VAR_4,
                             const char **VAR_5)
{
  switch(VAR_4) {
  case 135:
    *VAR_5 = VAR_3->change.url?VAR_3->change.url:(char *)"";
    break;
  case 136:
    *VAR_5 = VAR_3->info.contenttype;
    break;
  case 131:
    *VAR_5 = (char *) VAR_3->set.private_data;
    break;
  case 134:





    *VAR_5 = VAR_3->state.most_recent_ftp_entrypath;
    break;
  case 130:


    *VAR_5 = VAR_3->info.wouldredirect;
    break;
  case 132:

    *VAR_5 = VAR_3->info.conn_primary_ip;
    break;
  case 133:


    *VAR_5 = VAR_3->info.conn_local_ip;
    break;
  case 129:
    *VAR_5 = VAR_3->set.str[VAR_2];
    break;
  case 128:
    *VAR_5 = VAR_3->info.conn_scheme;
    break;

  default:
    return VAR_1;
  }

  return VAR_0;
}
