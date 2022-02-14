
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbedtls_mpi ;
typedef int buf ;


 int FUNC_0 (int const*,int,char*,int,size_t*) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (char*,char const*,...) ;

void FUNC_3(const char *VAR_0, const mbedtls_mpi *VAR_1)
{
    static char VAR_2[1024];
    size_t VAR_3;
    FUNC_1(VAR_2, 0, sizeof(VAR_2));
    FUNC_0(VAR_1, 16, VAR_2, sizeof(VAR_2)-1, &VAR_3);
    if(VAR_3) {
        FUNC_2("%s = 0x%s\n", VAR_0, VAR_2);
    } else {
        FUNC_2("%s = TOOLONG\n", VAR_0);
    }
}
