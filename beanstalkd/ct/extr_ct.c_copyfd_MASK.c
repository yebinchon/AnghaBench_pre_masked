
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;
typedef int buf ;
typedef int FILE ;


 int FUNC_0 (int,int ,char*) ;
 int VAR_0 ;
 size_t FUNC_1 (char*,int,scalar_t__,int *) ;
 scalar_t__ FUNC_2 (int,char*,int) ;

__attribute__((used)) static void
FUNC_3(FILE *VAR_1, int VAR_2)
{
    ssize_t VAR_3;
    char VAR_4[1024];

    while ((VAR_3 = FUNC_2(VAR_2, VAR_4, sizeof(VAR_4))) != 0) {
        if (FUNC_1(VAR_4, 1, VAR_3, VAR_1) != (size_t)VAR_3) {
            FUNC_0(3, VAR_0, "fwrite");
        }
    }
}
