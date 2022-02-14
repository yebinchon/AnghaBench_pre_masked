
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* authused; void* authmechs; } ;
struct pop3_conn {int pp; int tls_supported; TYPE_2__ sasl; } ;
struct TYPE_3__ {struct pop3_conn pop3c; } ;
struct connectdata {TYPE_1__ proto; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_1 (struct connectdata*,int ) ;

__attribute__((used)) static CURLcode FUNC_2(struct connectdata *VAR_4)
{
  CURLcode VAR_5 = VAR_0;
  struct pop3_conn *VAR_6 = &VAR_4->proto.pop3c;

  VAR_6->sasl.authmechs = VAR_3;
  VAR_6->sasl.authused = VAR_3;
  VAR_6->tls_supported = VAR_1;


  VAR_5 = FUNC_0(&VAR_6->pp, "%s", "CAPA");

  if(!VAR_5)
    FUNC_1(VAR_4, VAR_2);

  return VAR_5;
}
