
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,int,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int,char*,int) ;
 int VAR_0 ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(void) {
    int VAR_1, VAR_2;


    VAR_1 = FUNC_1();
    if (VAR_1 == -1) goto failed;


    if (FUNC_0("\x1b[999C", 1, 6, VAR_0) != 6) goto failed;
    VAR_2 = FUNC_1();
    if (VAR_2 == -1) goto failed;


    if (VAR_2 > VAR_1) {
        char VAR_3[32];
        FUNC_2(VAR_3,32,"\x1b[%dD",VAR_2-VAR_1);
        if (FUNC_0(VAR_3, 1, FUNC_3(VAR_3), VAR_0) == -1) {

        }
    }
    return VAR_2;

failed:
    return 80;
}
