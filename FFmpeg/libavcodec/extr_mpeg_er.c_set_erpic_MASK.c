
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int field_picture; int mb_type; int * ref_index; int * motion_val; int * tf; int * f; } ;
struct TYPE_6__ {int field_picture; int mb_type; int * ref_index; int * motion_val; int tf; int * f; } ;
typedef TYPE_1__ Picture ;
typedef TYPE_2__ ERPicture ;


 int FUNC_0 (TYPE_2__*,int ,int) ;

__attribute__((used)) static void FUNC_1(ERPicture *VAR_0, Picture *VAR_1)
{
    int VAR_2;

    FUNC_0(VAR_0, 0, sizeof(*VAR_0));
    if (!VAR_1) {
        VAR_0->f = ((void*)0);
        VAR_0->tf = ((void*)0);
        return;
    }

    VAR_0->f = VAR_1->f;
    VAR_0->tf = &VAR_1->tf;

    for (VAR_2 = 0; VAR_2 < 2; VAR_2++) {
        VAR_0->motion_val[VAR_2] = VAR_1->motion_val[VAR_2];
        VAR_0->ref_index[VAR_2] = VAR_1->ref_index[VAR_2];
    }

    VAR_0->mb_type = VAR_1->mb_type;
    VAR_0->field_picture = VAR_1->field_picture;
}
