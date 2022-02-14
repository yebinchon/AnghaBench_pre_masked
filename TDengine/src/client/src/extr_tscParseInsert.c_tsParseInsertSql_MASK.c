
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_13__ {scalar_t__ type; int n; char* z; } ;
struct TYPE_10__ {int order; } ;
struct TYPE_12__ {int payload; TYPE_2__ order; } ;
struct TYPE_11__ {TYPE_4__ cmd; TYPE_1__* pTscObj; } ;
struct TYPE_9__ {int writeAuth; } ;
typedef TYPE_3__ SSqlObj ;
typedef TYPE_4__ SSqlCmd ;
typedef TYPE_5__ SSQLToken ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int ,char*) ;
 TYPE_5__ FUNC_2 (char*,int*,int,int ,int *) ;
 int FUNC_3 (TYPE_3__*,char*,char*,char*) ;

int FUNC_4(SSqlObj *VAR_6, char *VAR_7, char *VAR_8, char *VAR_9) {
  if (!VAR_6->pTscObj->writeAuth) {
    return VAR_4;
  }

  int32_t VAR_10 = 0;
  SSqlCmd *VAR_11 = &VAR_6->cmd;

  SSQLToken VAR_12 = FUNC_2(VAR_7, &VAR_10, 0, 0, ((void*)0));
  if (VAR_12.type == VAR_0) {
      VAR_11->order.order = VAR_5;
  } else if (VAR_12.type != VAR_1) {
    if (VAR_12.n) {
      VAR_12.z[VAR_12.n] = 0;
      FUNC_0(VAR_11->payload, "invalid keyword:%s", VAR_12.z);
    } else {
      FUNC_1(VAR_11->payload, "no any keywords");
    }
    return VAR_3;
  }

  VAR_12 = FUNC_2(VAR_7, &VAR_10, 0, 0, ((void*)0));
  if (VAR_12.type != VAR_2) {
    FUNC_1(VAR_11->payload, "keyword INTO is expected");
    return VAR_3;
  }

  return FUNC_3(VAR_6, VAR_7 + VAR_10, VAR_8, VAR_9);
}
