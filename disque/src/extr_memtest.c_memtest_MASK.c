
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ws_col; int ws_row; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ,TYPE_1__*) ;
 int FUNC_2 (size_t,int) ;
 int FUNC_3 (char*) ;
 TYPE_1__ VAR_1 ;

void FUNC_4(size_t VAR_2, int VAR_3) {
    if (FUNC_1(1, VAR_0, &VAR_1) == -1) {
        VAR_1.ws_col = 80;
        VAR_1.ws_row = 20;
    }
    FUNC_2(VAR_2,VAR_3);
    FUNC_3("\nYour memory passed this test.\n");
    FUNC_3("Please if you are still in doubt use the following two tools:\n");
    FUNC_3("1) memtest86: http://www.memtest86.com/\n");
    FUNC_3("2) memtester: http://pyropus.ca/software/memtester/\n");
    FUNC_0(0);
}
