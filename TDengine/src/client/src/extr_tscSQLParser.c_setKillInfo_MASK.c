
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct SSqlInfo {int sqlType; TYPE_1__* pDCLInfo; } ;
typedef int int32_t ;
struct TYPE_10__ {scalar_t__ n; int * z; } ;
struct TYPE_9__ {int payload; int command; } ;
struct TYPE_8__ {TYPE_3__ cmd; } ;
struct TYPE_7__ {TYPE_4__* a; } ;
typedef TYPE_2__ SSqlObj ;
typedef TYPE_3__ SSqlCmd ;
typedef TYPE_4__ SSQLToken ;





 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_3__*,char const*) ;
 int FUNC_2 (int ,int *,scalar_t__) ;
 char* FUNC_3 (int *,char const*) ;
 int FUNC_4 (char*,int *,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;

int32_t FUNC_7(SSqlObj* VAR_6, struct SSqlInfo* VAR_7) {
  SSqlCmd* VAR_8 = &VAR_6->cmd;

  switch (VAR_7->sqlType) {
    case 129:
      VAR_8->command = VAR_4;
      break;
    case 128:
      VAR_8->command = VAR_5;
      break;
    case 130:
      VAR_8->command = VAR_3;
      break;
    default:
      return VAR_0;
  }

  SSQLToken* VAR_9 = &(VAR_7->pDCLInfo->a[0]);
  if (VAR_9->n > VAR_2) {
    return VAR_0;
  }

  FUNC_2(VAR_8->payload, VAR_9->z, VAR_9->n);

  const char VAR_10 = ':';
  char* VAR_11 = FUNC_3(VAR_9->z, &VAR_10);
  char* VAR_12 = FUNC_3(((void*)0), &VAR_10);

  if (!FUNC_6(VAR_11)) {
    FUNC_0(VAR_8->payload, 0, FUNC_5(VAR_8->payload));

    const char* VAR_13 = "invalid ip address";
    FUNC_1(VAR_8, VAR_13);
    return VAR_0;
  }

  int32_t VAR_14 = FUNC_4(VAR_12, ((void*)0), 10);
  if (VAR_14 <= 0 || VAR_14 > 65535) {
    FUNC_0(VAR_8->payload, 0, FUNC_5(VAR_8->payload));

    const char* VAR_15 = "invalid port";
    FUNC_1(VAR_8, VAR_15);
    return VAR_0;
  }

  return VAR_1;
}
