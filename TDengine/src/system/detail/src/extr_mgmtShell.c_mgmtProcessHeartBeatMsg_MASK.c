
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int numOfIps; int ip; } ;
struct TYPE_11__ {int thandle; int killConnection; scalar_t__ streamId; scalar_t__ queryId; } ;
struct TYPE_8__ {int numOfIps; int ip; } ;
struct TYPE_10__ {TYPE_1__ ipList; int killConnection; scalar_t__ streamId; scalar_t__ queryId; } ;
struct TYPE_9__ {scalar_t__ more; scalar_t__ code; } ;
typedef TYPE_2__ STaosRsp ;
typedef TYPE_3__ SHeartBeatRsp ;
typedef TYPE_4__ SConnObj ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (char*,int,TYPE_4__*) ;
 TYPE_5__* VAR_1 ;
 char* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,char*,int) ;

int FUNC_4(char *VAR_2, int VAR_3, SConnObj *VAR_4) {
  char * VAR_5, *VAR_6;
  int VAR_7;
  STaosRsp *VAR_8;

  FUNC_1(VAR_2, VAR_3, VAR_4);

  VAR_5 = FUNC_2(VAR_4->thandle, VAR_0, 128);
  if (VAR_5 == ((void*)0)) return 0;
  VAR_6 = VAR_5;
  VAR_8 = (STaosRsp *)VAR_6;
  VAR_8->code = 0;
  VAR_6 = (char *)VAR_8->more;

  SHeartBeatRsp *VAR_9 = (SHeartBeatRsp *)VAR_8->more;
  VAR_9->queryId = VAR_4->queryId;
  VAR_4->queryId = 0;
  VAR_9->streamId = VAR_4->streamId;
  VAR_9->streamId = VAR_4->streamId;
  VAR_4->streamId = 0;
  VAR_9->killConnection = VAR_4->killConnection;







  VAR_6 += sizeof(SHeartBeatRsp);

  VAR_7 = VAR_6 - VAR_5;

  FUNC_3(VAR_4->thandle, VAR_5, VAR_7);

  return 0;
}
