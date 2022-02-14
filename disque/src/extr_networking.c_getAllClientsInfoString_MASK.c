
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sds ;
typedef int listNode ;
typedef int listIter ;
struct TYPE_2__ {int clients; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 () ;
 TYPE_1__ VAR_1 ;

sds FUNC_8(void) {
    listNode *VAR_2;
    listIter VAR_3;
    VAR_0 *VAR_0;
    sds VAR_4 = FUNC_7();

    VAR_4 = FUNC_5(VAR_4,200*FUNC_1(VAR_1.clients));
    FUNC_4(VAR_1.clients,&VAR_3);
    while ((VAR_2 = FUNC_2(&VAR_3)) != ((void*)0)) {
        VAR_0 = FUNC_3(VAR_2);
        VAR_4 = FUNC_0(VAR_4,VAR_0);
        VAR_4 = FUNC_6(VAR_4,"\n",1);
    }
    return VAR_4;
}
