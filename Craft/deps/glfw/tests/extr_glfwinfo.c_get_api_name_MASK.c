
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static const char* FUNC_0(int VAR_2)
{
    if (VAR_2 == VAR_0)
        return "OpenGL";
    else if (VAR_2 == VAR_1)
        return "OpenGL ES";

    return "Unknown API";
}
