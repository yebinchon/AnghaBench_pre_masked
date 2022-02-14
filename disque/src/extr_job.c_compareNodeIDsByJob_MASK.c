
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* id; } ;
typedef TYPE_1__ job ;
struct TYPE_7__ {int name; } ;
typedef TYPE_2__ clusterNode ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,int ,int) ;

int FUNC_2(clusterNode *VAR_1, clusterNode *VAR_2, job *VAR_3) {
    int VAR_4;
    char VAR_5[VAR_0], VAR_6[VAR_0];
    FUNC_1(VAR_5,VAR_1->name,VAR_0);
    FUNC_1(VAR_6,VAR_2->name,VAR_0);
    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {


        VAR_5[VAR_4] ^= VAR_3->id[11 + VAR_4%24];
        VAR_6[VAR_4] ^= VAR_3->id[11 + VAR_4%24];
    }
    return FUNC_0(VAR_5,VAR_6,VAR_0);
}
