
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HEVCDSPContext ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (char*) ;

void FUNC_4(void)
{
    int VAR_0;

    for (VAR_0 = 8; VAR_0 <= 12; VAR_0 += 2) {
        HEVCDSPContext VAR_1;

        FUNC_2(&VAR_1, VAR_0);
        FUNC_1(VAR_1, VAR_0);
    }
    FUNC_3("idct_dc");

    for (VAR_0 = 8; VAR_0 <= 12; VAR_0 += 2) {
        HEVCDSPContext VAR_2;

        FUNC_2(&VAR_2, VAR_0);
        FUNC_0(VAR_2, VAR_0);
    }
    FUNC_3("idct");
}
