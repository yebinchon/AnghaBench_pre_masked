
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef size_t int32_t ;
struct TYPE_17__ {char* name; } ;
struct TYPE_16__ {size_t n; char* z; int type; } ;
struct TYPE_15__ {scalar_t__ count; char* payload; scalar_t__ allocSize; int payloadLen; int command; } ;
struct TYPE_14__ {TYPE_2__ cmd; } ;
typedef TYPE_1__ SSqlObj ;
typedef TYPE_2__ SSqlCmd ;
typedef TYPE_3__ SSQLToken ;
typedef TYPE_4__ SMeterMetaInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,char*,int) ;
 char* FUNC_1 (char*,size_t) ;
 int FUNC_2 (TYPE_1__*,TYPE_3__*,int ) ;
 scalar_t__ FUNC_3 (char*,char*,...) ;
 char* FUNC_4 (char*,char) ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int *) ;
 TYPE_4__* FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,size_t) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*,int) ;
 int FUNC_12 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_13(SSqlObj *VAR_7, const char* VAR_8, int32_t VAR_9) {

  FUNC_11(&VAR_7->cmd, 0);
  FUNC_10(&VAR_7->cmd);

  SSqlCmd *VAR_10 = &VAR_7->cmd;

  VAR_10->command = VAR_6;
  VAR_10->count = 0;

  int VAR_11 = VAR_2;
  char *VAR_12 = (char*) VAR_8;

  SMeterMetaInfo *VAR_13 = FUNC_8(VAR_10);

  if ((VAR_11 = FUNC_9(VAR_10, VAR_9+16)) != VAR_3) {
    return VAR_11;
  }

  char *VAR_14;
  char VAR_15[VAR_4];
  int VAR_16 = 0;
  char *VAR_17 = VAR_10->payload;
  while (1) {
    VAR_14 = FUNC_4(VAR_12, ',');
    if (VAR_14 == ((void*)0)) {
      break;
    }

    FUNC_0(VAR_15, VAR_12, VAR_14 - VAR_12);
    int32_t VAR_18 = VAR_14 - VAR_12;
    VAR_15[VAR_18] = '\0';

    VAR_12 = VAR_14 + 1;

    FUNC_6(VAR_15);
    VAR_18 = (uint32_t)FUNC_5(VAR_15);

    SSQLToken VAR_19 = {.n = VAR_18, .type = VAR_0, .z = VAR_15};
    FUNC_7(VAR_15, &VAR_19.type);


    if (FUNC_12(&VAR_19) != VAR_3) {
      VAR_11 = VAR_2;
      FUNC_3(VAR_10->payload, "table name is invalid");
      return VAR_11;
    }

    if ((VAR_11 = FUNC_2(VAR_7, &VAR_19, 0)) != VAR_3) {
      return VAR_11;
    }

    if (++VAR_10->count > VAR_5) {
      VAR_11 = VAR_2;
      FUNC_3(VAR_10->payload, "tables over the max number");
      return VAR_11;
    }

    if (VAR_16 + FUNC_5(VAR_13->name) + 128 >= VAR_10->allocSize) {
      char *VAR_20 = FUNC_1(VAR_10->payload, VAR_10->allocSize + VAR_9);
      if (VAR_20 == ((void*)0)) {
        VAR_11 = VAR_1;
        FUNC_3(VAR_10->payload, "failed to allocate memory");
        return VAR_11;
      }

      VAR_10->payload = VAR_20;
      VAR_10->allocSize = VAR_10->allocSize + VAR_9;
      VAR_17 = VAR_10->payload;
    }

    VAR_16 += FUNC_3(VAR_17 + VAR_16, "%s,", VAR_13->name);
  }

  *(VAR_17 + VAR_16) = '\0';
  VAR_10->payloadLen = VAR_16 + 1;

  return VAR_3;
}
