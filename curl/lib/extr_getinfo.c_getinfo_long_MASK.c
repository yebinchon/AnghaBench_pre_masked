
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {long httpcode; long httpproxycode; long filetime; unsigned long httpauthavail; unsigned long proxyauthavail; long numconnects; long conn_primary_port; long conn_local_port; long conn_protocol; int httpversion; int timecond; scalar_t__ request_size; scalar_t__ header_size; } ;
struct TYPE_9__ {long os_errno; long rtsp_next_client_CSeq; long rtsp_next_server_CSeq; long rtsp_CSeq_recv; } ;
struct TYPE_7__ {long certverifyresult; } ;
struct TYPE_6__ {long certverifyresult; } ;
struct TYPE_8__ {long followlocation; TYPE_2__ proxy_ssl; TYPE_1__ ssl; } ;
struct Curl_easy {TYPE_5__ info; TYPE_4__ state; TYPE_3__ set; } ;
typedef scalar_t__ curl_socket_t ;
typedef int CURLcode ;
typedef int CURLINFO ;


 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 long VAR_4 ;
 long VAR_5 ;
 long VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (struct Curl_easy*,int *) ;
 long VAR_8 ;
 long VAR_9 ;

__attribute__((used)) static CURLcode FUNC_1(struct Curl_easy *VAR_10, CURLINFO VAR_11,
                             long *VAR_12)
{
  curl_socket_t VAR_13;

  union {
    unsigned long *to_ulong;
    long *to_long;
  } VAR_14;

  switch(VAR_11) {
  case 132:
    *VAR_12 = VAR_10->info.httpcode;
    break;
  case 144:
    *VAR_12 = VAR_10->info.httpproxycode;
    break;
  case 147:
    if(VAR_10->info.filetime > VAR_8)
      *VAR_12 = VAR_8;
    else if(VAR_10->info.filetime < VAR_9)
      *VAR_12 = VAR_9;
    else
      *VAR_12 = (long)VAR_10->info.filetime;
    break;
  case 146:
    *VAR_12 = (long)VAR_10->info.header_size;
    break;
  case 133:
    *VAR_12 = (long)VAR_10->info.request_size;
    break;
  case 128:
    *VAR_12 = VAR_10->set.ssl.certverifyresult;
    break;
  case 135:
    *VAR_12 = VAR_10->set.proxy_ssl.certverifyresult;
    break;
  case 134:
    *VAR_12 = VAR_10->set.followlocation;
    break;
  case 145:
    VAR_14.to_long = VAR_12;
    *VAR_14.to_ulong = VAR_10->info.httpauthavail;
    break;
  case 136:
    VAR_14.to_long = VAR_12;
    *VAR_14.to_ulong = VAR_10->info.proxyauthavail;
    break;
  case 139:
    *VAR_12 = VAR_10->state.os_errno;
    break;
  case 140:
    *VAR_12 = VAR_10->info.numconnects;
    break;
  case 142:
    VAR_13 = FUNC_0(VAR_10, ((void*)0));



    if(VAR_13 != VAR_7)
      *VAR_12 = (long)VAR_13;
    else


      *VAR_12 = -1;
    break;
  case 138:

    *VAR_12 = VAR_10->info.conn_primary_port;
    break;
  case 141:

    *VAR_12 = VAR_10->info.conn_local_port;
    break;
  case 148:

    *VAR_12 = VAR_10->info.timecond ? 1L : 0L;
    break;
  case 131:
    *VAR_12 = VAR_10->state.rtsp_next_client_CSeq;
    break;
  case 129:
    *VAR_12 = VAR_10->state.rtsp_next_server_CSeq;
    break;
  case 130:
    *VAR_12 = VAR_10->state.rtsp_CSeq_recv;
    break;
  case 143:
    switch(VAR_10->info.httpversion) {
    case 10:
      *VAR_12 = VAR_2;
      break;
    case 11:
      *VAR_12 = VAR_3;
      break;
    case 20:
      *VAR_12 = VAR_4;
      break;
    case 30:
      *VAR_12 = VAR_5;
      break;
    default:
      *VAR_12 = VAR_6;
      break;
    }
    break;
  case 137:
    *VAR_12 = VAR_10->info.conn_protocol;
    break;
  default:
    return VAR_1;
  }

  return VAR_0;
}
