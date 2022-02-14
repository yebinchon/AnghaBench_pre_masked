
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_22__ {int igExists; void* sqlLen; TYPE_4__* schema; void* numOfTags; void* numOfColumns; int meterId; } ;
struct TYPE_21__ {int name; } ;
struct TYPE_20__ {int db; } ;
struct TYPE_19__ {void* bytes; int name; int type; } ;
struct TYPE_18__ {short allocSize; char* payload; short numOfCols; short count; int payloadLen; int msgType; int fieldsInfo; scalar_t__ existsCheck; } ;
struct TYPE_17__ {TYPE_3__ cmd; } ;
struct TYPE_16__ {short bytes; int name; int type; } ;
typedef TYPE_1__ TAOS_FIELD ;
typedef int STagData ;
typedef TYPE_2__ SSqlObj ;
typedef TYPE_3__ SSqlCmd ;
typedef TYPE_4__ SSchema ;
typedef TYPE_5__ SMgmtHead ;
typedef TYPE_6__ SMeterMetaInfo ;
typedef TYPE_7__ SCreateTableMsg ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (int,short) ;
 void* FUNC_2 (short) ;
 int FUNC_3 (char*,char*,short) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_8 (TYPE_3__*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*,TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 TYPE_1__* FUNC_12 (TYPE_3__*,int) ;
 int FUNC_13 (int ,int ) ;
 TYPE_6__* FUNC_14 (TYPE_3__*,int ) ;

int FUNC_15(SSqlObj *VAR_3) {
  SCreateTableMsg *VAR_4;
  char * VAR_5, *VAR_6;
  int VAR_7 = 0;
  SSchema * VAR_8;
  int VAR_9 = 0;




  char *VAR_10 = FUNC_1(1, VAR_3->cmd.allocSize);


  FUNC_3(VAR_10, VAR_3->cmd.payload, VAR_3->cmd.allocSize);

  SSqlCmd * VAR_11 = &VAR_3->cmd;
  SMeterMetaInfo *VAR_12 = FUNC_14(VAR_11, 0);


  VAR_9 = FUNC_11(VAR_3);
  if (VAR_0 != FUNC_8(VAR_11, VAR_9)) {
    FUNC_10("%p failed to malloc for create table msg", VAR_3);
    return -1;
  }

  VAR_5 = VAR_11->payload + VAR_2;
  VAR_6 = VAR_5;

  SMgmtHead *VAR_13 = (SMgmtHead *)VAR_5;

  FUNC_13(VAR_12->name, VAR_13->db);

  VAR_5 += sizeof(SMgmtHead);

  VAR_4 = (SCreateTableMsg *)VAR_5;
  FUNC_5(VAR_4->meterId, VAR_12->name);

  VAR_4->igExists = VAR_11->existsCheck ? 1 : 0;
  VAR_4->numOfColumns = FUNC_2(VAR_11->numOfCols);
  VAR_4->numOfTags = FUNC_2(VAR_11->count);
  VAR_5 = (char *)VAR_4->schema;

  VAR_4->sqlLen = 0;
  short VAR_14 = (short)(FUNC_6(VAR_10) + 1);

  if (VAR_11->numOfCols == 0 && VAR_11->count == 0) {

    FUNC_3(VAR_5, VAR_10, sizeof(STagData));
    VAR_5 += sizeof(STagData);
  } else {

    VAR_8 = VAR_4->schema;
    for (int VAR_15 = 0; VAR_15 < VAR_11->numOfCols + VAR_11->count; ++VAR_15) {
      TAOS_FIELD *VAR_16 = FUNC_12(VAR_11, VAR_15);

      VAR_8->type = VAR_16->type;
      FUNC_5(VAR_8->name, VAR_16->name);
      VAR_8->bytes = FUNC_2(VAR_16->bytes);
      VAR_8++;
    }

    VAR_5 = (char *)VAR_8;


    if (VAR_14 > 1) {
      FUNC_3(VAR_5, VAR_10, VAR_14);
      VAR_5[VAR_14 - 1] = 0;

      VAR_4->sqlLen = FUNC_2(VAR_14);
      VAR_5 += VAR_14;
    }
  }

  FUNC_7(VAR_10);
  FUNC_9(&VAR_11->fieldsInfo);

  VAR_7 = VAR_5 - VAR_6;
  VAR_11->payloadLen = VAR_7;
  VAR_11->msgType = VAR_1;

  FUNC_0(VAR_7 + FUNC_4() <= VAR_9);
  return VAR_7;
}
