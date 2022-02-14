
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ timediff_t ;
struct pingpong {char* cache; scalar_t__ cache_size; } ;
struct ftp_conn {struct pingpong pp; } ;
struct TYPE_2__ {struct ftp_conn ftpc; } ;
struct connectdata {TYPE_1__ proto; int * sock; struct Curl_easy* data; } ;
struct Curl_easy {int dummy; } ;
typedef int ssize_t ;
typedef int curl_socket_t ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,struct connectdata*,int*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct Curl_easy*,char*) ;
 scalar_t__ FUNC_3 (struct Curl_easy*) ;
 int FUNC_4 (struct Curl_easy*,char*) ;

__attribute__((used)) static CURLcode FUNC_5(struct connectdata *VAR_11, bool *VAR_12)
{
  struct Curl_easy *VAR_13 = VAR_11->data;
  curl_socket_t VAR_14 = VAR_11->sock[VAR_8];
  curl_socket_t VAR_15 = VAR_11->sock[VAR_9];
  struct ftp_conn *VAR_16 = &VAR_11->proto.ftpc;
  struct pingpong *VAR_17 = &VAR_16->pp;
  int VAR_18;
  timediff_t VAR_19;
  ssize_t VAR_20;
  int VAR_21;

  *VAR_12 = VAR_7;

  VAR_19 = FUNC_3(VAR_13);
  FUNC_4(VAR_13, "Checking for server connect\n");
  if(VAR_19 < 0) {

    FUNC_2(VAR_13, "Accept timeout occurred while waiting server connect");
    return VAR_1;
  }


  if(VAR_17->cache_size && VAR_17->cache && VAR_17->cache[0] > '3') {

    FUNC_4(VAR_13, "There is negative response in cache while serv connect\n");
    FUNC_0(&VAR_20, VAR_11, &VAR_21);
    return VAR_0;
  }

  VAR_18 = FUNC_1(VAR_14, VAR_15, VAR_6, 0);


  switch(VAR_18) {
  case -1:

    FUNC_2(VAR_13, "Error while waiting for server connect");
    return VAR_0;
  case 0:
    break;
  default:

    if(VAR_18 & VAR_5) {
      FUNC_4(VAR_13, "Ready to accept data connection from server\n");
      *VAR_12 = VAR_10;
    }
    else if(VAR_18 & VAR_4) {
      FUNC_4(VAR_13, "Ctrl conn has data while waiting for data conn\n");
      FUNC_0(&VAR_20, VAR_11, &VAR_21);

      if(VAR_21/100 > 3)
        return VAR_0;

      return VAR_3;
    }

    break;
  }

  return VAR_2;
}
