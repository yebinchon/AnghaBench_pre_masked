
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int pp; } ;
struct TYPE_6__ {TYPE_2__ pop3c; } ;
struct TYPE_4__ {int user_passwd; } ;
struct connectdata {char* user; TYPE_3__ proto; TYPE_1__ bits; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct connectdata*,int ) ;

__attribute__((used)) static CURLcode FUNC_2(struct connectdata *VAR_3)
{
  CURLcode VAR_4 = VAR_0;



  if(!VAR_3->bits.user_passwd) {
    FUNC_1(VAR_3, VAR_1);

    return VAR_4;
  }


  VAR_4 = FUNC_0(&VAR_3->proto.pop3c.pp, "USER %s",
                         VAR_3->user ? VAR_3->user : "");
  if(!VAR_4)
    FUNC_1(VAR_3, VAR_2);

  return VAR_4;
}
