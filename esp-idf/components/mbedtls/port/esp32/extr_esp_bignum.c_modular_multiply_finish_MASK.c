
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int s; } ;
typedef TYPE_1__ mbedtls_mpi ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,size_t) ;
 int FUNC_2 (TYPE_1__*,int ,size_t) ;
 int FUNC_3 (int ,TYPE_1__ const*,size_t) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(mbedtls_mpi *VAR_3, const mbedtls_mpi *VAR_4, const mbedtls_mpi *VAR_5, size_t VAR_6, size_t VAR_7)
{
    int VAR_8 = 0;


    FUNC_3(VAR_0, VAR_5, VAR_6);

    FUNC_4(VAR_2);

    FUNC_0( FUNC_1(VAR_3, VAR_7) );

    FUNC_5(VAR_2);

    FUNC_2(VAR_3, VAR_1, VAR_7);

    VAR_3->s = VAR_4->s * VAR_5->s;

 cleanup:
    return VAR_8;
}
