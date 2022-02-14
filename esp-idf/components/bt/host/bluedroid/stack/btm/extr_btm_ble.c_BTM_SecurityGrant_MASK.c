
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tSMP_STATUS ;
typedef scalar_t__ UINT8 ;
typedef int BD_ADDR ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(BD_ADDR VAR_3, UINT8 VAR_4)
{

    tSMP_STATUS VAR_5 = (VAR_4 == VAR_0) ? VAR_2 : VAR_1;
    FUNC_0 ("BTM_SecurityGrant");
    FUNC_1(VAR_3, VAR_5);

}
