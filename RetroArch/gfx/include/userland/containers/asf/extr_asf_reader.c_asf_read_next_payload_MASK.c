
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_3__ {scalar_t__ subpayload_size; scalar_t__ payload_size; int current_offset; int media_object_off; int current_payload; } ;
typedef TYPE_1__ ASF_PACKET_STATE ;


 scalar_t__ FUNC_0 (int *,int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_3( VC_CONTAINER_T *VAR_1,
   ASF_PACKET_STATE *VAR_2, uint8_t *VAR_3, uint32_t *VAR_4 )
{
   uint32_t VAR_5 = VAR_2->subpayload_size;

   if(VAR_3 && *VAR_4 < VAR_5) VAR_5 = *VAR_4;

   if(!VAR_2->subpayload_size)
      return VAR_0;

   VAR_2->payload_size -= VAR_5;
   if(!VAR_2->payload_size) VAR_2->current_payload++;
   VAR_2->subpayload_size -= VAR_5;
   VAR_2->media_object_off += VAR_5;

   if(VAR_3) *VAR_4 = FUNC_0(VAR_1, VAR_3, VAR_5);
   else *VAR_4 = FUNC_1(VAR_1, VAR_5);

   VAR_2->current_offset += VAR_5;

   if(*VAR_4!= VAR_5)
      return FUNC_2(VAR_1);

   return VAR_0;
}
