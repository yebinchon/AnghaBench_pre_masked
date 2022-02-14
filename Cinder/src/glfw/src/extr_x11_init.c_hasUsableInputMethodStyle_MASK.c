
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {unsigned int count_styles; int* supported_styles; } ;
typedef TYPE_2__ XIMStyles ;
struct TYPE_6__ {int im; } ;
struct TYPE_8__ {TYPE_1__ x11; } ;
typedef int GLFWbool ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int * FUNC_1 (int ,int ,TYPE_2__**,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__ VAR_5 ;

__attribute__((used)) static GLFWbool FUNC_2(void)
{
    unsigned int VAR_6;
    GLFWbool VAR_7 = VAR_0;
    XIMStyles* VAR_8 = ((void*)0);

    if (FUNC_1(VAR_5.x11.im, VAR_4, &VAR_8, ((void*)0)) != ((void*)0))
        return VAR_0;

    for (VAR_6 = 0; VAR_6 < VAR_8->count_styles; VAR_6++)
    {
        if (VAR_8->supported_styles[VAR_6] == (VAR_2 | VAR_3))
        {
            VAR_7 = VAR_1;
            break;
        }
    }

    FUNC_0(VAR_8);
    return VAR_7;
}
