
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pp; } ;
struct TYPE_4__ {TYPE_1__ smtpc; } ;
struct connectdata {TYPE_2__ proto; } ;
typedef int CURLcode ;


 int FUNC_0 (int *,char*,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct connectdata*,int ) ;

__attribute__((used)) static CURLcode FUNC_2(struct connectdata *VAR_1)
{

  CURLcode VAR_2 = FUNC_0(&VAR_1->proto.smtpc.pp, "%s", "STARTTLS");

  if(!VAR_2)
    FUNC_1(VAR_1, VAR_0);

  return VAR_2;
}
