
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pop3_conn {int pp; } ;
struct TYPE_2__ {struct pop3_conn pop3c; } ;
struct connectdata {TYPE_1__ proto; } ;
typedef int CURLcode ;


 int FUNC_0 (int *,char*,char const*) ;

__attribute__((used)) static CURLcode FUNC_1(struct connectdata *VAR_0,
                                   const char *VAR_1)
{
  struct pop3_conn *VAR_2 = &VAR_0->proto.pop3c;

  return FUNC_0(&VAR_2->pp, "%s", VAR_1);
}
