
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int,char*,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*,char*,int) ;
 int VAR_5 ;

int FUNC_5(int VAR_6, char **VAR_7)
{
    int VAR_8;
    FUNC_1(VAR_0);
    for (VAR_5=0; VAR_5<=256; VAR_5 = 255*VAR_5+1) {
        FUNC_0(((void*)0), VAR_1, "use_color: %d\n", VAR_5);
        for (VAR_8 = VAR_0; VAR_8>=VAR_4; VAR_8-=8) {
            FUNC_0(((void*)0), VAR_8, " %d", VAR_8);
            FUNC_0(((void*)0), VAR_2, "e ");
            FUNC_0(((void*)0), VAR_8 + 256*123, "C%d", VAR_8);
            FUNC_0(((void*)0), VAR_2, "e");
        }
        FUNC_0(((void*)0), VAR_3, "\n");
    }
    {
        int VAR_9;
        char VAR_10[4];
        VAR_9 = FUNC_2("foo", ((void*)0), 0);
        if(VAR_9 != 3) {
            FUNC_3("Test NULL buffer failed.\n");
            return 1;
        }
        VAR_9 = FUNC_2("foo", VAR_10, 2);
        if(VAR_9 != 3 || FUNC_4(VAR_10, "f", 2)) {
            FUNC_3("Test buffer too small failed.\n");
            return 1;
        }
        VAR_9 = FUNC_2("foo", VAR_10, 4);
        if(VAR_9 != 3 || FUNC_4(VAR_10, "foo", 4)) {
            FUNC_3("Test buffer sufficiently big failed.\n");
            return 1;
        }
    }
    return 0;
}
