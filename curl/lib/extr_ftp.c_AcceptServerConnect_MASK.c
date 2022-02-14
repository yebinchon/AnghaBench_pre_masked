
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
struct TYPE_3__ {int do_more; } ;
struct connectdata {scalar_t__* sock; int * sock_accepted; TYPE_1__ bits; struct Curl_easy* data; } ;
struct Curl_sockaddr_storage {int dummy; } ;
struct TYPE_4__ {int (* fsockopt ) (int ,scalar_t__,int ) ;int sockopt_client; } ;
struct Curl_easy {TYPE_2__ set; } ;
typedef int curl_socklen_t ;
typedef scalar_t__ curl_socket_t ;
typedef int add ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct connectdata*,scalar_t__) ;
 int FUNC_1 (struct Curl_easy*,int) ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (scalar_t__,struct sockaddr*,int*) ;
 int FUNC_3 (struct connectdata*) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (struct Curl_easy*,char*) ;
 scalar_t__ FUNC_6 (scalar_t__,struct sockaddr*,int*) ;
 int FUNC_7 (struct Curl_easy*,char*) ;
 int FUNC_8 (int ,scalar_t__,int ) ;

__attribute__((used)) static CURLcode FUNC_9(struct connectdata *VAR_8)
{
  struct Curl_easy *VAR_9 = VAR_8->data;
  curl_socket_t VAR_10 = VAR_8->sock[VAR_6];
  curl_socket_t VAR_11 = VAR_4;



  struct sockaddr_in VAR_12;

  curl_socklen_t VAR_13 = (curl_socklen_t) sizeof(VAR_12);

  if(0 == FUNC_6(VAR_10, (struct sockaddr *) &VAR_12, &VAR_13)) {
    VAR_13 = sizeof(VAR_12);

    VAR_11 = FUNC_2(VAR_10, (struct sockaddr *) &VAR_12, &VAR_13);
  }
  FUNC_0(VAR_8, VAR_10);

  if(VAR_4 == VAR_11) {
    FUNC_5(VAR_9, "Error accept()ing server connect");
    return VAR_1;
  }
  FUNC_7(VAR_9, "Connection accepted from server\n");


  VAR_8->bits.do_more = VAR_5;

  VAR_8->sock[VAR_6] = VAR_11;
  (void)FUNC_4(VAR_11, VAR_7);
  VAR_8->sock_accepted[VAR_6] = VAR_7;

  if(VAR_9->set.fsockopt) {
    int VAR_14 = 0;


    FUNC_1(VAR_9, 1);
    VAR_14 = VAR_9->set.fsockopt(VAR_9->set.sockopt_client,
                               VAR_11,
                               VAR_3);
    FUNC_1(VAR_9, 0);

    if(VAR_14) {
      FUNC_3(VAR_8);
      return VAR_0;
    }
  }

  return VAR_2;

}
