
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT8 ;
typedef int UINT32 ;
typedef scalar_t__* DEV_CLASS ;



void FUNC_0(UINT32 VAR_0, DEV_CLASS VAR_1)
{
    VAR_1[2] = (UINT8)VAR_0;
    VAR_1[1] = (UINT8)(VAR_0 >> 8);
    VAR_1[0] = (UINT8)(VAR_0 >> 16);
}
