
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ftp_conn {int count1; } ;
struct TYPE_3__ {int ftp_use_eprt; } ;
struct TYPE_4__ {struct ftp_conn ftpc; } ;
struct connectdata {TYPE_1__ bits; TYPE_2__ proto; struct Curl_easy* data; } ;
struct Curl_easy {int dummy; } ;
typedef scalar_t__ ftpport ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct Curl_easy*,char*) ;
 int FUNC_1 (struct connectdata*,int ) ;
 int FUNC_2 (struct connectdata*,scalar_t__) ;
 int FUNC_3 (struct Curl_easy*,char*) ;
 int FUNC_4 (struct connectdata*,int ) ;

__attribute__((used)) static CURLcode FUNC_5(struct connectdata *VAR_6,
                                    int VAR_7)
{
  struct Curl_easy *VAR_8 = VAR_6->data;
  struct ftp_conn *VAR_9 = &VAR_6->proto.ftpc;
  ftpport VAR_10 = (ftpport)VAR_9->count1;
  CURLcode VAR_11 = VAR_1;



  if(VAR_7 / 100 != 2) {


    if(VAR_3 == VAR_10) {
      FUNC_3(VAR_8, "disabling EPRT usage\n");
      VAR_6->bits.ftp_use_eprt = VAR_4;
    }
    VAR_10++;

    if(VAR_10 == VAR_2) {
      FUNC_0(VAR_8, "Failed to do PORT");
      VAR_11 = VAR_0;
    }
    else

      VAR_11 = FUNC_2(VAR_6, VAR_10);
  }
  else {
    FUNC_3(VAR_8, "Connect data stream actively\n");
    FUNC_4(VAR_6, VAR_5);
    VAR_11 = FUNC_1(VAR_6, VAR_4);
  }

  return VAR_11;
}
