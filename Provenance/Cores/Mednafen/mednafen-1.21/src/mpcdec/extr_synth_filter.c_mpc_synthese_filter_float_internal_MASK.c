
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mpc_uint32_t ;
typedef int mpc_int_t ;
typedef int mpc_int32_t ;
typedef int MPC_SAMPLE_FORMAT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int const) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int const*,int *) ;

__attribute__((used)) static void
FUNC_3(MPC_SAMPLE_FORMAT* VAR_1, MPC_SAMPLE_FORMAT* VAR_2, const MPC_SAMPLE_FORMAT* VAR_3, mpc_int_t VAR_4)
{
    mpc_uint32_t VAR_5;
    for ( VAR_5 = 0; VAR_5 < 36; VAR_5++, VAR_3 += 32 )
    {
        MPC_SAMPLE_FORMAT* VAR_6 = VAR_1;
        const MPC_SAMPLE_FORMAT* VAR_7 = (const MPC_SAMPLE_FORMAT*) &VAR_0;
        mpc_int32_t VAR_8;
        VAR_2 -= 64;
        FUNC_2( VAR_3, VAR_2 );
        for ( VAR_8 = 0; VAR_8 < 32; VAR_8++, VAR_7 += 16, VAR_2++ )
        {
            *VAR_6 = FUNC_1(
                     FUNC_0(VAR_2[ 0], VAR_7[ 0]) + FUNC_0(VAR_2[ 96], VAR_7[ 1]) + FUNC_0(VAR_2[128], VAR_7[ 2]) + FUNC_0(VAR_2[224], VAR_7[ 3])
                   + FUNC_0(VAR_2[256], VAR_7[ 4]) + FUNC_0(VAR_2[352], VAR_7[ 5]) + FUNC_0(VAR_2[384], VAR_7[ 6]) + FUNC_0(VAR_2[480], VAR_7[ 7])
                   + FUNC_0(VAR_2[512], VAR_7[ 8]) + FUNC_0(VAR_2[608], VAR_7[ 9]) + FUNC_0(VAR_2[640], VAR_7[10]) + FUNC_0(VAR_2[736], VAR_7[11])
                   + FUNC_0(VAR_2[768], VAR_7[12]) + FUNC_0(VAR_2[864], VAR_7[13]) + FUNC_0(VAR_2[896], VAR_7[14]) + FUNC_0(VAR_2[992], VAR_7[15])
                   , 2);
            VAR_6 += VAR_4;
        }
        VAR_2 -= 32;
        VAR_1 += 32 * VAR_4;
    }
}
