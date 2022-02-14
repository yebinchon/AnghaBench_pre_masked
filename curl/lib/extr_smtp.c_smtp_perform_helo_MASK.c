
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int authused; } ;
struct smtp_conn {int domain; int pp; TYPE_2__ sasl; } ;
struct TYPE_3__ {struct smtp_conn smtpc; } ;
struct connectdata {TYPE_1__ proto; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct connectdata*,int ) ;

__attribute__((used)) static CURLcode FUNC_2(struct connectdata *VAR_3)
{
  CURLcode VAR_4 = VAR_0;
  struct smtp_conn *VAR_5 = &VAR_3->proto.smtpc;

  VAR_5->sasl.authused = VAR_1;



  VAR_4 = FUNC_0(&VAR_5->pp, "HELO %s", VAR_5->domain);

  if(!VAR_4)
    FUNC_1(VAR_3, VAR_2);

  return VAR_4;
}
