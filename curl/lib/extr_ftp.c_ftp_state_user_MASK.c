
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int pp; } ;
struct TYPE_8__ {TYPE_2__ ftpc; } ;
struct connectdata {TYPE_5__* data; TYPE_3__ proto; } ;
struct FTP {char* user; } ;
struct TYPE_9__ {int ftp_trying_alternative; } ;
struct TYPE_6__ {struct FTP* protop; } ;
struct TYPE_10__ {TYPE_4__ state; TYPE_1__ req; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,char*) ;
 int FUNC_1 (struct connectdata*,int ) ;

__attribute__((used)) static CURLcode FUNC_2(struct connectdata *VAR_3)
{
  CURLcode VAR_4;
  struct FTP *VAR_5 = VAR_3->data->req.protop;

  FUNC_0(&VAR_3->proto.ftpc.pp, "USER %s", VAR_5->user?VAR_5->user:"");

  FUNC_1(VAR_3, VAR_2);
  VAR_3->data->state.ftp_trying_alternative = VAR_1;

  return VAR_0;
}
