
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ws_col; int ws_row; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;

void FUNC_2(char *VAR_4, int VAR_5) {
    int VAR_6;

    FUNC_1("\x1b[H\x1b[2J");

    for (VAR_6 = 0; VAR_6 < VAR_3.ws_col*(VAR_3.ws_row-2); VAR_6++) FUNC_1(".");
    FUNC_1("Please keep the test running several minutes per GB of memory.\n");
    FUNC_1("Also check http://www.memtest86.com/ and http://pyropus.ca/software/memtester/");
    FUNC_1("\x1b[H\x1b[2K");
    FUNC_1("%s [%d]\n", VAR_4, VAR_5);
    VAR_1 = 0;
    VAR_0 = VAR_3.ws_col*(VAR_3.ws_row-3);
    FUNC_0(VAR_2);
}
