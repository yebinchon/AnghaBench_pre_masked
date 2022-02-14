
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_10__ {int member_0; } ;
struct TYPE_9__ {int sqlstr; int cmd; int * fp; int * fetchFp; } ;
typedef TYPE_1__ SSqlObj ;
typedef TYPE_2__ SSqlInfo ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_1__*,int ,char*,char*) ;
 int FUNC_4 (int *,int ) ;
 int * VAR_2 ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (TYPE_1__*,TYPE_2__*) ;

int FUNC_9(SSqlObj *VAR_3, char *VAR_4, char *VAR_5, bool VAR_6) {
  int32_t VAR_7 = VAR_0;


  FUNC_7(&VAR_3->cmd, 0);
  FUNC_5(&VAR_3->cmd);

  if (FUNC_6(VAR_3->sqlstr)) {





    if (VAR_3->fp != ((void*)0) && VAR_6) {
      FUNC_1(VAR_3->fetchFp == ((void*)0));
      VAR_3->fetchFp = VAR_3->fp;


      VAR_3->fp = VAR_2;
    }

    VAR_7 = FUNC_3(VAR_3, VAR_3->sqlstr, VAR_4, VAR_5);
  } else {
    VAR_7 = FUNC_4(&VAR_3->cmd, VAR_1);
    if (VAR_0 != VAR_7) return VAR_7;

    SSqlInfo VAR_8 = {0};
    FUNC_2(&VAR_8, VAR_3->sqlstr);

    VAR_7 = FUNC_8(VAR_3, &VAR_8);
    FUNC_0(&VAR_8);
  }
  return VAR_7;
}
