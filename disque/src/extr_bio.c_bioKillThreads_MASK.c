
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,char*,int,...) ;
 int FUNC_3 (int) ;

void FUNC_4(void) {
    int VAR_3, VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
        if (FUNC_0(VAR_2[VAR_4]) == 0) {
            if ((VAR_3 = FUNC_1(VAR_2[VAR_4],((void*)0))) != 0) {
                FUNC_2(VAR_1,
                    "Bio thread for job type #%d can be joined: %s",
                        VAR_4, FUNC_3(VAR_3));
            } else {
                FUNC_2(VAR_1,
                    "Bio thread for job type #%d terminated",VAR_4);
            }
        }
    }
}
