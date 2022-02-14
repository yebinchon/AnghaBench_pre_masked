
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ int64_t ;
typedef int dummy ;
struct TYPE_16__ {scalar_t__ duration; TYPE_1__* priv; } ;
typedef TYPE_4__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_17__ {TYPE_3__* track; scalar_t__ filesize; scalar_t__ sent; TYPE_6__* seg; TYPE_6__* pass; } ;
typedef TYPE_5__ VC_CONTAINER_MODULE_T ;
struct TYPE_18__ {int* data; struct TYPE_18__* next; scalar_t__ len; } ;
struct TYPE_15__ {TYPE_2__* format; } ;
struct TYPE_14__ {int* extradata; int extradata_size; } ;
struct TYPE_13__ {TYPE_5__* module; } ;
typedef TYPE_6__ QSYNTH_SEGMENT_T ;


 scalar_t__ FUNC_0 (int*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_4__*,int*,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_4__*,int*,scalar_t__) ;
 int FUNC_3 (TYPE_4__*,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_6__* FUNC_4 (int) ;
 int FUNC_5 (int*,int*,int) ;
 int FUNC_6 (int*,scalar_t__*,scalar_t__*,int*,int*) ;
 int FUNC_7 (TYPE_6__*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_8(VC_CONTAINER_T *VAR_6)
{
   VC_CONTAINER_MODULE_T *VAR_7 = VAR_6->priv->module;
   VC_CONTAINER_STATUS_T VAR_8;
   QSYNTH_SEGMENT_T **VAR_9 = &(VAR_7->seg);
   uint32_t VAR_10, VAR_11, VAR_12 = 0, VAR_13 = 0, VAR_14 = 500000;
   uint32_t VAR_15 = 0, VAR_16 = 0;
   int64_t VAR_17 = 0;
   uint8_t VAR_18 = 1, VAR_19 = 1;

   if((*VAR_9 = FUNC_4(sizeof(QSYNTH_SEGMENT_T) + VAR_0)) == ((void*)0))
      return VAR_4;

   (*VAR_9)->next = ((void*)0);
   (*VAR_9)->len = VAR_0;
   (*VAR_9)->data = (uint8_t *) ((*VAR_9) + 1);

   if(FUNC_1(VAR_6, (*VAR_9)->data, VAR_0) != VAR_0)
      return VAR_3;

   if((VAR_8 = FUNC_6((*VAR_9)->data, &VAR_11, &VAR_12, &VAR_18, &VAR_19)) != VAR_5)
      return VAR_8;


   if(VAR_11 > VAR_1)
      return VAR_3;

   FUNC_3(VAR_6, VAR_0);

   VAR_9 = &((*VAR_9)->next);
   VAR_7->filesize = VAR_0;

   if(VAR_12 == 0)
   {
      VAR_14 = 1000000 / (VAR_18 * VAR_19);
      VAR_12 = 1;
   }

   for(VAR_10=0; VAR_10<VAR_11; VAR_10++)
   {
      uint32_t VAR_20, VAR_21, VAR_22;
      int64_t VAR_23;
      uint8_t VAR_24[8];

      if(FUNC_2(VAR_6, VAR_24, sizeof(VAR_24)) != sizeof(VAR_24) ||
         VAR_24[0] != 'M' || VAR_24[1] != 'T' || VAR_24[2] != 'r' || VAR_24[3] != 'k')
         return VAR_2;

      VAR_20 = FUNC_0(VAR_24+4);


      if(VAR_20 > (1<<20) || (*VAR_9 = FUNC_4(sizeof(QSYNTH_SEGMENT_T) + 8 + VAR_20)) == ((void*)0))
         return VAR_4;

      VAR_7->filesize += VAR_20+8;
      (*VAR_9)->next = ((void*)0);
      (*VAR_9)->len = VAR_20 + 8;
      (*VAR_9)->data = (uint8_t *) ((*VAR_9) + 1);

      FUNC_5((*VAR_9)->data, VAR_24, 8);
      if(FUNC_2(VAR_6, (*VAR_9)->data+8, VAR_20) != VAR_20)
         return VAR_2;

      if((VAR_8 = FUNC_7(*VAR_9, &VAR_21, &VAR_23, &VAR_14, &VAR_22)) != VAR_5)
         return VAR_8;

      if(VAR_15 == 0)
      {
         VAR_15 = VAR_14;
         VAR_16 = VAR_22;
         VAR_17 = VAR_23;
      }

      if(VAR_21 > VAR_13)
         VAR_13 = VAR_21;

      VAR_9 = &((*VAR_9)->next);
   }

   if(VAR_15 == 0)
      return VAR_2;

   VAR_7->pass = VAR_7->seg;
   VAR_7->sent = 0;
   VAR_6->duration = (VAR_17 + (((int64_t) (VAR_13 - VAR_16)) * VAR_15)) / VAR_12;
   VAR_7->track->format->extradata = (uint8_t *) &VAR_7->filesize;
   VAR_7->track->format->extradata_size = 4;
   return VAR_5;
}
