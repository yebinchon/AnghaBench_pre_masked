
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* authused; void* authmechs; } ;
struct smtp_conn {int domain; int pp; void* auth_supported; void* tls_supported; TYPE_2__ sasl; } ;
struct TYPE_3__ {struct smtp_conn smtpc; } ;
struct connectdata {TYPE_1__ proto; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct connectdata*,int ) ;

__attribute__((used)) static CURLcode FUNC_2(struct connectdata *VAR_4)
{
  CURLcode VAR_5 = VAR_0;
  struct smtp_conn *VAR_6 = &VAR_4->proto.smtpc;

  VAR_6->sasl.authmechs = VAR_2;
  VAR_6->sasl.authused = VAR_2;

  VAR_6->tls_supported = VAR_1;
  VAR_6->auth_supported = VAR_1;


  VAR_5 = FUNC_0(&VAR_6->pp, "EHLO %s", VAR_6->domain);

  if(!VAR_5)
    FUNC_1(VAR_4, VAR_3);

  return VAR_5;
}
