
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbedtls_mpi ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int const*) ;
 int FUNC_4 (int *,size_t,int) ;

__attribute__((used)) static int FUNC_5(mbedtls_mpi *VAR_0, const mbedtls_mpi *VAR_1, int VAR_2)
{
    int VAR_3;
    size_t VAR_4 = VAR_2 * 32;
    mbedtls_mpi VAR_5;
    FUNC_2(&VAR_5);
    FUNC_0(FUNC_4(&VAR_5, VAR_4 * 2, 1));
    FUNC_0(FUNC_3(VAR_0, &VAR_5, VAR_1));

 cleanup:
    FUNC_1(&VAR_5);
    return VAR_3;
}
