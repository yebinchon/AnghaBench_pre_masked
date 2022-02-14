
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int mpgv_startcode ;
typedef int h ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
typedef int VC_CONTAINER_BYTESTREAM_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,size_t,int*,int) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_1(VC_CONTAINER_BYTESTREAM_T *VAR_1,
   size_t VAR_2, unsigned int *VAR_3, unsigned int *VAR_4)
{
   VC_CONTAINER_STATUS_T VAR_5;
   uint8_t VAR_6[2];

   VAR_5 = FUNC_0(VAR_1, VAR_2 + sizeof(mpgv_startcode) + 1, VAR_6, sizeof(VAR_6));
   if(VAR_5 != VAR_0)
      return VAR_5;

   *VAR_4 = (VAR_6[0] << 2) | (VAR_6[1] >> 6);
   *VAR_3 = (VAR_6[1] >> 3) & 0x7;
   return VAR_0;
}
