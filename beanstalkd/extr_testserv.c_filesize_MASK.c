
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,struct stat*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(char *VAR_0)
{
    struct stat VAR_1;

    int VAR_2 = FUNC_1(VAR_0, &VAR_1);
    if (VAR_2 == -1) {
        FUNC_2("stat");
        FUNC_0(1);
    }
    return VAR_1.st_size;
}
