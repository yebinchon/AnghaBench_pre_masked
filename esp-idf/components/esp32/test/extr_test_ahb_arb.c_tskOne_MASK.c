
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,int) ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__*,int,int ,int*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(void *VAR_4)
{
    int VAR_5;
    int VAR_6 = 0, VAR_7 = 0;
    while (1) {
        VAR_0 = 0; VAR_1 = 0;
        VAR_3 = 1;
        for (VAR_5 = 0; VAR_5 < 16 * 1024; VAR_5++) {
            FUNC_1(&VAR_1, 1, 0, &VAR_0);
        }
        FUNC_2(60 / VAR_2);
        VAR_3 = 2;
        if (VAR_0 != 16 * 1024 * 2) {
            FUNC_0("Lock malfunction detected! Ctr=0x%x instead of %x\n", VAR_0, 16 * 1024 * 2);
            VAR_6++;
        }
        VAR_7++;
        FUNC_0("Run %d err %d\n", VAR_7, VAR_6);
        FUNC_2(20 / VAR_2);
    }
}
