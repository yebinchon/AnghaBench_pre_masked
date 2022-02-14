
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ int64_t ;
typedef void* VC_CONTAINER_STATUS_T ;
struct TYPE_5__ {unsigned int (* pf_read ) (TYPE_1__*,int *,unsigned int) ;void* status; TYPE_2__* priv; } ;
typedef TYPE_1__ VC_CONTAINER_IO_T ;
struct TYPE_6__ {scalar_t__ actual_offset; } ;
typedef TYPE_2__ VC_CONTAINER_IO_PRIVATE_T ;


 unsigned int FUNC_0 (scalar_t__,int) ;
 void* VAR_0 ;
 void* VAR_1 ;
 unsigned int FUNC_1 (TYPE_1__*,int *,unsigned int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_3(VC_CONTAINER_IO_T *VAR_2, int64_t VAR_3)
{
   VC_CONTAINER_IO_PRIVATE_T *VAR_4 = VAR_2->priv;

   FUNC_2(VAR_3 >= VAR_4->actual_offset);
   if(VAR_3 == VAR_4->actual_offset) return VAR_1;

   if(VAR_3 < VAR_4->actual_offset)
   {
      VAR_2->status = VAR_0;
      return VAR_2->status;
   }

   VAR_3 -= VAR_4->actual_offset;
   while(VAR_3 && !VAR_2->status)
   {
      uint8_t VAR_5[64];
      unsigned int VAR_6, VAR_7 = FUNC_0(VAR_3, 64);
      VAR_6 = VAR_2->pf_read(VAR_2, VAR_5, VAR_7);
      if(VAR_6 != VAR_7) VAR_2->status = VAR_0;
      VAR_3 -= VAR_6;
   }
   return VAR_2->status;
}
