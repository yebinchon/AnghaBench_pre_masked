
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_17__ {int nType; char* pz; int nLen; int wpz; int dKey; int i64Key; } ;
typedef TYPE_1__ tVariant ;
struct TYPE_21__ {scalar_t__ numParts; TYPE_1__* params; TYPE_4__* parts; } ;
struct TYPE_20__ {int len; int str; int isParam; } ;
struct TYPE_19__ {int member_0; } ;
struct TYPE_18__ {TYPE_5__ normal; } ;
typedef TYPE_2__ STscStmt ;
typedef TYPE_3__ SStringBuilder ;
typedef TYPE_4__ SNormalStmtPart ;
typedef TYPE_5__ SNormalStmt ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,int ,int ) ;
 int FUNC_2 (TYPE_3__*,char) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int ,int ) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*,int) ;
 char* FUNC_9 (TYPE_3__*,int *) ;
 scalar_t__ FUNC_10 (TYPE_3__*) ;

__attribute__((used)) static char* FUNC_11(STscStmt* VAR_0) {
  SNormalStmt* VAR_1 = &VAR_0->normal;
  SStringBuilder VAR_2 = {0};

  if (FUNC_10(&VAR_2) != 0) {
    FUNC_7(&VAR_2);
    return ((void*)0);
  }

  FUNC_8(&VAR_2, 4096);
  uint32_t VAR_3 = 0;

  for(uint16_t VAR_4 = 0; VAR_4 < VAR_1->numParts; VAR_4++) {
    SNormalStmtPart* VAR_5 = VAR_1->parts + VAR_4;
    if (!VAR_5->isParam) {
      FUNC_6(&VAR_2, VAR_5->str, VAR_5->len);
      continue;
    }

    tVariant* VAR_6 = VAR_1->params + VAR_3++;
    switch (VAR_6->nType)
    {
    case 130:
      FUNC_5(&VAR_2);
      break;

    case 135:
    case 128:
    case 129:
    case 132:
    case 137:
      FUNC_4(&VAR_2, VAR_6->i64Key);
      break;

    case 133:
    case 134:
      FUNC_3(&VAR_2, VAR_6->dKey);
      break;

    case 136:
      FUNC_2(&VAR_2, '\'');
      for (char* VAR_7 = VAR_6->pz; *VAR_7 != 0; ++VAR_7) {
        if (*VAR_7 == '\'' || *VAR_7 == '"') {
          FUNC_2(&VAR_2, '\\');
        }
        FUNC_2(&VAR_2, *VAR_7);
      }
      FUNC_2(&VAR_2, '\'');
      break;

    case 131:
      FUNC_2(&VAR_2, '\'');
      FUNC_1(&VAR_2, VAR_6->wpz, VAR_6->nLen);
      FUNC_2(&VAR_2, '\'');
      break;

    default:
      FUNC_0(0);
      break;
    }
  }

  return FUNC_9(&VAR_2, ((void*)0));
}
