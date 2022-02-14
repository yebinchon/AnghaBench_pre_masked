
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(void *VAR_6)
{
    FUNC_5(VAR_5, VAR_3);


    for (int VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
        FUNC_4(VAR_4);
    }


    while (1) {
        FUNC_2("\n\nGetting real time stats over %d ticks\n", VAR_2);
        if (FUNC_1(VAR_2) == VAR_0) {
            FUNC_2("Real time stats obtained\n");
        } else {
            FUNC_2("Error getting real time stats\n");
        }
        FUNC_3(FUNC_0(1000));
    }
}
