
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int state; scalar_t__ body_size; } ;
struct TYPE_10__ {TYPE_1__ r; scalar_t__ tube; int * file; } ;
typedef TYPE_2__ Job ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_2__*,TYPE_2__*,scalar_t__) ;
 int FUNC_4 (char*) ;

Job *
FUNC_5(Job *VAR_1)
{
    if (!VAR_1)
        return ((void*)0);

    Job *VAR_2 = FUNC_2(sizeof(Job) + VAR_1->r.body_size);
    if (!VAR_2) {
        FUNC_4("OOM");
        return (Job *) 0;
    }

    FUNC_3(VAR_2, VAR_1, sizeof(Job) + VAR_1->r.body_size);
    FUNC_1(VAR_2);

    VAR_2->file = ((void*)0);

    VAR_2->tube = 0;
    FUNC_0(VAR_2->tube, VAR_1->tube);


    VAR_2->r.state = VAR_0;

    return VAR_2;
}
