
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
typedef void* int64_t ;
struct TYPE_8__ {int tracks_num; } ;
typedef TYPE_1__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_9__ {int data_offset; int data_size; int flags; int tag_prev_size; int track; int status; int timestamp; void* data_position; void* tag_position; } ;
typedef TYPE_2__ FLV_READER_STATE_T ;


 void* FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int*,int*,int*,int *,int*,int ) ;
 int FUNC_2 (TYPE_1__*,int,int*,int *) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_3( VC_CONTAINER_T *VAR_2,
   FLV_READER_STATE_T *VAR_3)
{
   int VAR_4, VAR_5, VAR_6, VAR_7;
   uint32_t VAR_8;
   int64_t VAR_9;


   if(VAR_3->data_offset < VAR_3->data_size)
      return VAR_3->status;


   VAR_9 = FUNC_0(VAR_2);
   VAR_3->status = FUNC_1(VAR_2, &VAR_5, &VAR_4,
                                         &VAR_6, &VAR_8, &VAR_7, 0);
   if(VAR_3->status != VAR_1)
      return VAR_3->status;

   VAR_3->status = FUNC_2(VAR_2, VAR_4, &VAR_6, &VAR_8);
   if(VAR_3->status == VAR_0)
   {

      VAR_3->status = VAR_1;
      VAR_4 = VAR_2->tracks_num;
   }
   if(VAR_3->status != VAR_1)
      return VAR_3->status;

   VAR_3->tag_position = VAR_9;
   VAR_3->data_position = FUNC_0(VAR_2);
   VAR_3->data_size = VAR_6;
   VAR_3->data_offset = 0;
   VAR_3->flags = VAR_7;
   VAR_3->tag_prev_size = VAR_5;
   VAR_3->timestamp = VAR_8;
   VAR_3->track = VAR_4;
   return VAR_3->status;
}
