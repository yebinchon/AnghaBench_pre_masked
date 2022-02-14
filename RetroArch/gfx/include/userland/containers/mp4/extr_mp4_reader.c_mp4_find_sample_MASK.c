
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int int64_t ;
struct TYPE_13__ {int timescale; TYPE_3__* sample_table; } ;
typedef TYPE_4__ VC_CONTAINER_TRACK_MODULE_T ;
struct TYPE_14__ {TYPE_2__** tracks; } ;
typedef TYPE_5__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_12__ {unsigned int entries; int offset; } ;
struct TYPE_11__ {TYPE_1__* priv; } ;
struct TYPE_10__ {TYPE_4__* module; } ;
typedef int MP4_READER_STATE_T ;


 scalar_t__ FUNC_0 (int,int) ;
 size_t VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_5__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_1 ;
 void* FUNC_4 (TYPE_5__*) ;

__attribute__((used)) static uint32_t FUNC_5( VC_CONTAINER_T *VAR_2, uint32_t VAR_3,
   MP4_READER_STATE_T *VAR_4, int64_t VAR_5, VC_CONTAINER_STATUS_T *VAR_6 )
{
   VC_CONTAINER_TRACK_MODULE_T *VAR_7 = VAR_2->tracks[VAR_3]->priv->module;
   VC_CONTAINER_STATUS_T VAR_8 = VAR_1;
   uint32_t VAR_9 = 0, VAR_10;
   int64_t VAR_11, VAR_12 = VAR_5 + 1;
   unsigned int VAR_13;
   FUNC_3(VAR_4);

   VAR_5 = VAR_5 * VAR_7->timescale / 1000000;


   VAR_12 = VAR_12 * VAR_7->timescale / 1000000;

   VAR_8 = FUNC_1(VAR_2, VAR_7->sample_table[VAR_0].offset);
   if(VAR_8 != VAR_1) goto end;


   for(VAR_13 = 0; VAR_13 < VAR_7->sample_table[VAR_0].entries; VAR_13++)
   {
      VAR_10 = FUNC_4(VAR_2);
      VAR_11 = FUNC_4(VAR_2);
      VAR_8 = FUNC_2(VAR_2);
      if(VAR_8 != VAR_1) break;

      if(VAR_10 * VAR_11 <= VAR_5)
      {
         VAR_5 -= VAR_10 * VAR_11;
         VAR_12 -= VAR_10 * VAR_11;
         VAR_9 += VAR_10;
         continue;
      }
      if(!VAR_11) break;

      VAR_5 /= VAR_11;
      VAR_12 /= VAR_11;
      VAR_9 += FUNC_0(VAR_5, VAR_12);
      break;
   }

 end:
   if(VAR_6) *VAR_6 = VAR_8;
   return VAR_9;
}
