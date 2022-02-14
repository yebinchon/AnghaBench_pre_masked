
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ftp_conn {int ctl_valid; } ;
struct TYPE_4__ {struct ftp_conn ftpc; } ;
struct connectdata {TYPE_2__ proto; struct Curl_easy* data; } ;
struct TYPE_3__ {int size; } ;
struct Curl_easy {TYPE_1__ req; } ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct Curl_easy*,int ) ;
 int FUNC_1 (struct Curl_easy*,int) ;
 int FUNC_2 (struct Curl_easy*,int ) ;
 int FUNC_3 (struct Curl_easy*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct ftp_conn*) ;
 scalar_t__ FUNC_5 (struct connectdata*,int) ;
 scalar_t__ FUNC_6 (struct connectdata*,int*,int*) ;

__attribute__((used)) static
CURLcode FUNC_7(struct connectdata *VAR_3,
                              bool *VAR_4)
{
  CURLcode VAR_5 = VAR_0;
  bool VAR_6 = VAR_1;
  struct Curl_easy *VAR_7 = VAR_3->data;
  struct ftp_conn *VAR_8 = &VAR_3->proto.ftpc;
  VAR_7->req.size = -1;

  FUNC_2(VAR_7, 0);
  FUNC_0(VAR_7, 0);
  FUNC_3(VAR_7, -1);
  FUNC_1(VAR_7, -1);

  VAR_8->ctl_valid = VAR_2;

  VAR_5 = FUNC_6(VAR_3,
                       &VAR_6,
                       VAR_4);

  if(!VAR_5) {

    if(!*VAR_4)

      return VAR_0;

    VAR_5 = FUNC_5(VAR_3, VAR_6);

    if(VAR_5)
      return VAR_5;
  }
  else
    FUNC_4(VAR_8);

  return VAR_5;
}
