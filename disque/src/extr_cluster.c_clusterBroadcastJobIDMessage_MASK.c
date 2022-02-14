
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
typedef int dictIterator ;
typedef int dictEntry ;
typedef int dict ;
struct TYPE_12__ {scalar_t__ link; } ;
typedef TYPE_4__ clusterNode ;
struct TYPE_9__ {int aux; int id; } ;
struct TYPE_10__ {TYPE_1__ job; } ;
struct TYPE_11__ {TYPE_2__ jobid; } ;
struct TYPE_13__ {unsigned char* mflags; int totlen; TYPE_3__ data; } ;
typedef TYPE_5__ clusterMsg ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*,int) ;
 int FUNC_1 (scalar_t__,unsigned char*,int ) ;
 int * FUNC_2 (int *) ;
 TYPE_4__* FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,int ) ;
 TYPE_4__* VAR_1 ;
 int FUNC_8 (int ) ;

void FUNC_9(dict *VAR_2, char *VAR_3, int VAR_4, uint32_t VAR_5, unsigned char VAR_6) {
    dictIterator *VAR_7 = FUNC_2(VAR_2);
    dictEntry *VAR_8;
    unsigned char VAR_9[sizeof(clusterMsg)];
    clusterMsg *VAR_10 = (clusterMsg*) VAR_9;


    FUNC_0(VAR_10,VAR_4);
    FUNC_7(VAR_10->data.jobid.job.id,VAR_3,VAR_0);
    VAR_10->data.jobid.job.aux = FUNC_6(VAR_5);
    VAR_10->mflags[0] = VAR_6;

    while((VAR_8 = FUNC_4(VAR_7)) != ((void*)0)) {
        clusterNode *VAR_11 = FUNC_3(VAR_8);
        if (VAR_11 == VAR_1) continue;
        if (VAR_11->link)
            FUNC_1(VAR_11->link,VAR_9,FUNC_8(VAR_10->totlen));
    }
    FUNC_5(VAR_7);
}
