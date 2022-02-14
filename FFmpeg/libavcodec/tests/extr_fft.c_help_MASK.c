
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;

__attribute__((used)) static void FUNC_1(void)
{
    FUNC_0(((void*)0), VAR_0,
           "usage: fft-test [-h] [-s] [-i] [-n b]\n"
           "-h     print this help\n"
           "-s     speed test\n"
           "-m     (I)MDCT test\n"
           "-d     (I)DCT test\n"
           "-r     (I)RDFT test\n"
           "-i     inverse transform test\n"
           "-n b   set the transform size to 2^b\n"
           "-f x   set scale factor for output data of (I)MDCT to x\n");
}
