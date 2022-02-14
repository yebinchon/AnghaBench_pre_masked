
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int redBits; int greenBits; int blueBits; int width; int height; int refreshRate; } ;
typedef TYPE_1__ GLFWvidmode ;



__attribute__((used)) static int FUNC_0(const void* VAR_0, const void* VAR_1)
{
    int VAR_2, VAR_3, VAR_4, VAR_5;
    const GLFWvidmode* VAR_6 = VAR_0;
    const GLFWvidmode* VAR_7 = VAR_1;


    VAR_2 = VAR_6->redBits + VAR_6->greenBits + VAR_6->blueBits;
    VAR_3 = VAR_7->redBits + VAR_7->greenBits + VAR_7->blueBits;
    if (VAR_2 != VAR_3)
        return VAR_2 - VAR_3;


    VAR_4 = VAR_6->width * VAR_6->height;
    VAR_5 = VAR_7->width * VAR_7->height;
    if (VAR_4 != VAR_5)
        return VAR_4 - VAR_5;


    return VAR_6->refreshRate - VAR_7->refreshRate;
}
