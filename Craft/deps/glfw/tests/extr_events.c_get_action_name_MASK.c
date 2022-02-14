
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static const char* FUNC_0(int VAR_0)
{
    switch (VAR_0)
    {
        case 130:
            return "pressed";
        case 129:
            return "released";
        case 128:
            return "repeated";
    }

    return "caused unknown action";
}
