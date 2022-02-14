
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct serverCommand {int keystep; int lastkey; int firstkey; int arity; int name; } ;
typedef int client ;
struct TYPE_2__ {int nullbulk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *,struct serverCommand*,int ,char*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,void*,int) ;
 TYPE_1__ VAR_8 ;

void FUNC_7(client *VAR_9, struct serverCommand *VAR_10) {
    if (!VAR_10) {
        FUNC_1(VAR_9, VAR_8.nullbulk);
    } else {

        FUNC_5(VAR_9, 6);
        FUNC_2(VAR_9, VAR_10->name);
        FUNC_4(VAR_9, VAR_10->arity);

        int VAR_11 = 0;
        void *VAR_12 = FUNC_0(VAR_9);
        VAR_11 += FUNC_3(VAR_9,VAR_10,VAR_7, "write");
        VAR_11 += FUNC_3(VAR_9,VAR_10,VAR_5, "readonly");
        VAR_11 += FUNC_3(VAR_9,VAR_10,VAR_1, "denyoom");
        VAR_11 += FUNC_3(VAR_9,VAR_10,VAR_0, "admin");
        VAR_11 += FUNC_3(VAR_9,VAR_10,VAR_4, "random");
        VAR_11 += FUNC_3(VAR_9,VAR_10,VAR_3, "loading");
        VAR_11 += FUNC_3(VAR_9,VAR_10,VAR_6, "skip_monitor");
        VAR_11 += FUNC_3(VAR_9,VAR_10,VAR_2, "fast");
        FUNC_6(VAR_9, VAR_12, VAR_11);

        FUNC_4(VAR_9, VAR_10->firstkey);
        FUNC_4(VAR_9, VAR_10->lastkey);
        FUNC_4(VAR_9, VAR_10->keystep);
    }
}
