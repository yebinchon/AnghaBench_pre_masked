
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,double) ;

void FUNC_1(char *VAR_0, long long VAR_1) {
    double VAR_2;

    if (VAR_1 < 0) {
        *VAR_0 = '-';
        VAR_0++;
        VAR_1 = -VAR_1;
    }
    if (VAR_1 < 1024) {

        FUNC_0(VAR_0,"%lldB",VAR_1);
        return;
    } else if (VAR_1 < (1024*1024)) {
        VAR_2 = (double)VAR_1/(1024);
        FUNC_0(VAR_0,"%.2fK",VAR_2);
    } else if (VAR_1 < (1024LL*1024*1024)) {
        VAR_2 = (double)VAR_1/(1024*1024);
        FUNC_0(VAR_0,"%.2fM",VAR_2);
    } else if (VAR_1 < (1024LL*1024*1024*1024)) {
        VAR_2 = (double)VAR_1/(1024LL*1024*1024);
        FUNC_0(VAR_0,"%.2fG",VAR_2);
    }
}
