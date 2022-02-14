
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int nodename; } ;
struct TYPE_9__ {TYPE_1__ about; } ;
struct TYPE_10__ {TYPE_2__ fail; } ;
struct TYPE_12__ {int totlen; TYPE_3__ data; } ;
typedef TYPE_5__ clusterMsg ;
struct TYPE_13__ {TYPE_4__* cluster; } ;
struct TYPE_11__ {int nodes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned char*,int ) ;
 int FUNC_1 (TYPE_5__*,int ) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int ) ;
 TYPE_6__ VAR_2 ;

void FUNC_4(char *VAR_3) {
    unsigned char VAR_4[sizeof(clusterMsg)];
    clusterMsg *VAR_5 = (clusterMsg*) VAR_4;

    FUNC_1(VAR_5,VAR_0);
    FUNC_2(VAR_5->data.fail.about.nodename,VAR_3,VAR_1);
    FUNC_0(VAR_2.cluster->nodes,VAR_4,FUNC_3(VAR_5->totlen));
}
