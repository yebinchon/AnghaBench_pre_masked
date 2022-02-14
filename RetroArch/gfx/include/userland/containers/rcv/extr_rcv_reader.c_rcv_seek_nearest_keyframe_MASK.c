
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef long long int64_t ;
struct TYPE_12__ {TYPE_1__* priv; } ;
typedef TYPE_2__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_14__ {long long timestamp; scalar_t__ framesize; scalar_t__ keyframe; } ;
struct TYPE_13__ {int frame_read; TYPE_5__ frame; scalar_t__ index; scalar_t__ mid_frame; } ;
typedef TYPE_3__ VC_CONTAINER_MODULE_T ;
struct TYPE_11__ {TYPE_3__* module; } ;
typedef int RCV_FRAME_HEADER_T ;
typedef int RCV_FILE_HEADER_T ;


 int FUNC_0 (TYPE_2__*,TYPE_5__*,int) ;
 int FUNC_1 (TYPE_2__*,long long) ;
 int FUNC_2 (TYPE_2__*,scalar_t__) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (TYPE_5__*,int ,int) ;
 int FUNC_5 (scalar_t__,long long,int) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_6(VC_CONTAINER_T *VAR_2, int64_t *VAR_3, int VAR_4)
{
   VC_CONTAINER_MODULE_T *VAR_5 = VAR_2->priv->module;
   VC_CONTAINER_STATUS_T VAR_6 = VAR_1;
   int64_t VAR_7 = sizeof(RCV_FILE_HEADER_T);
   int64_t VAR_8 = 0;
   int VAR_9 = !VAR_4;

   if(VAR_9 || (VAR_5->frame.timestamp * 1000LL > *VAR_3))
   {


      FUNC_1(VAR_2, sizeof(RCV_FILE_HEADER_T));
      FUNC_4(&VAR_5->frame, 0, sizeof(RCV_FRAME_HEADER_T));
      VAR_5->mid_frame = 0;
      VAR_5->frame_read = 0;
   }

   if(VAR_5->mid_frame)
   {

      FUNC_1(VAR_2, FUNC_3(VAR_2) - VAR_5->frame_read - sizeof(RCV_FILE_HEADER_T));
      VAR_5->mid_frame = 0;
      VAR_5->frame_read = 0;
   }

   while(1)
   {
      if(FUNC_0(VAR_2, &VAR_5->frame, sizeof(RCV_FRAME_HEADER_T)) != sizeof(RCV_FRAME_HEADER_T))
      {
         VAR_6 = VAR_0;
         break;
      }

      if(VAR_5->frame.keyframe)
      {
         if(VAR_5->index)
            FUNC_5(VAR_5->index, VAR_5->frame.timestamp * 1000LL, FUNC_3(VAR_2));

         if((VAR_5->frame.timestamp * 1000LL) >= *VAR_3)
         {
            if((VAR_5->frame.timestamp * 1000LL) == *VAR_3)
               VAR_9 = 0;

            *VAR_3 = VAR_5->frame.timestamp * 1000LL;

            break;
         }

         VAR_7 = FUNC_3(VAR_2);
         VAR_8 = VAR_5->frame.timestamp * 1000LL;
      }

      FUNC_2(VAR_2, VAR_5->frame.framesize + sizeof(RCV_FRAME_HEADER_T));
   }

   if(VAR_9)
   {
      *VAR_3 = VAR_8;
      VAR_6 = FUNC_1(VAR_2, VAR_7);
   }

   return VAR_6;
}
