
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int FUNC_0 (char*,char*,char*,char*,char*,char*,char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,int*,int ) ;

int FUNC_5(char *VAR_0, char *VAR_1) {
    pid_t VAR_2 = FUNC_2();
    pid_t VAR_3 = FUNC_1();

    if (VAR_3 == -1) {

        return(-1);
    } else if (VAR_3 > 0) {
        int VAR_4;
        FUNC_4(VAR_3, &VAR_4, 0);
    } else {

        FUNC_0("mksquashfs", "mksquashfs", VAR_0, VAR_1, "-root-owned", "-noappend", (char *)0);
        FUNC_3("execlp");
        return(-1);
    }
    return(0);
}
