
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ state; scalar_t__ etime; } ;
typedef TYPE_2__ job ;
struct TYPE_13__ {int flags; TYPE_1__** argv; } ;
typedef TYPE_3__ client ;
struct TYPE_14__ {scalar_t__ unixtime; scalar_t__ aof_enqueue_jobs_once; } ;
struct TYPE_11__ {int ptr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_3__*,char*) ;
 TYPE_2__* FUNC_1 (int ,int ,int *,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ) ;
 TYPE_4__ VAR_6 ;
 int FUNC_7 (int ,char*) ;

void FUNC_8(client *VAR_7) {
    if (!(VAR_7->flags & VAR_0)) {
        FUNC_0(VAR_7,"LOADJOB is a special command only processed from AOF");
        return;
    }
    job *VAR_8 = FUNC_1(VAR_7->argv[1]->ptr,FUNC_6(VAR_7->argv[1]->ptr),((void*)0),VAR_5);


    if (VAR_8 == ((void*)0)) {
        FUNC_7(VAR_4,
            "Unrecoverable error loading AOF: corrupted LOADJOB data.");
        FUNC_3(1);
    }

    int VAR_9 = 0;
    if (VAR_8->state == VAR_3) {
        if (VAR_6.aof_enqueue_jobs_once) VAR_9 = 1;
        VAR_8->state = VAR_2;
    }


    if (VAR_8->etime <= VAR_6.unixtime) {
        FUNC_4(VAR_8);
        return;
    }




    if (FUNC_5(VAR_8) == VAR_1 && VAR_9)
        FUNC_2(VAR_8,0);
}
