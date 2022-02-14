
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int result ;
typedef int WFCNativeStreamType ;
typedef scalar_t__ VCOS_STATUS_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,scalar_t__,...) ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__*,size_t*) ;

bool FUNC_2(WFCNativeStreamType VAR_3)
{
   VCOS_STATUS_T VAR_4;
   uint32_t VAR_5 = 0;
   size_t VAR_6 = sizeof(VAR_5);

   FUNC_0("%s: stream 0x%x", VAR_0, VAR_3);

   VAR_4 = FUNC_1(VAR_2, VAR_3, &VAR_5, &VAR_6);

   FUNC_0("%s: status 0x%x, result %u", VAR_0, VAR_4, VAR_5);

   if (VAR_4 != VAR_1)
      VAR_5 = 0;

   return VAR_5 != 0;
}
