
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mpc_uint8_t ;
typedef int mpc_int32_t ;
typedef int mpc_decoder ;


 int VAR_0 ;
 int FUNC_0 (int,double) ;

void
FUNC_1(mpc_decoder *VAR_1, double VAR_2)
{
    mpc_int32_t VAR_3; double VAR_4, VAR_5;


    VAR_2 *= 1.0 / (double) (1<<(VAR_0-1));



    VAR_4 = VAR_5 = VAR_2;



    FUNC_0(1,VAR_2);

    VAR_4 *= 0.83298066476582673961;
    VAR_5 *= 1/0.83298066476582673961;

    for ( VAR_3 = 1; VAR_3 <= 128; VAR_3++ ) {
        FUNC_0((mpc_uint8_t)(1+VAR_3),VAR_4);
        FUNC_0((mpc_uint8_t)(1-VAR_3),VAR_5);
        VAR_4 *= 0.83298066476582673961;
        VAR_5 *= 1/0.83298066476582673961;
    }
}
