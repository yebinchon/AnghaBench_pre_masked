
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ state; int id; scalar_t__ awakeme; } ;
typedef TYPE_1__ job ;
typedef int client ;
struct TYPE_12__ {int jobs; int awakeme; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int ) ;
 int * FUNC_5 (TYPE_1__*) ;
 TYPE_1__* FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 TYPE_5__ VAR_6 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_1__*,int *) ;
 int FUNC_10 (int ,TYPE_1__*) ;
 int FUNC_11 (int *) ;

int FUNC_12(job *VAR_7) {
    VAR_7 = FUNC_6(VAR_7->id);
    if (!VAR_7) return VAR_0;



    if (VAR_7->state >= VAR_3 && VAR_7->state != VAR_2)
        FUNC_0(VAR_7);


    if (VAR_7->awakeme) FUNC_8(FUNC_10(VAR_6.awakeme,VAR_7));


    if (VAR_7->state == VAR_4) FUNC_3(VAR_7);




    if (VAR_7->state == VAR_5) {
        client *VAR_8 = FUNC_5(VAR_7);
        FUNC_9(VAR_7,((void*)0));
        FUNC_1(VAR_8,
            FUNC_7("-NOREPL job removed (expired?) before the requested "
                   "replication level was achieved\r\n"));


        VAR_7->state = VAR_3;
        FUNC_2(VAR_7);
        FUNC_11(VAR_8);
    }


    FUNC_4(VAR_6.jobs, VAR_7->id);
    return VAR_1;
}
