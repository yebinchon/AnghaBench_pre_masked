
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_2 ;
 int FUNC_2 (int,int ,int ) ;
 int VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(void * VAR_4)
{
    int VAR_5 = 0;
    int VAR_6 = (int)VAR_4;
    do {
        VAR_5 = FUNC_2 (VAR_6, VAR_3, VAR_0);
        FUNC_0(VAR_1, "fd = %d data_len = %d", VAR_6, VAR_5);
        if (VAR_5 == -1) {
            break;
        }
        FUNC_1(VAR_1, VAR_3, VAR_5);
        if (VAR_5 == 0) {

            FUNC_4(1000 / VAR_2);
        }
    } while (1);
    FUNC_3();
}
