
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {int d_name; } ;


 int FUNC_0 (char*,char*) ;
 char* FUNC_1 (char*,char) ;

int FUNC_2(const struct dirent *VAR_0) {
    char *VAR_1 = (char*) &VAR_0->d_name;
    VAR_1 = FUNC_1(VAR_1, '.');
    return VAR_1 && !FUNC_0(VAR_1, ".desktop");
}
