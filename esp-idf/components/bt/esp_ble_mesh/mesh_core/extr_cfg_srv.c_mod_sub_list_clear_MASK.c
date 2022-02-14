
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bt_mesh_model {scalar_t__* groups; } ;


 int FUNC_0 (scalar_t__*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static size_t FUNC_1(struct bt_mesh_model *VAR_1)
{
    size_t VAR_2;
    int VAR_3;


    for (VAR_3 = 0, VAR_2 = 0; VAR_3 < FUNC_0(VAR_1->groups); VAR_3++) {
        if (VAR_1->groups[VAR_3] != VAR_0) {
            VAR_1->groups[VAR_3] = VAR_0;
            VAR_2++;
        }
    }

    return VAR_2;
}
