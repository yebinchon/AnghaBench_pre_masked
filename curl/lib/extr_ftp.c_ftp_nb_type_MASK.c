
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ftp_conn {char transfertype; int pp; } ;
struct TYPE_2__ {struct ftp_conn ftpc; } ;
struct connectdata {TYPE_1__ proto; } ;
typedef int ftpstate ;
typedef int CURLcode ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,char) ;
 int FUNC_1 (struct connectdata*,int,int ) ;
 int FUNC_2 (struct connectdata*,int ) ;

__attribute__((used)) static CURLcode FUNC_3(struct connectdata *VAR_1,
                            bool VAR_2, ftpstate VAR_3)
{
  struct ftp_conn *VAR_4 = &VAR_1->proto.ftpc;
  CURLcode VAR_5;
  char VAR_6 = (char)(VAR_2?'A':'I');

  if(VAR_4->transfertype == VAR_6) {
    FUNC_2(VAR_1, VAR_3);
    return FUNC_1(VAR_1, 200, VAR_3);
  }

  FUNC_0(&VAR_4->pp, "TYPE %c", VAR_6);
  FUNC_2(VAR_1, VAR_3);


  VAR_4->transfertype = VAR_6;
  return VAR_0;
}
