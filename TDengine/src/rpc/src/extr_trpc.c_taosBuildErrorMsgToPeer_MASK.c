
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char uint32_t ;
typedef int timeStamp ;
typedef int int32_t ;
struct TYPE_2__ {char msgType; char* meterId; int msgLen; scalar_t__ content; scalar_t__ sourceId; scalar_t__ destId; int tranId; scalar_t__ encrypt; scalar_t__ spi; scalar_t__ tcp; int version; } ;
typedef TYPE_1__ STaosHeader ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*) ;
 char FUNC_3 () ;

int FUNC_4(char *VAR_1, int VAR_2, char *VAR_3) {
  STaosHeader *VAR_4, *VAR_5;
  char * VAR_6;
  uint32_t VAR_7;
  int VAR_8;

  VAR_4 = (STaosHeader *)VAR_1;
  VAR_5 = (STaosHeader *)VAR_3;

  VAR_5->version = VAR_4->version;
  VAR_5->msgType = (char)(VAR_4->msgType + 1);
  VAR_5->tcp = 0;
  VAR_5->spi = 0;
  VAR_5->encrypt = 0;
  VAR_5->tranId = VAR_4->tranId;
  VAR_5->sourceId = 0;
  VAR_5->destId = VAR_4->sourceId;
  FUNC_1(VAR_5->meterId, VAR_4->meterId, FUNC_2(VAR_5->meterId));

  VAR_6 = (char *)VAR_5->content;
  *VAR_6 = (char)VAR_2;
  VAR_6++;

  if (VAR_2 == VAR_0) {

    VAR_7 = FUNC_3();
    FUNC_1(VAR_6, &VAR_7, sizeof(VAR_7));
    VAR_6 += sizeof(VAR_7);
  }

  VAR_8 = (int)(VAR_6 - VAR_3);
  VAR_5->msgLen = (int32_t)FUNC_0((uint32_t)VAR_8);

  return VAR_8;
}
