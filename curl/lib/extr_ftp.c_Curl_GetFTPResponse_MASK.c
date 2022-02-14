
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int time_t ;
struct pingpong {int pending_resp; scalar_t__ cache; } ;
struct ftp_conn {struct pingpong pp; } ;
struct TYPE_2__ {struct ftp_conn ftpc; } ;
struct connectdata {TYPE_1__ proto; struct Curl_easy* data; int * sock; } ;
struct Curl_easy {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef int curl_socket_t ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct connectdata*,size_t) ;
 int FUNC_1 (struct connectdata*) ;
 int FUNC_2 (struct pingpong*,int ) ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct Curl_easy*,char*,...) ;
 scalar_t__ FUNC_5 (int ,struct pingpong*,int*,size_t*) ;

CURLcode FUNC_6(ssize_t *VAR_7,
                             struct connectdata *VAR_8,
                             int *VAR_9)
{







  curl_socket_t VAR_10 = VAR_8->sock[VAR_5];
  struct Curl_easy *VAR_11 = VAR_8->data;
  CURLcode VAR_12 = VAR_1;
  struct ftp_conn *VAR_13 = &VAR_8->proto.ftpc;
  struct pingpong *VAR_14 = &VAR_13->pp;
  size_t VAR_15;
  int VAR_16 = 0;
  int VAR_17 = 0;

  if(VAR_9)
    *VAR_9 = 0;
  else

    VAR_9 = &VAR_17;

  *VAR_7 = 0;

  while(!*VAR_9 && !VAR_12) {

    time_t VAR_18 = FUNC_2(VAR_14, VAR_4);
    time_t VAR_19;

    if(VAR_18 <= 0) {
      FUNC_4(VAR_11, "FTP response timeout");
      return VAR_2;
    }

    VAR_19 = 1000;
    if(VAR_18 < VAR_19)
      VAR_19 = VAR_18;
    if(VAR_14->cache && (VAR_16 < 2)) {






    }
    else if(!FUNC_0(VAR_8, VAR_5)) {
      switch(FUNC_3(VAR_10, VAR_19)) {
      case -1:
        FUNC_4(VAR_11, "FTP response aborted due to select/poll error: %d",
              VAR_6);
        return VAR_3;

      case 0:
        if(FUNC_1(VAR_8))
          return VAR_0;
        continue;

      default:
        break;
      }
    }
    VAR_12 = FUNC_5(VAR_10, VAR_14, VAR_9, &VAR_15);
    if(VAR_12)
      break;

    if(!VAR_15 && VAR_14->cache)


      VAR_16++;
    else


      VAR_16 = 0;

    *VAR_7 += VAR_15;

  }

  VAR_14->pending_resp = VAR_4;

  return VAR_12;
}
