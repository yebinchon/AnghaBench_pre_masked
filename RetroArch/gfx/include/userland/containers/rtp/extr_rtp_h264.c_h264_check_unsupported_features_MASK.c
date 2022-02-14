
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
typedef int VC_CONTAINERS_LIST_T ;


 int FUNC_0 (int *,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int const*,char*,int *) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_2(VC_CONTAINER_T *VAR_2,
      const VC_CONTAINERS_LIST_T *VAR_3)
{
   uint32_t VAR_4;


   if (FUNC_1(VAR_3, "sprop-interleaving-depth", &VAR_4) ||
         FUNC_1(VAR_3, "sprop-deint-buf-req", &VAR_4) ||
         FUNC_1(VAR_3, "sprop-init-buf-time", &VAR_4) ||
         FUNC_1(VAR_3, "sprop-max-don-diff", &VAR_4))
   {
      FUNC_0(VAR_2, "H.264: Interleaved packetization is not supported");
      return VAR_0;
   }

   return VAR_1;
}
