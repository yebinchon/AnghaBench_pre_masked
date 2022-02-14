
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char,char) ;
 scalar_t__ FUNC_1 (char*,char*,int) ;

int FUNC_2(char *VAR_0) {
    if (FUNC_1(VAR_0,"\r\n",2) != 0) {
        FUNC_0("Expected \\r\\n, got: %02x%02x",VAR_0[0],VAR_0[1]);
        return 0;
    }
    return 1;
}
