
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef union clusterMsgData {int dummy; } clusterMsgData ;
typedef int uint32_t ;
typedef unsigned char* sds ;
typedef int job ;
struct TYPE_11__ {int link; int name; } ;
typedef TYPE_4__ clusterNode ;
typedef int clusterMsgDataJob ;
struct TYPE_8__ {unsigned char* jobs_data; void* datasize; void* numjobs; } ;
struct TYPE_9__ {TYPE_1__ serialized; } ;
struct TYPE_10__ {TYPE_2__ jobs; } ;
struct TYPE_12__ {TYPE_3__ data; void* totlen; } ;
typedef TYPE_5__ clusterMsg ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_5__*,int ) ;
 int FUNC_1 (int ,unsigned char*,int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (unsigned char*,unsigned char*,int) ;
 unsigned char* FUNC_4 () ;
 int FUNC_5 (unsigned char*) ;
 int FUNC_6 (unsigned char*) ;
 unsigned char* FUNC_7 (unsigned char*,int *,int ) ;
 int FUNC_8 (int ,char*,int,int ) ;
 int FUNC_9 (unsigned char*) ;
 unsigned char* FUNC_10 (int) ;

void FUNC_11(clusterNode *VAR_3, job **VAR_4, uint32_t VAR_5) {
    unsigned char VAR_6[sizeof(clusterMsg)], *VAR_7;
    clusterMsg *VAR_8 = (clusterMsg*) VAR_6;
    uint32_t VAR_9, VAR_10;

    if (!VAR_3->link) return;

    FUNC_8(VAR_1,"Sending %d jobs to %.40s", (int)VAR_5,VAR_3->name);

    VAR_9 = sizeof(clusterMsg)-sizeof(union clusterMsgData);
    VAR_9 += sizeof(clusterMsgDataJob) -
              sizeof(VAR_8->data.jobs.serialized.jobs_data);

    sds VAR_11 = FUNC_4();
    for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++)
        VAR_11 = FUNC_7(VAR_11,VAR_4[VAR_10],VAR_2);
    VAR_9 += FUNC_6(VAR_11);

    FUNC_0(VAR_8,VAR_0);
    VAR_8->data.jobs.serialized.numjobs = FUNC_2(VAR_5);
    VAR_8->data.jobs.serialized.datasize = FUNC_2(FUNC_6(VAR_11));
    VAR_8->totlen = FUNC_2(VAR_9);

    if (VAR_9 < sizeof(VAR_6)) {
        VAR_7 = VAR_6;
    } else {
        VAR_7 = FUNC_10(VAR_9);
        FUNC_3(VAR_7,VAR_6,sizeof(clusterMsg));
        VAR_8 = (clusterMsg*) VAR_7;
    }
    FUNC_3(VAR_8->data.jobs.serialized.jobs_data,VAR_11,FUNC_6(VAR_11));
    FUNC_5(VAR_11);
    FUNC_1(VAR_3->link,VAR_7,VAR_9);
    if (VAR_7 != VAR_6) FUNC_9(VAR_7);
}
