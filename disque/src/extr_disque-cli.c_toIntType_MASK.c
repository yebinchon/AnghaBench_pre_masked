
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*,char*) ;
 int VAR_6 ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static int FUNC_3(char *VAR_7, char *VAR_8) {
    if(!FUNC_2(VAR_8, "string")) {
        return VAR_4;
    } else if(!FUNC_2(VAR_8, "list")) {
        return VAR_1;
    } else if(!FUNC_2(VAR_8, "set")) {
        return VAR_3;
    } else if(!FUNC_2(VAR_8, "hash")) {
        return VAR_0;
    } else if(!FUNC_2(VAR_8, "zset")) {
        return VAR_5;
    } else if(!FUNC_2(VAR_8, "none")) {
        return VAR_2;
    } else {
        FUNC_1(VAR_6, "Unknown type '%s' for key '%s'\n", VAR_8, VAR_7);
        FUNC_0(1);
    }
}
