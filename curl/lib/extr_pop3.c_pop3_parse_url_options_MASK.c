
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int prefmech; int resetprefs; } ;
struct pop3_conn {scalar_t__ preftype; TYPE_2__ sasl; } ;
struct TYPE_3__ {struct pop3_conn pop3c; } ;
struct connectdata {char* options; TYPE_1__ proto; } ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*,char const*,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;


 int VAR_6 ;
 scalar_t__ FUNC_1 (char const*,char*,int) ;

__attribute__((used)) static CURLcode FUNC_2(struct connectdata *VAR_7)
{
  CURLcode VAR_8 = VAR_0;
  struct pop3_conn *VAR_9 = &VAR_7->proto.pop3c;
  const char *VAR_10 = VAR_7->options;

  VAR_9->sasl.resetprefs = VAR_6;

  while(!VAR_8 && VAR_10 && *VAR_10) {
    const char *VAR_11 = VAR_10;
    const char *VAR_12;

    while(*VAR_10 && *VAR_10 != '=')
        VAR_10++;

    VAR_12 = VAR_10 + 1;

    while(*VAR_10 && *VAR_10 != ';')
      VAR_10++;

    if(FUNC_1(VAR_11, "AUTH=", 5)) {
      VAR_8 = FUNC_0(&VAR_9->sasl,
                                               VAR_12, VAR_10 - VAR_12);

      if(VAR_8 && FUNC_1(VAR_12, "+APOP", VAR_10 - VAR_12)) {
        VAR_9->preftype = VAR_3;
        VAR_9->sasl.prefmech = 128;
        VAR_8 = VAR_0;
      }
    }
    else
      VAR_8 = VAR_1;

    if(*VAR_10 == ';')
      VAR_10++;
  }

  if(VAR_9->preftype != VAR_3)
    switch(VAR_9->sasl.prefmech) {
    case 128:
      VAR_9->preftype = VAR_4;
      break;
    case 129:
      VAR_9->preftype = VAR_2;
      break;
    default:
      VAR_9->preftype = VAR_5;
      break;
    }

  return VAR_8;
}
