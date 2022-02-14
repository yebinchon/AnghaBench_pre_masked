
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int x_buf ;
typedef int mbedtls_mpi ;


 int FUNC_0 (char const*,char*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int *) ;
 int FUNC_6 (int *,int,char const*) ;
 int FUNC_7 (int *,int,int) ;
 int FUNC_8 (int *,int,char*,int,size_t*) ;

__attribute__((used)) static void FUNC_9(const char *VAR_0, const char *VAR_1, const char *VAR_2, size_t VAR_3)
{
    mbedtls_mpi VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
    char VAR_9[1024] = { 0 };
    size_t VAR_10 = 0;

    FUNC_4(&VAR_4);
    FUNC_4(&VAR_5);
    FUNC_4(&VAR_6);
    FUNC_4(&VAR_7);

    FUNC_1(FUNC_6(&VAR_4, 16, VAR_0));
    FUNC_1(FUNC_6(&VAR_5, 16, VAR_1));


    FUNC_1(FUNC_6(&VAR_7, 16, VAR_2));
    FUNC_1(FUNC_5(&VAR_6, &VAR_4, &VAR_5));

    FUNC_8(&VAR_6, 16, VAR_9, sizeof(VAR_9)-1, &VAR_10);
    FUNC_0(VAR_2, VAR_9, "mbedtls_mpi_mul_mpi result wrong");


    if (VAR_3 > 0) {
        FUNC_4(&VAR_8);
        for(int VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {
            FUNC_7(&VAR_8, VAR_11, 1);
        }

        FUNC_1(FUNC_2(&VAR_6, &VAR_4, &VAR_5, &VAR_8));

        FUNC_8(&VAR_6, 16, VAR_9, sizeof(VAR_9)-1, &VAR_10);
        FUNC_0(VAR_2, VAR_9, "esp_mpi_mul_mpi_mod result wrong");

        FUNC_3(&VAR_8);
    }


    FUNC_3(&VAR_4);
    FUNC_3(&VAR_5);
    FUNC_3(&VAR_6);
    FUNC_3(&VAR_7);
}
