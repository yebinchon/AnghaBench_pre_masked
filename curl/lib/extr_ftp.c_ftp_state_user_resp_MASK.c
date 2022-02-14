
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ftp_conn {scalar_t__ state; int pp; } ;
struct TYPE_6__ {struct ftp_conn ftpc; } ;
struct connectdata {struct Curl_easy* data; TYPE_2__ proto; } ;
struct FTP {char* passwd; } ;
struct TYPE_8__ {scalar_t__ ftp_trying_alternative; } ;
struct TYPE_7__ {char** str; } ;
struct TYPE_5__ {struct FTP* protop; } ;
struct Curl_easy {TYPE_4__ state; TYPE_3__ set; TYPE_1__ req; } ;
typedef int ftpstate ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,char*,char*) ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct Curl_easy*,char*,...) ;
 int FUNC_2 (struct connectdata*) ;
 int FUNC_3 (struct connectdata*,scalar_t__) ;

__attribute__((used)) static CURLcode FUNC_4(struct connectdata *VAR_8,
                                    int VAR_9,
                                    ftpstate VAR_10)
{
  CURLcode VAR_11 = VAR_1;
  struct Curl_easy *VAR_12 = VAR_8->data;
  struct FTP *VAR_13 = VAR_12->req.protop;
  struct ftp_conn *VAR_14 = &VAR_8->proto.ftpc;
  (void)VAR_10;


  if((VAR_9 == 331) && (VAR_14->state == VAR_4)) {


    FUNC_0(&VAR_14->pp, "PASS %s", VAR_13->passwd?VAR_13->passwd:"");
    FUNC_3(VAR_8, VAR_3);
  }
  else if(VAR_9/100 == 2) {


    VAR_11 = FUNC_2(VAR_8);
  }
  else if(VAR_9 == 332) {
    if(VAR_12->set.str[VAR_5]) {
      FUNC_0(&VAR_14->pp, "ACCT %s", VAR_12->set.str[VAR_5]);
      FUNC_3(VAR_8, VAR_2);
    }
    else {
      FUNC_1(VAR_12, "ACCT requested but none available");
      VAR_11 = VAR_0;
    }
  }
  else {





    if(VAR_8->data->set.str[VAR_6] &&
        !VAR_8->data->state.ftp_trying_alternative) {

      FUNC_0(&VAR_8->proto.ftpc.pp, "%s",
              VAR_8->data->set.str[VAR_6]);
      VAR_8->data->state.ftp_trying_alternative = VAR_7;
      FUNC_3(VAR_8, VAR_4);
      VAR_11 = VAR_1;
    }
    else {
      FUNC_1(VAR_12, "Access denied: %03d", VAR_9);
      VAR_11 = VAR_0;
    }
  }
  return VAR_11;
}
