
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ off_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 scalar_t__ FUNC_12 (char*,char*,int) ;

__attribute__((used)) static int FUNC_13(char* VAR_0, char** VAR_1, off_t VAR_2, int VAR_3, int* VAR_4, void* VAR_5)
{
        int VAR_6 = 0;

        if (VAR_2==0) {
                VAR_6 += FUNC_12(&VAR_0[VAR_6], "config1:   %#10.8x\n", FUNC_4());
                VAR_6 += FUNC_12(&VAR_0[VAR_6], "config2:   %#10.8x\n", FUNC_5());
                VAR_6 += FUNC_12(&VAR_0[VAR_6], "config3:   %#10.8x\n", FUNC_6());
                VAR_6 += FUNC_12(&VAR_0[VAR_6], "configPR:  %#10.8x\n", FUNC_7());
                VAR_6 += FUNC_12(&VAR_0[VAR_6], "status:    %#10.8x\n", FUNC_11());
                VAR_6 += FUNC_12(&VAR_0[VAR_6], "cause:     %#10.8x\n", FUNC_0());
                VAR_6 += FUNC_12(&VAR_0[VAR_6], "count:     %#10.8x\n", FUNC_8());
                VAR_6 += FUNC_12(&VAR_0[VAR_6], "count_2:   %#10.8x\n", FUNC_9());
                VAR_6 += FUNC_12(&VAR_0[VAR_6], "count_3:   %#10.8x\n", FUNC_10());
                VAR_6 += FUNC_12(&VAR_0[VAR_6], "compare:   %#10.8x\n", FUNC_1());
                VAR_6 += FUNC_12(&VAR_0[VAR_6], "compare_2: %#10.8x\n", FUNC_2());
                VAR_6 += FUNC_12(&VAR_0[VAR_6], "compare_3: %#10.8x\n", FUNC_3());
        }

        return VAR_6;
}
