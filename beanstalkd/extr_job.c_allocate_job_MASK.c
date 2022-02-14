
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int body_size; int created_at; } ;
struct TYPE_8__ {char* body; TYPE_1__ r; } ;
typedef TYPE_2__ Job ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;

Job *
FUNC_5(int VAR_0)
{
    Job *VAR_1;

    VAR_1 = FUNC_1(sizeof(Job) + VAR_0);
    if (!VAR_1) {
        FUNC_4("OOM");
        return (Job *) 0;
    }

    FUNC_2(VAR_1, 0, sizeof(Job));
    VAR_1->r.created_at = FUNC_3();
    VAR_1->r.body_size = VAR_0;
    VAR_1->body = (char *)VAR_1 + sizeof(Job);
    FUNC_0(VAR_1);
    return VAR_1;
}
