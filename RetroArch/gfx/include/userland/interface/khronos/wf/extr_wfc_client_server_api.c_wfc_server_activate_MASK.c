
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WFCContext ;
typedef scalar_t__ VCOS_STATUS_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;

void FUNC_3(WFCContext VAR_3)
{
   VCOS_STATUS_T VAR_4;

   FUNC_1("%s: context 0x%x", VAR_0, VAR_3);

   VAR_4 = FUNC_2(VAR_2, VAR_3);

   FUNC_0(VAR_4 == VAR_1);
}
