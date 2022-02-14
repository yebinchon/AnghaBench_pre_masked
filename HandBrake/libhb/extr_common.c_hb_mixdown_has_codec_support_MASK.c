
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_0(int VAR_5, uint32_t VAR_6)
{

    if (VAR_6 & VAR_0)
        return (VAR_5 == VAR_4);


    if (VAR_5 == VAR_4)
        return 0;

    switch (VAR_6)
    {
        case 128:
        case 132:
        case 131:
        case 129:
        case 137:
        case 136:
        case 133:
            return (VAR_5 <= VAR_2);

        case 130:
            return (VAR_5 <= VAR_3);

        case 135:
        case 134:
            return ((VAR_5 <= VAR_1) ||
                    (VAR_5 == VAR_2));

        default:
            return (VAR_5 <= VAR_1);
    }
}
