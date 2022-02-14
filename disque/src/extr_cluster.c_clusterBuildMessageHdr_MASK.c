
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef union clusterMsgData {int dummy; } clusterMsgData ;
typedef int clusterMsgDataJobID ;
typedef int clusterMsgDataFail ;
struct TYPE_8__ {char* sig; int totlen; int state; void* flags; void* port; int sender; void* type; void* ver; } ;
typedef TYPE_2__ clusterMsg ;
struct TYPE_10__ {int flags; int name; } ;
struct TYPE_9__ {int port; TYPE_1__* cluster; } ;
struct TYPE_7__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 TYPE_4__* VAR_11 ;
 TYPE_3__ VAR_12 ;

void FUNC_4(clusterMsg *VAR_13, int VAR_14) {
    int VAR_15 = 0;

    FUNC_3(VAR_13,0,sizeof(*VAR_13));
    VAR_13->ver = FUNC_1(VAR_10);
    VAR_13->sig[0] = 'D';
    VAR_13->sig[1] = 'b';
    VAR_13->sig[2] = 'u';
    VAR_13->sig[3] = 'Z';
    VAR_13->type = FUNC_1(VAR_14);
    FUNC_2(VAR_13->sender,VAR_11->name,VAR_9);
    VAR_13->port = FUNC_1(VAR_12.port);
    VAR_13->flags = FUNC_1(VAR_11->flags);
    VAR_13->state = VAR_12.cluster->state;



    if (VAR_14 == VAR_2) {
        VAR_15 = sizeof(clusterMsg)-sizeof(union clusterMsgData);
        VAR_15 += sizeof(clusterMsgDataFail);
    } else if (VAR_14 == VAR_4 ||
               VAR_14 == VAR_1 ||
               VAR_14 == VAR_5 ||
               VAR_14 == VAR_8 ||
               VAR_14 == VAR_6 ||
               VAR_14 == VAR_3 ||
               VAR_14 == VAR_0 ||
               VAR_14 == VAR_7)
    {
        VAR_15 = sizeof(clusterMsg)-sizeof(union clusterMsgData);
        VAR_15 += sizeof(clusterMsgDataJobID);
    }
    VAR_13->totlen = FUNC_0(VAR_15);

}
