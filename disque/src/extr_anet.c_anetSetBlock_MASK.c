
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,char*,int ) ;
 int VAR_5 ;
 int FUNC_1 (int,int ,...) ;
 int FUNC_2 (int ) ;

int FUNC_3(char *VAR_6, int VAR_7, int VAR_8) {
    int VAR_9;




    if ((VAR_9 = FUNC_1(VAR_7, VAR_2)) == -1) {
        FUNC_0(VAR_6, "fcntl(F_GETFL): %s", FUNC_2(VAR_5));
        return VAR_0;
    }

    if (VAR_8)
        VAR_9 |= VAR_4;
    else
        VAR_9 &= ~VAR_4;

    if (FUNC_1(VAR_7, VAR_3, VAR_9) == -1) {
        FUNC_0(VAR_6, "fcntl(F_SETFL,O_NONBLOCK): %s", FUNC_2(VAR_5));
        return VAR_0;
    }
    return VAR_1;
}
