
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tBT_TRANSPORT ;
typedef int tACL_CONN ;
typedef int BOOLEAN ;
typedef int * BD_ADDR ;


 int FUNC_0 (char*,int ,int ,int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int *,int ) ;

BOOLEAN FUNC_2 (BD_ADDR VAR_2, tBT_TRANSPORT VAR_3)
{
    tACL_CONN *VAR_4;

    FUNC_0 ("BTM_IsAclConnectionUp: RemBdAddr: %02x%02x%02x%02x%02x%02x\n",
                   VAR_2[0], VAR_2[1], VAR_2[2],
                   VAR_2[3], VAR_2[4], VAR_2[5]);

    VAR_4 = FUNC_1(VAR_2, VAR_3);
    if (VAR_4 != (tACL_CONN *)((void*)0)) {
        return (VAR_1);
    }


    return (VAR_0);
}
