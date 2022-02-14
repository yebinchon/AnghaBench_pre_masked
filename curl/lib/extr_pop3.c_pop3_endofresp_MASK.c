
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pop3_conn {scalar_t__ state; } ;
struct TYPE_2__ {struct pop3_conn pop3c; } ;
struct connectdata {TYPE_1__ proto; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static bool FUNC_1(struct connectdata *VAR_3, char *VAR_4, size_t VAR_5,
                           int *VAR_6)
{
  struct pop3_conn *VAR_7 = &VAR_3->proto.pop3c;


  if(VAR_5 >= 4 && !FUNC_0("-ERR", VAR_4, 4)) {
    *VAR_6 = '-';

    return VAR_2;
  }


  if(VAR_7->state == VAR_1) {

    if(VAR_5 >= 1 && VAR_4[0] == '.')

      *VAR_6 = '+';
    else

      *VAR_6 = '*';

    return VAR_2;
  }


  if(VAR_5 >= 3 && !FUNC_0("+OK", VAR_4, 3)) {
    *VAR_6 = '+';

    return VAR_2;
  }


  if(VAR_5 >= 1 && VAR_4[0] == '+') {
    *VAR_6 = '*';

    return VAR_2;
  }

  return VAR_0;
}
