
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int redBits; int greenBits; int blueBits; int width; int height; int refreshRate; } ;
typedef TYPE_1__ GLFWvidmode ;



__attribute__((used)) static int FUNC_0(const void* VAR_0, const void* VAR_1)
{
    const GLFWvidmode* VAR_2 = VAR_0;
    const GLFWvidmode* VAR_3 = VAR_1;
    const int VAR_4 = VAR_2->redBits + VAR_2->greenBits + VAR_2->blueBits;
    const int VAR_5 = VAR_3->redBits + VAR_3->greenBits + VAR_3->blueBits;
    const int VAR_6 = VAR_2->width * VAR_2->height;
    const int VAR_7 = VAR_3->width * VAR_3->height;


    if (VAR_4 != VAR_5)
        return VAR_4 - VAR_5;


    if (VAR_6 != VAR_7)
        return VAR_6 - VAR_7;


    return VAR_2->refreshRate - VAR_3->refreshRate;
}
