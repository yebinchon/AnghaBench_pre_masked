
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (scalar_t__,char*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 int FUNC_6 (char*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (int ,char*,int,int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (int ) ;

int FUNC_9(void *VAR_7) {
    char *VAR_8 = FUNC_2(sizeof(char) * VAR_1);
    while (1) {
        int VAR_9;
        if ((VAR_9 = FUNC_7(VAR_6, VAR_8, VAR_1 - 1, 0)) <= 0) {
            if (VAR_5) {
                FUNC_6("recv");
                FUNC_0(1);
            }
            else {
                break;
            }
        }
        VAR_8[VAR_9] = '\0';
        while (1) {
            int VAR_10 = 0;
            FUNC_4(&VAR_2);
            if (VAR_3 + VAR_9 < VAR_0) {
                FUNC_3(VAR_4 + VAR_3, VAR_8, sizeof(char) * (VAR_9 + 1));
                VAR_3 += VAR_9;
                VAR_10 = 1;
            }
            FUNC_5(&VAR_2);
            if (VAR_10) {
                break;
            }
            FUNC_8(0);
        }
    }
    FUNC_1(VAR_8);
    return 0;
}
