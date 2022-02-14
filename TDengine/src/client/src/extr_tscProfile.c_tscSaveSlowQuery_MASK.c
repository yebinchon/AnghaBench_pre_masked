
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_6__ {scalar_t__ const useconds; } ;
struct TYPE_8__ {char* sqlstr; TYPE_2__* pTscObj; TYPE_1__ res; int stime; } ;
struct TYPE_7__ {char* user; } ;
typedef TYPE_3__ SSqlObj ;


 int VAR_0 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (char*,int,char*,char*,...) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int ,int,char*,int ) ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (char*,TYPE_3__*,scalar_t__ const,char*) ;

void FUNC_5(SSqlObj *VAR_4) {
  const static int64_t VAR_5 = 3000000L;
  if (VAR_4->res.useconds < VAR_5) return;

  FUNC_4("%p query time:%lld sql:%s", VAR_4, VAR_4->res.useconds, VAR_4->sqlstr);

  char *VAR_6 = FUNC_0(200);
  int VAR_7 = FUNC_1(VAR_6, 200, "insert into %s.slowquery values(now, '%s', %lld, %lld, '", VAR_1,
          VAR_4->pTscObj->user, VAR_4->stime, VAR_4->res.useconds);
  int VAR_8 = FUNC_1(VAR_6 + VAR_7, VAR_0, "%s", VAR_4->sqlstr);
  if (VAR_8 > VAR_0 - 1) {
    VAR_8 = VAR_7 + VAR_0 - 1;
  } else {
    VAR_8 += VAR_7;
  }
  FUNC_2(VAR_6 + VAR_8, "')");

  FUNC_3(VAR_2, 200, VAR_6, VAR_3);
}
