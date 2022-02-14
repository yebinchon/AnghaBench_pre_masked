
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef union clusterMsgData {int dummy; } clusterMsgData ;
typedef int uint32_t ;
struct TYPE_14__ {scalar_t__ ptr; } ;
typedef TYPE_4__ robj ;
typedef int dict ;
typedef int clusterMsgDataQueueOp ;
struct TYPE_11__ {int qname; void* qnamelen; void* aux; } ;
struct TYPE_12__ {TYPE_1__ about; } ;
struct TYPE_13__ {TYPE_2__ queueop; } ;
struct TYPE_15__ {void* totlen; TYPE_3__ data; } ;
typedef TYPE_5__ clusterMsg ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_5__*,int) ;
 int FUNC_1 (TYPE_5__*,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int ,scalar_t__,int) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ,char*,char*,int,int) ;
 int FUNC_7 (TYPE_5__*) ;
 TYPE_5__* FUNC_8 (int) ;

void FUNC_9(robj *VAR_2, uint32_t VAR_3, dict *VAR_4) {
    uint32_t VAR_5, VAR_6 = FUNC_5(VAR_2->ptr);
    uint32_t VAR_7;
    clusterMsg *VAR_8;

    FUNC_6(VAR_1,"Sending PAUSE for %s flags=%d, %d nodes",
        (char*)VAR_2->ptr, (int)VAR_3, (int)FUNC_2(VAR_4));

    VAR_5 = sizeof(clusterMsg)-sizeof(union clusterMsgData);
    VAR_5 += sizeof(clusterMsgDataQueueOp) - 8 + VAR_6;
    VAR_7 = VAR_5;
    if (VAR_7 < (int)sizeof(clusterMsg)) VAR_7 = sizeof(clusterMsg);
    VAR_8 = FUNC_8(VAR_7);

    FUNC_1(VAR_8,VAR_0);
    VAR_8->data.queueop.about.aux = FUNC_3(VAR_3);
    VAR_8->data.queueop.about.qnamelen = FUNC_3(VAR_6);
    FUNC_4(VAR_8->data.queueop.about.qname, VAR_2->ptr, VAR_6);
    VAR_8->totlen = FUNC_3(VAR_5);
    FUNC_0(VAR_4,VAR_8,VAR_5);
    FUNC_7(VAR_8);
}
