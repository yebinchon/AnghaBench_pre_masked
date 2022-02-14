
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pingpong {int dummy; } ;
struct ftp_conn {int * server_os; int * prevpath; int * entrypath; int ctl_valid; struct pingpong pp; } ;
struct TYPE_3__ {struct ftp_conn ftpc; } ;
struct connectdata {struct Curl_easy* data; TYPE_1__ proto; } ;
struct TYPE_4__ {int * most_recent_ftp_entrypath; } ;
struct Curl_easy {TYPE_2__ state; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int FUNC_0 (struct pingpong*) ;
 int FUNC_1 (struct connectdata*) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ftp_conn*) ;
 int FUNC_4 (struct connectdata*) ;

__attribute__((used)) static CURLcode FUNC_5(struct connectdata *VAR_2, bool VAR_3)
{
  struct ftp_conn *VAR_4 = &VAR_2->proto.ftpc;
  struct pingpong *VAR_5 = &VAR_4->pp;
  if(VAR_3)
    VAR_4->ctl_valid = VAR_1;


  (void)FUNC_4(VAR_2);

  if(VAR_4->entrypath) {
    struct Curl_easy *VAR_6 = VAR_2->data;
    if(VAR_6->state.most_recent_ftp_entrypath == VAR_4->entrypath) {
      VAR_6->state.most_recent_ftp_entrypath = ((void*)0);
    }
    FUNC_2(VAR_4->entrypath);
    VAR_4->entrypath = ((void*)0);
  }

  FUNC_3(VAR_4);
  FUNC_2(VAR_4->prevpath);
  VAR_4->prevpath = ((void*)0);
  FUNC_2(VAR_4->server_os);
  VAR_4->server_os = ((void*)0);

  FUNC_0(VAR_5);





  return VAR_0;
}
