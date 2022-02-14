
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int VC_CONTAINER_TRACK_T ;
typedef int VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
typedef int VC_CONTAINERS_LIST_T ;


 int FUNC_0 (int *,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int const*,char*,int *) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_3(VC_CONTAINER_T *VAR_2,
      VC_CONTAINER_TRACK_T *VAR_3,
      const VC_CONTAINERS_LIST_T *VAR_4)
{
   uint32_t VAR_5;

   FUNC_1(VAR_2);
   FUNC_1(VAR_3);


   if (FUNC_2(VAR_4, "randomAccessIndication", &VAR_5))
   {
      FUNC_0(VAR_2, "MPEG-4: random access not supported");
      return VAR_0;
   }


   if (FUNC_2(VAR_4, "maxDisplacement", &VAR_5) ||
         FUNC_2(VAR_4, "de-interleaveBufferSize", &VAR_5))
   {
      FUNC_0(VAR_2, "MPEG-4: interleaved packetization not supported");
      return VAR_0;
   }


   if (FUNC_2(VAR_4, "streamStateIndication", &VAR_5))
   {
      FUNC_0(VAR_2, "MPEG-4: system streams not supported");
      return VAR_0;
   }

   return VAR_1;
}
