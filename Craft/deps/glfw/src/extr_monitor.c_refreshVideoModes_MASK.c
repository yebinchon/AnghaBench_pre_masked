
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int modeCount; int * modes; } ;
typedef TYPE_1__ _GLFWmonitor ;
typedef int GLFWvidmode ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (TYPE_1__*,int*) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int,int,int ) ;

__attribute__((used)) static int FUNC_3(_GLFWmonitor* VAR_3)
{
    int VAR_4;
    GLFWvidmode* VAR_5;

    if (VAR_3->modes)
        return VAR_1;

    VAR_5 = FUNC_0(VAR_3, &VAR_4);
    if (!VAR_5)
        return VAR_0;

    FUNC_2(VAR_5, VAR_4, sizeof(GLFWvidmode), VAR_2);

    FUNC_1(VAR_3->modes);
    VAR_3->modes = VAR_5;
    VAR_3->modeCount = VAR_4;

    return VAR_1;
}
