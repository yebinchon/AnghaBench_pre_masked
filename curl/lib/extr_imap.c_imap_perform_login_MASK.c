
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int user_passwd; } ;
struct connectdata {int passwd; int user; TYPE_1__ bits; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int ,int) ;
 int FUNC_2 (struct connectdata*,char*,char*,char*) ;
 int FUNC_3 (struct connectdata*,int ) ;

__attribute__((used)) static CURLcode FUNC_4(struct connectdata *VAR_3)
{
  CURLcode VAR_4 = VAR_0;
  char *VAR_5;
  char *VAR_6;



  if(!VAR_3->bits.user_passwd) {
    FUNC_3(VAR_3, VAR_2);

    return VAR_4;
  }


  VAR_5 = FUNC_1(VAR_3->user, 0);
  VAR_6 = FUNC_1(VAR_3->passwd, 0);


  VAR_4 = FUNC_2(VAR_3, "LOGIN %s %s", VAR_5 ? VAR_5 : "",
                      VAR_6 ? VAR_6 : "");

  FUNC_0(VAR_5);
  FUNC_0(VAR_6);

  if(!VAR_4)
    FUNC_3(VAR_3, VAR_1);

  return VAR_4;
}
