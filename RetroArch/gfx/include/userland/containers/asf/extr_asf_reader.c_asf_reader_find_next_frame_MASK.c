
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef unsigned int uint32_t ;
struct TYPE_13__ {TYPE_2__** tracks; } ;
typedef TYPE_3__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_14__ {int stream_num; int media_object_off; } ;
struct TYPE_12__ {TYPE_1__* format; } ;
struct TYPE_11__ {scalar_t__ es_type; } ;
typedef TYPE_4__ ASF_PACKET_STATE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_3__*,TYPE_4__*,int ,unsigned int*) ;
 scalar_t__ FUNC_1 (TYPE_3__*,TYPE_4__*,unsigned int*,unsigned int*) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_2( VC_CONTAINER_T *VAR_3,
   unsigned int VAR_4, ASF_PACKET_STATE *VAR_5, bool VAR_6, bool VAR_7 )
{
   VC_CONTAINER_STATUS_T VAR_8 = VAR_2;
   uint32_t VAR_9, VAR_10;
   unsigned int VAR_11 = 0;

   if(VAR_3->tracks[VAR_4]->format->es_type != VAR_1)
      VAR_6 = 0;


   while(VAR_8 == VAR_2 &&
         (!VAR_7 || VAR_11++ < VAR_0))
   {
      VAR_8 = FUNC_1( VAR_3, VAR_5, &VAR_9, &VAR_10 );
      if(VAR_8 != VAR_2) break;

      if(VAR_9 == VAR_4 && ((VAR_5->stream_num >> 7) || !VAR_6) &&
         !VAR_5->media_object_off) break;


      VAR_8 = FUNC_0(VAR_3, VAR_5, 0, &VAR_10 );
   }

   return VAR_8;
}
