
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD_PTR ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;




 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;

BOOL FUNC_2 (DWORD_PTR VAR_2, BYTE VAR_3, BYTE VAR_4)
{
BOOL VAR_5 = VAR_1;
    switch (VAR_3) {

        case 131 :
        case 129:
            VAR_5 = FUNC_0(VAR_2, VAR_4);
            break;

        case 130 :
            VAR_5 = FUNC_1(VAR_2, VAR_4);
            break;

        case 128 :
            VAR_5 = VAR_1;
            break;
        default:
            VAR_5 = VAR_0;
            break;
    }
    return VAR_5;
}
