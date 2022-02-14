
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int modeCount; TYPE_2__* modes; } ;
typedef TYPE_1__ _GLFWmonitor ;
struct TYPE_8__ {scalar_t__ redBits; scalar_t__ greenBits; scalar_t__ blueBits; int width; int height; scalar_t__ refreshRate; } ;
typedef TYPE_2__ GLFWvidmode ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;

const GLFWvidmode* FUNC_2(_GLFWmonitor* VAR_2,
                                        const GLFWvidmode* VAR_3)
{
    int VAR_4;
    unsigned int VAR_5, VAR_6 = VAR_1;
    unsigned int VAR_7, VAR_8 = VAR_1;
    unsigned int VAR_9, VAR_10 = VAR_1;
    const GLFWvidmode* VAR_11;
    const GLFWvidmode* VAR_12 = ((void*)0);

    if (!FUNC_1(VAR_2))
        return ((void*)0);

    for (VAR_4 = 0; VAR_4 < VAR_2->modeCount; VAR_4++)
    {
        VAR_11 = VAR_2->modes + VAR_4;

        VAR_9 = 0;

        if (VAR_3->redBits != VAR_0)
            VAR_9 += FUNC_0(VAR_11->redBits - VAR_3->redBits);
        if (VAR_3->greenBits != VAR_0)
            VAR_9 += FUNC_0(VAR_11->greenBits - VAR_3->greenBits);
        if (VAR_3->blueBits != VAR_0)
            VAR_9 += FUNC_0(VAR_11->blueBits - VAR_3->blueBits);

        VAR_5 = FUNC_0((VAR_11->width - VAR_3->width) *
                       (VAR_11->width - VAR_3->width) +
                       (VAR_11->height - VAR_3->height) *
                       (VAR_11->height - VAR_3->height));

        if (VAR_3->refreshRate != VAR_0)
            VAR_7 = FUNC_0(VAR_11->refreshRate - VAR_3->refreshRate);
        else
            VAR_7 = VAR_1 - VAR_11->refreshRate;

        if ((VAR_9 < VAR_10) ||
            (VAR_9 == VAR_10 && VAR_5 < VAR_6) ||
            (VAR_9 == VAR_10 && VAR_5 == VAR_6 && VAR_7 < VAR_8))
        {
            VAR_12 = VAR_11;
            VAR_6 = VAR_5;
            VAR_8 = VAR_7;
            VAR_10 = VAR_9;
        }
    }

    return VAR_12;
}
