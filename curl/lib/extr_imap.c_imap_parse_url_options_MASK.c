
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int prefmech; int resetprefs; } ;
struct imap_conn {int preftype; TYPE_2__ sasl; } ;
struct TYPE_3__ {struct imap_conn imapc; } ;
struct connectdata {char* options; TYPE_1__ proto; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,char const*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 scalar_t__ FUNC_1 (char const*,char*,int) ;

__attribute__((used)) static CURLcode FUNC_2(struct connectdata *VAR_6)
{
  CURLcode VAR_7 = VAR_0;
  struct imap_conn *VAR_8 = &VAR_6->proto.imapc;
  const char *VAR_9 = VAR_6->options;

  VAR_8->sasl.resetprefs = VAR_5;

  while(!VAR_7 && VAR_9 && *VAR_9) {
    const char *VAR_10 = VAR_9;
    const char *VAR_11;

    while(*VAR_9 && *VAR_9 != '=')
        VAR_9++;

    VAR_11 = VAR_9 + 1;

    while(*VAR_9 && *VAR_9 != ';')
      VAR_9++;

    if(FUNC_1(VAR_10, "AUTH=", 5))
      VAR_7 = FUNC_0(&VAR_8->sasl,
                                               VAR_11, VAR_9 - VAR_11);
    else
      VAR_7 = VAR_1;

    if(*VAR_9 == ';')
      VAR_9++;
  }

  switch(VAR_8->sasl.prefmech) {
  case 128:
    VAR_8->preftype = VAR_3;
    break;
  case 129:
    VAR_8->preftype = VAR_2;
    break;
  default:
    VAR_8->preftype = VAR_4;
    break;
  }

  return VAR_7;
}
