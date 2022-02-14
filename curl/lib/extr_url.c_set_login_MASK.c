
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int user_passwd; } ;
struct connectdata {void* passwd; void* user; TYPE_2__ bits; TYPE_1__* handler; } ;
struct TYPE_3__ {int flags; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (char const*) ;

__attribute__((used)) static CURLcode FUNC_1(struct connectdata *VAR_5)
{
  CURLcode VAR_6 = VAR_0;
  const char *VAR_7 = VAR_3;
  const char *VAR_8 = VAR_2;


  if((VAR_5->handler->flags & VAR_4) && !VAR_5->bits.user_passwd)
    ;
  else {
    VAR_7 = "";
    VAR_8 = "";
  }

  if(!VAR_5->user) {
    VAR_5->user = FUNC_0(VAR_7);
    if(!VAR_5->user)
      return VAR_1;
  }


  if(!VAR_5->passwd) {
    VAR_5->passwd = FUNC_0(VAR_8);
    if(!VAR_5->passwd)
      VAR_6 = VAR_1;
  }

  return VAR_6;
}
