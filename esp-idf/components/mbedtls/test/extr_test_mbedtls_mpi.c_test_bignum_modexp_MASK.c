
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int z_buf ;
typedef int mbedtls_mpi ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int *,int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int,char const*) ;
 int FUNC_5 (int *,int,char*,int,size_t*) ;
 scalar_t__ FUNC_6 (char const*,char*,int ) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char const*) ;

__attribute__((used)) static bool FUNC_9(const char *VAR_1, const char *VAR_2, const char *VAR_3, const char *VAR_4, int VAR_5)
{
    mbedtls_mpi VAR_6, VAR_7, VAR_8, VAR_9;
    char VAR_10[400] = { 0 };
    size_t VAR_11 = 0;
    bool VAR_12 = 0;

    FUNC_7("%s = (%s ^ %s) mod %s  ret=%d ... ", VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);

    FUNC_3(&VAR_6);
    FUNC_3(&VAR_7);
    FUNC_3(&VAR_8);
    FUNC_3(&VAR_9);

    FUNC_0(FUNC_4(&VAR_7, 16, VAR_2));
    FUNC_0(FUNC_4(&VAR_8, 16, VAR_3));
    FUNC_0(FUNC_4(&VAR_9, 16, VAR_4));






    if (VAR_5 != FUNC_1(&VAR_6, &VAR_7, &VAR_8, &VAR_9, ((void*)0))) {
        VAR_12 = 1;
    }

    if (VAR_5 == VAR_0) {
        FUNC_5(&VAR_6, 16, VAR_10, sizeof(VAR_10)-1, &VAR_11);
        if (FUNC_6(VAR_1, VAR_10, FUNC_8(VAR_1)) != 0) {
            FUNC_7("\n Expected '%s' Was '%s' \n", VAR_1, VAR_10);
            VAR_12 = 1;
        }
    }

    FUNC_2(&VAR_6);
    FUNC_2(&VAR_7);
    FUNC_2(&VAR_8);
    FUNC_2(&VAR_9);

    if (VAR_12 == 1) {
        FUNC_7(" FAIL\n");
    } else {
        FUNC_7(" PASS\n");
    }
    return VAR_12;
}
