
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int tVariant ;
struct TYPE_10__ {scalar_t__ numParams; int * params; } ;
struct TYPE_9__ {size_t n; scalar_t__ type; int member_0; } ;
struct TYPE_8__ {TYPE_1__* pSql; TYPE_4__ normal; } ;
struct TYPE_7__ {char* sqlstr; } ;
typedef TYPE_2__ STscStmt ;
typedef TYPE_3__ SSQLToken ;
typedef TYPE_4__ SNormalStmt ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (TYPE_4__*,int,char*,size_t) ;
 size_t FUNC_2 (char*,scalar_t__*) ;

__attribute__((used)) static int FUNC_3(STscStmt* VAR_3) {
  SNormalStmt* VAR_4 = &VAR_3->normal;
  char* VAR_5 = VAR_3->pSql->sqlstr;
  uint32_t VAR_6 = 0, VAR_7 = 0;

  while (VAR_5[VAR_6] != 0) {
    SSQLToken VAR_8 = {0};
    VAR_8.n = FUNC_2(VAR_5 + VAR_6, &VAR_8.type);

    if (VAR_8.type == VAR_0) {
      VAR_5[VAR_6] = 0;
      if (VAR_6 > VAR_7) {
        int VAR_9 = FUNC_1(VAR_4, 0, VAR_5 + VAR_7, VAR_6 - VAR_7);
        if (VAR_9 != VAR_2) {
          return VAR_9;
        }
      }
      int VAR_10 = FUNC_1(VAR_4, 1, ((void*)0), 0);
      if (VAR_10 != VAR_2) {
        return VAR_10;
      }
      VAR_7 = VAR_6 + VAR_8.n;
    }

    VAR_6 += VAR_8.n;
  }

  if (VAR_6 > VAR_7) {
    int VAR_11 = FUNC_1(VAR_4, 0, VAR_5 + VAR_7, VAR_6 - VAR_7);
    if (VAR_11 != VAR_2) {
      return VAR_11;
    }
  }

  if (VAR_4->numParams > 0) {
    VAR_4->params = FUNC_0(VAR_4->numParams, sizeof(tVariant));
    if (VAR_4->params == ((void*)0)) {
      return VAR_1;
    }
  }

  return VAR_2;
}
