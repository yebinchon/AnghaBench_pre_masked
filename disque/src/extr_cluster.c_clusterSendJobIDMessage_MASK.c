
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int * link; } ;
typedef TYPE_4__ clusterNode ;
struct TYPE_10__ {int aux; int id; } ;
struct TYPE_8__ {TYPE_3__ job; } ;
struct TYPE_9__ {TYPE_1__ jobid; } ;
struct TYPE_12__ {int totlen; TYPE_2__ data; } ;
typedef TYPE_5__ clusterMsg ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*,int) ;
 int FUNC_1 (int *,unsigned char*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int ) ;

void FUNC_5(int VAR_1, clusterNode *VAR_2, char *VAR_3, int VAR_4) {
    unsigned char VAR_5[sizeof(clusterMsg)];
    clusterMsg *VAR_6 = (clusterMsg*) VAR_5;

    if (VAR_2->link == ((void*)0)) return;
    FUNC_0(VAR_6,VAR_1);
    FUNC_3(VAR_6->data.jobid.job.id,VAR_3,VAR_0);
    VAR_6->data.jobid.job.aux = FUNC_2(VAR_4);
    FUNC_1(VAR_2->link,VAR_5,FUNC_4(VAR_6->totlen));
}
