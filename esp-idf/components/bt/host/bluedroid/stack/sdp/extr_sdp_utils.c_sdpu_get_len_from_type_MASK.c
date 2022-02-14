
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT8 ;
typedef int UINT32 ;
typedef int UINT16 ;


 int FUNC_0 (int,int*) ;
 int FUNC_1 (int,int*) ;
 int FUNC_2 (int,int*) ;
UINT8 *FUNC_3 (UINT8 *VAR_0, UINT8 VAR_1, UINT32 *VAR_2)
{
    UINT8 VAR_3;
    UINT16 VAR_4;
    UINT32 VAR_5;

    switch (VAR_1 & 7) {
    case 130:
        *VAR_2 = 1;
        break;
    case 128:
        *VAR_2 = 2;
        break;
    case 134:
        *VAR_2 = 4;
        break;
    case 135:
        *VAR_2 = 8;
        break;
    case 129:
        *VAR_2 = 16;
        break;
    case 133:
        FUNC_2 (VAR_3, VAR_0);
        *VAR_2 = VAR_3;
        break;
    case 131:
        FUNC_0 (VAR_4, VAR_0);
        *VAR_2 = VAR_4;
        break;
    case 132:
        FUNC_1 (VAR_5, VAR_0);
        *VAR_2 = (UINT16) VAR_5;
        break;
    }

    return (VAR_0);
}
