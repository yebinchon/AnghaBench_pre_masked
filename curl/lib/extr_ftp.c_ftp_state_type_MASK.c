
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ftp_conn {scalar_t__ file; } ;
struct TYPE_4__ {struct ftp_conn ftpc; } ;
struct connectdata {TYPE_1__ proto; struct Curl_easy* data; } ;
struct FTP {int transfer; } ;
struct TYPE_5__ {int prefer_ascii; scalar_t__ opt_no_body; } ;
struct TYPE_6__ {struct FTP* protop; } ;
struct Curl_easy {TYPE_2__ set; TYPE_3__ req; } ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct connectdata*,int ,int ) ;
 scalar_t__ FUNC_1 (struct connectdata*,int ) ;
 scalar_t__ FUNC_2 (struct connectdata*) ;

__attribute__((used)) static CURLcode FUNC_3(struct connectdata *VAR_3)
{
  CURLcode VAR_4 = VAR_0;
  struct FTP *VAR_5 = VAR_3->data->req.protop;
  struct Curl_easy *VAR_6 = VAR_3->data;
  struct ftp_conn *VAR_7 = &VAR_3->proto.ftpc;




  if(VAR_6->set.opt_no_body && VAR_7->file &&
     FUNC_1(VAR_3, VAR_6->set.prefer_ascii)) {




    VAR_5->transfer = VAR_1;




    VAR_4 = FUNC_0(VAR_3, VAR_6->set.prefer_ascii, VAR_2);
    if(VAR_4)
      return VAR_4;
  }
  else
    VAR_4 = FUNC_2(VAR_3);

  return VAR_4;
}
