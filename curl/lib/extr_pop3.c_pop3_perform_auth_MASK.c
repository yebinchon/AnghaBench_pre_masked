
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pop3_conn {int pp; } ;
struct TYPE_2__ {struct pop3_conn pop3c; } ;
struct connectdata {TYPE_1__ proto; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,char const*,...) ;

__attribute__((used)) static CURLcode FUNC_1(struct connectdata *VAR_1,
                                  const char *VAR_2,
                                  const char *VAR_3)
{
  CURLcode VAR_4 = VAR_0;
  struct pop3_conn *VAR_5 = &VAR_1->proto.pop3c;

  if(VAR_3) {

    VAR_4 = FUNC_0(&VAR_5->pp, "AUTH %s %s", VAR_2, VAR_3);
  }
  else {

    VAR_4 = FUNC_0(&VAR_5->pp, "AUTH %s", VAR_2);
  }

  return VAR_4;
}
