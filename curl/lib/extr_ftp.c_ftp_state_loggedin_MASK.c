
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int pp; } ;
struct TYPE_6__ {TYPE_2__ ftpc; } ;
struct connectdata {TYPE_3__ proto; TYPE_1__* ssl; } ;
struct TYPE_4__ {scalar_t__ use; } ;
typedef int CURLcode ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (struct connectdata*) ;
 int FUNC_2 (struct connectdata*,int ) ;

__attribute__((used)) static CURLcode FUNC_3(struct connectdata *VAR_3)
{
  CURLcode VAR_4 = VAR_0;

  if(VAR_3->ssl[VAR_1].use) {
    FUNC_0(&VAR_3->proto.ftpc.pp, "PBSZ %d", 0);
    FUNC_2(VAR_3, VAR_2);
  }
  else {
    VAR_4 = FUNC_1(VAR_3);
  }
  return VAR_4;
}
