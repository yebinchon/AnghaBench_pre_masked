
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int,int ) ;

int FUNC_1(int VAR_2, char *VAR_3, int VAR_4) {
    if (!VAR_1) {
        return 0;
    }
    int VAR_5 = 0;
    while (VAR_5 < VAR_4) {
        int VAR_6 = FUNC_0(VAR_2, VAR_3 + VAR_5, VAR_4, 0);
        if (VAR_6 == -1) {
            return -1;
        }
        VAR_5 += VAR_6;
        VAR_4 -= VAR_6;
        VAR_0 += VAR_6;
    }
    return 0;
}
