
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int resetprefs; } ;
struct smtp_conn {TYPE_2__ sasl; } ;
struct TYPE_3__ {struct smtp_conn smtpc; } ;
struct connectdata {char* options; TYPE_1__ proto; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,char const*,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (char const*,char*,int) ;

__attribute__((used)) static CURLcode FUNC_2(struct connectdata *VAR_3)
{
  CURLcode VAR_4 = VAR_0;
  struct smtp_conn *VAR_5 = &VAR_3->proto.smtpc;
  const char *VAR_6 = VAR_3->options;

  VAR_5->sasl.resetprefs = VAR_2;

  while(!VAR_4 && VAR_6 && *VAR_6) {
    const char *VAR_7 = VAR_6;
    const char *VAR_8;

    while(*VAR_6 && *VAR_6 != '=')
      VAR_6++;

    VAR_8 = VAR_6 + 1;

    while(*VAR_6 && *VAR_6 != ';')
      VAR_6++;

    if(FUNC_1(VAR_7, "AUTH=", 5))
      VAR_4 = FUNC_0(&VAR_5->sasl,
                                               VAR_8, VAR_6 - VAR_8);
    else
      VAR_4 = VAR_1;

    if(*VAR_6 == ';')
      VAR_6++;
  }

  return VAR_4;
}
