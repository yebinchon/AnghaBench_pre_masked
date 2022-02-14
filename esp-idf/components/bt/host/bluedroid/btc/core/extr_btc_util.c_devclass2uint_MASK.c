
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT32 ;
typedef int* DEV_CLASS ;



UINT32 FUNC_0(DEV_CLASS VAR_0)
{
    UINT32 VAR_1 = 0;

    if (VAR_0 != ((void*)0)) {

        VAR_1 = (VAR_0[2]) | (VAR_0[1] << 8) | (VAR_0[0] << 16);
    }
    return VAR_1;
}
