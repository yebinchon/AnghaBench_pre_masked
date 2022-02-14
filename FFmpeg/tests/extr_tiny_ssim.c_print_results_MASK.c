
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int FUNC_0 (char*,double,double,double,double,...) ;
 double FUNC_1 (int,int) ;
 double FUNC_2 (double,int) ;

__attribute__((used)) static void FUNC_3(uint64_t VAR_0[3], double VAR_1[3], int VAR_2, int VAR_3, int VAR_4)
{
    FUNC_0( "PSNR Y:%.3f  U:%.3f  V:%.3f  All:%.3f | ",
            FUNC_1( VAR_0[0], (uint64_t)VAR_2*VAR_3*VAR_4 ),
            FUNC_1( VAR_0[1], (uint64_t)VAR_2*VAR_3*VAR_4/4 ),
            FUNC_1( VAR_0[2], (uint64_t)VAR_2*VAR_3*VAR_4/4 ),
            FUNC_1( VAR_0[0] + VAR_0[1] + VAR_0[2], (uint64_t)VAR_2*VAR_3*VAR_4*3/2 ) );
    FUNC_0( "SSIM Y:%.5f U:%.5f V:%.5f All:%.5f (%.5f)",
            VAR_1[0] / VAR_2,
            VAR_1[1] / VAR_2,
            VAR_1[2] / VAR_2,
            (VAR_1[0]*4 + VAR_1[1] + VAR_1[2]) / (VAR_2*6),
            FUNC_2(VAR_1[0] * 4 + VAR_1[1] + VAR_1[2], VAR_2*6));
}
