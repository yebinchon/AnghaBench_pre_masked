
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,size_t,char*,char*,int) ;
 scalar_t__ FUNC_1 (char*,char) ;

int FUNC_2(char *VAR_0, size_t VAR_1, char *VAR_2, int VAR_3) {
    return FUNC_0(VAR_0,VAR_1, FUNC_1(VAR_2,':') ?
           "[%s]:%d" : "%s:%d", VAR_2, VAR_3);
}
