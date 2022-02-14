
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ftp_conn {size_t state; } ;
struct TYPE_2__ {struct ftp_conn ftpc; } ;
struct connectdata {int data; TYPE_1__ proto; } ;
typedef size_t ftpstate ;


 int * VAR_0 ;
 int FUNC_0 (int ,char*,void*,int,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct connectdata *VAR_1,
                   ftpstate VAR_2



  )
{
  struct ftp_conn *VAR_3 = &VAR_1->proto.ftpc;
  VAR_3->state = VAR_2;
}
