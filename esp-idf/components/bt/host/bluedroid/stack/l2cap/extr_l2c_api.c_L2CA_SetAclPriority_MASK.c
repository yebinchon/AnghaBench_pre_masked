
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT8 ;
typedef int BOOLEAN ;
typedef int* BD_ADDR ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int,int,int,int,int ) ;
 int FUNC_1 (int*,int ,int ) ;

BOOLEAN FUNC_2 (BD_ADDR VAR_1, UINT8 VAR_2)
{
    FUNC_0 ("L2CA_SetAclPriority()  bdaddr: %02x%02x%02x%02x%04x, priority:%d",
                     VAR_1[0], VAR_1[1], VAR_1[2],
                     VAR_1[3], (VAR_1[4] << 8) + VAR_1[5], VAR_2);

    return (FUNC_1(VAR_1, VAR_2, VAR_0));
}
