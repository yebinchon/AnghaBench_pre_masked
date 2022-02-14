
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int id; int nodes_delivered; } ;
typedef TYPE_1__ job ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,char*,int ,int ) ;

void FUNC_2(job *VAR_4) {
    FUNC_1(VAR_3,"BCAST WORKING: %.*s",VAR_2,VAR_4->id);
    FUNC_0(VAR_4->nodes_delivered,VAR_4->id,
                                 VAR_1,0,VAR_0);
}
