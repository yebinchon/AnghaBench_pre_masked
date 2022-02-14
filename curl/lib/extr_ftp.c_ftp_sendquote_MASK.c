
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pingpong {int response; } ;
struct ftp_conn {struct pingpong pp; } ;
struct curl_slist {char* data; struct curl_slist* next; } ;
struct TYPE_2__ {struct ftp_conn ftpc; } ;
struct connectdata {int data; TYPE_1__ proto; } ;
typedef int ssize_t ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,struct connectdata*,int*) ;
 int FUNC_1 () ;
 int VAR_2 ;
 int FUNC_2 (struct pingpong*,char*,char*) ;
 int VAR_3 ;
 int FUNC_3 (int ,char*,char*) ;

__attribute__((used)) static
CURLcode FUNC_4(struct connectdata *VAR_4, struct curl_slist *VAR_5)
{
  struct curl_slist *VAR_6;
  ssize_t VAR_7;
  int VAR_8;
  CURLcode VAR_9;
  struct ftp_conn *VAR_10 = &VAR_4->proto.ftpc;
  struct pingpong *VAR_11 = &VAR_10->pp;

  VAR_6 = VAR_5;
  while(VAR_6) {
    if(VAR_6->data) {
      char *VAR_12 = VAR_6->data;
      bool VAR_13 = VAR_2;






      if(VAR_12[0] == '*') {
        VAR_12++;
        VAR_13 = VAR_3;
      }

      FUNC_2(&VAR_4->proto.ftpc.pp, "%s", VAR_12);

      VAR_11->response = FUNC_1();

      VAR_9 = FUNC_0(&VAR_7, VAR_4, &VAR_8);
      if(VAR_9)
        return VAR_9;

      if(!VAR_13 && (VAR_8 >= 400)) {
        FUNC_3(VAR_4->data, "QUOT string not accepted: %s", VAR_12);
        return VAR_1;
      }
    }

    VAR_6 = VAR_6->next;
  }

  return VAR_0;
}
