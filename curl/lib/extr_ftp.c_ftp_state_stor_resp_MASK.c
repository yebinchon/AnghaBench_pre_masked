
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ftp_conn {int wait_data_conn; int state_saved; } ;
struct TYPE_4__ {struct ftp_conn ftpc; } ;
struct connectdata {TYPE_2__ proto; struct Curl_easy* data; } ;
struct TYPE_3__ {scalar_t__ ftp_use_port; } ;
struct Curl_easy {TYPE_1__ set; } ;
typedef int ftpstate ;
typedef int CURLcode ;


 int FUNC_0 (struct connectdata*,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct connectdata*) ;
 int VAR_3 ;
 int FUNC_2 (struct Curl_easy*,char*,int) ;
 int FUNC_3 (struct Curl_easy*,char*) ;
 int FUNC_4 (struct connectdata*,int ) ;

__attribute__((used)) static CURLcode FUNC_5(struct connectdata *VAR_4,
                                    int VAR_5, ftpstate VAR_6)
{
  CURLcode VAR_7 = VAR_0;
  struct Curl_easy *VAR_8 = VAR_4->data;

  if(VAR_5 >= 400) {
    FUNC_2(VAR_8, "Failed FTP upload: %0d", VAR_5);
    FUNC_4(VAR_4, VAR_2);

    return VAR_1;
  }

  VAR_4->proto.ftpc.state_saved = VAR_6;


  if(VAR_8->set.ftp_use_port) {
    bool VAR_9;

    FUNC_4(VAR_4, VAR_2);

    VAR_7 = FUNC_0(VAR_4, &VAR_9);
    if(VAR_7)
      return VAR_7;

    if(!VAR_9) {
      struct ftp_conn *VAR_10 = &VAR_4->proto.ftpc;
      FUNC_3(VAR_8, "Data conn was not available immediately\n");
      VAR_10->wait_data_conn = VAR_3;
    }

    return VAR_0;
  }
  return FUNC_1(VAR_4);
}
