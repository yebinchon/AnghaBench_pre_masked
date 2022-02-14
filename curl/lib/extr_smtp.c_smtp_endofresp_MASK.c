
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tmpline ;
struct smtp_conn {scalar_t__ state; } ;
struct TYPE_2__ {struct smtp_conn smtpc; } ;
struct connectdata {TYPE_1__ proto; } ;


 int VAR_0 ;
 int FUNC_0 (char) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,char,int) ;
 int FUNC_4 (char*,int *,int) ;

__attribute__((used)) static bool FUNC_5(struct connectdata *VAR_4, char *VAR_5, size_t VAR_6,
                           int *VAR_7)
{
  struct smtp_conn *VAR_8 = &VAR_4->proto.smtpc;
  bool VAR_9 = VAR_0;


  if(VAR_6 < 4 || !FUNC_0(VAR_5[0]) || !FUNC_0(VAR_5[1]) || !FUNC_0(VAR_5[2]))
    return VAR_0;





  if(VAR_5[3] == ' ' || VAR_6 == 5) {
    char VAR_10[6];

    VAR_9 = VAR_3;
    FUNC_3(VAR_10, '\0', sizeof(VAR_10));
    FUNC_2(VAR_10, VAR_5, (VAR_6 == 5 ? 5 : 3));
    *VAR_7 = FUNC_1(FUNC_4(VAR_10, ((void*)0), 10));


    if(*VAR_7 == 1)
      *VAR_7 = 0;
  }

  else if(VAR_5[3] == '-' &&
          (VAR_8->state == VAR_2 || VAR_8->state == VAR_1)) {
    VAR_9 = VAR_3;
    *VAR_7 = 1;
  }

  return VAR_9;
}
