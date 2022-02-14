
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int width; int height; } ;
typedef TYPE_1__ GLFWimage ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static const GLFWimage* FUNC_1(int VAR_1, const GLFWimage* VAR_2,
                                    int VAR_3, int VAR_4)
{
    int VAR_5, VAR_6 = VAR_0;
    const GLFWimage* VAR_7 = ((void*)0);

    for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
    {
        const int VAR_8 = FUNC_0(VAR_2[VAR_5].width * VAR_2[VAR_5].height -
                                 VAR_3 * VAR_4);
        if (VAR_8 < VAR_6)
        {
            VAR_7 = VAR_2 + VAR_5;
            VAR_6 = VAR_8;
        }
    }

    return VAR_7;
}
