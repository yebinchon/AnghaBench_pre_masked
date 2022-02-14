
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ftp_conn {scalar_t__ file; int pp; } ;
struct TYPE_3__ {struct ftp_conn ftpc; } ;
struct connectdata {TYPE_1__ proto; struct Curl_easy* data; } ;
struct TYPE_4__ {scalar_t__ timecondition; scalar_t__ get_filetime; } ;
struct Curl_easy {TYPE_2__ set; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,scalar_t__) ;
 int FUNC_1 (struct connectdata*) ;
 int FUNC_2 (struct connectdata*,int ) ;

__attribute__((used)) static CURLcode FUNC_3(struct connectdata *VAR_2)
{
  CURLcode VAR_3 = VAR_0;
  struct Curl_easy *VAR_4 = VAR_2->data;
  struct ftp_conn *VAR_5 = &VAR_2->proto.ftpc;


  if((VAR_4->set.get_filetime || VAR_4->set.timecondition) && VAR_5->file) {



    FUNC_0(&VAR_5->pp, "MDTM %s", VAR_5->file);

    FUNC_2(VAR_2, VAR_1);
  }
  else
    VAR_3 = FUNC_1(VAR_2);

  return VAR_3;
}
