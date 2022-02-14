
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_3__ {unsigned int data_size; unsigned int data_offset; scalar_t__ status; } ;
typedef TYPE_1__ FLV_READER_STATE_T ;


 unsigned int FUNC_0 (int *,int *,unsigned int) ;
 unsigned int FUNC_1 (int *,unsigned int) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_3( VC_CONTAINER_T *VAR_1,
   FLV_READER_STATE_T *VAR_2, uint8_t *VAR_3, unsigned int *VAR_4 )
{
   unsigned int VAR_5 = VAR_2->data_size - VAR_2->data_offset;

   if(VAR_2->status != VAR_0) return VAR_2->status;

   if(VAR_4 && *VAR_4 < VAR_5) VAR_5 = *VAR_4;

   if(!VAR_3) VAR_5 = FUNC_1(VAR_1, VAR_5);
   else VAR_5 = FUNC_0(VAR_1, VAR_3, VAR_5);
   VAR_2->data_offset += VAR_5;

   if(VAR_4) *VAR_4 = VAR_5;
   VAR_2->status = FUNC_2(VAR_1);

   return VAR_2->status;
}
