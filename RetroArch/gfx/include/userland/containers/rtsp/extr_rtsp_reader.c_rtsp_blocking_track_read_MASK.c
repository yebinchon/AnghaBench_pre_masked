
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
typedef int VC_CONTAINER_PACKET_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ) ;
 scalar_t__ FUNC_1 (int *,int *,int ) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_2(VC_CONTAINER_T *VAR_3,
                                               VC_CONTAINER_PACKET_T *VAR_4,
                                               uint32_t VAR_5)
{
   VC_CONTAINER_STATUS_T VAR_6;

   VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_5);


   if (VAR_6 == VAR_1)
   {

      (void)FUNC_0(VAR_3, VAR_0, VAR_2);
      VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_5);
      (void)FUNC_0(VAR_3, VAR_0, 0);
   }

   return VAR_6;
}
