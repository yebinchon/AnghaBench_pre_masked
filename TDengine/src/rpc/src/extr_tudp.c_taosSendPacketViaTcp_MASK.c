
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
typedef void* int32_t ;
typedef int handleViaTcp ;
struct TYPE_9__ {scalar_t__ handle; void* msgLen; scalar_t__ port; } ;
struct TYPE_8__ {int tcp; void* msgLen; int msgType; scalar_t__ content; } ;
struct TYPE_7__ {int port; scalar_t__ pSet; } ;
struct TYPE_6__ {int label; scalar_t__ port; scalar_t__ server; } ;
typedef TYPE_1__ SUdpConnSet ;
typedef TYPE_2__ SUdpConn ;
typedef TYPE_3__ STaosHeader ;
typedef TYPE_4__ SPacketInfo ;
typedef int SHandleViaTcp ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,...) ;
 int FUNC_4 (char*,int ,...) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (char*,int ,int ) ;
 int FUNC_8 (int,char*,int) ;
 int FUNC_9 (int,short,char*,int,void*) ;
 int FUNC_10 (int,char*,int) ;
 scalar_t__ FUNC_11 (int,char*,int) ;
 int FUNC_12 (char*,int) ;
 int VAR_1 ;

int FUNC_13(uint32_t VAR_2, short VAR_3, char *VAR_4, int VAR_5, void *VAR_6) {
  SUdpConn * VAR_7 = (SUdpConn *)VAR_6;
  SUdpConnSet *VAR_8 = (SUdpConnSet *)VAR_7->pSet;
  int VAR_9 = -1, VAR_10, VAR_11;
  char VAR_12[64];
  char VAR_13[128];
  STaosHeader *VAR_14;

  if (VAR_8->server) {


    VAR_14 = (STaosHeader *)VAR_13;
    FUNC_1(VAR_14, VAR_4, sizeof(STaosHeader));
    VAR_14->tcp = 1;

    SPacketInfo *VAR_15 = (SPacketInfo *)VAR_14->content;
    VAR_15->handle = (uint64_t)VAR_4;
    VAR_15->port = (uint16_t)VAR_8->port;
    VAR_15->msgLen = VAR_14->msgLen;

    VAR_11 = sizeof(STaosHeader) + sizeof(SPacketInfo);
    VAR_14->msgLen = (int32_t)FUNC_0((uint32_t)VAR_11);
    VAR_9 = FUNC_9(VAR_2, VAR_3, VAR_13, VAR_11, VAR_6);
    FUNC_4("%s data from server will be sent via TCP:%d, msgType:%d, length:%d, handle:0x%x", VAR_8->label, VAR_15->port,
           VAR_14->msgType, FUNC_0((uint32_t)VAR_15->msgLen), VAR_15->handle);
    if (VAR_9 > 0) VAR_9 = VAR_5;
  } else {

    FUNC_4("%s data will be sent via TCP from client", VAR_8->label);


    VAR_14 = (STaosHeader *)VAR_13;
    FUNC_1(VAR_14, VAR_4, sizeof(STaosHeader));
    VAR_14->tcp = 2;
    VAR_11 = sizeof(STaosHeader);
    VAR_14->msgLen = (int32_t)FUNC_0(VAR_11);
    VAR_9 = FUNC_9(VAR_2, VAR_3, VAR_13, VAR_11, VAR_6);

    VAR_14 = (STaosHeader *)VAR_4;

    FUNC_12(VAR_12, VAR_2);
    int VAR_16 = FUNC_7(VAR_12, VAR_7->port, VAR_1);
    if (VAR_16 < 0) {
      FUNC_3("%s failed to open TCP socket to:%s:%u to send packet", VAR_8->label, VAR_12, VAR_7->port);
    } else {
      SHandleViaTcp VAR_17;
      FUNC_6(&VAR_17, 0);
      VAR_10 = (int)FUNC_11(VAR_16, (char *)&VAR_17, sizeof(SHandleViaTcp));

      if (VAR_10 != (int)sizeof(VAR_17)) {
        FUNC_3("%s failed to send handle to server, retLen:%d", VAR_8->label, VAR_10);
      } else {
        VAR_10 = FUNC_10(VAR_16, VAR_4, VAR_5);
        if (VAR_10 != VAR_5) {
          FUNC_3("%s failed to send data via TCP, dataLen:%d, retLen:%d, error:%s", VAR_8->label, VAR_5, VAR_10,
                 FUNC_2(VAR_0));
        } else {
          VAR_9 = VAR_5;
          FUNC_4("%s data is sent via TCP successfully", VAR_8->label);
        }
      }

      FUNC_8(VAR_16, (char *)&VAR_17, sizeof(SHandleViaTcp));

      FUNC_5(VAR_16);
    }
  }

  return VAR_9;
}
