
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef char uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int int64_t ;
struct TYPE_12__ {TYPE_1__* priv; } ;
typedef TYPE_2__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_13__ {scalar_t__ (* pf_parse_header ) (char*,scalar_t__*,unsigned int*,unsigned int*,unsigned int*,unsigned int*,unsigned int*,unsigned int*,unsigned int*) ;int version; unsigned int layer; unsigned int sample_rate; unsigned int channels; unsigned int frame_size_samples; unsigned int frame_bitrate; scalar_t__ frame_size; scalar_t__ frame_data_left; } ;
typedef TYPE_3__ VC_CONTAINER_MODULE_T ;
struct TYPE_11__ {TYPE_3__* module; } ;


 int FUNC_0 (TYPE_2__*,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,char*,int) ;
 int FUNC_2 (TYPE_2__*,int ,char*,int) ;
 int FUNC_3 (TYPE_2__*,unsigned int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_4 (TYPE_2__*,TYPE_3__*,char*) ;
 scalar_t__ FUNC_5 (char*,scalar_t__*,unsigned int*,unsigned int*,unsigned int*,unsigned int*,unsigned int*,unsigned int*,unsigned int*) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_6( VC_CONTAINER_T *VAR_6 )
{
   VC_CONTAINER_MODULE_T *VAR_7 = VAR_6->priv->module;
   VC_CONTAINER_STATUS_T VAR_8;
   uint8_t VAR_9[VAR_0];
   uint32_t VAR_10;
   unsigned int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
   unsigned int VAR_16, VAR_17;
   int VAR_18 = 0;




   if (FUNC_1(VAR_6, (uint8_t*)VAR_9, VAR_0) != VAR_0)
      return VAR_2;

   while (VAR_18++ < VAR_1)
   {
      VAR_8 = VAR_7->pf_parse_header(VAR_9, &VAR_10, &VAR_11,
                                       &VAR_12, &VAR_13, &VAR_14, &VAR_15,
                                       &VAR_16, &VAR_17);
      if (VAR_8 == VAR_5 &&
          VAR_10 )
      {
         FUNC_0(VAR_6, "MPEGv%d, layer %d, %d bps, %d Hz",
                   VAR_12, VAR_13, VAR_11, VAR_14);
         if (FUNC_2(VAR_6, (int64_t)VAR_10, VAR_9, VAR_0) != VAR_0 ||
             FUNC_4(VAR_6, VAR_7, VAR_9) == VAR_5)
            break;


         if((VAR_9[0] == 'I' && VAR_9[1] == 'D' && VAR_9[2] == '3') ||
            (VAR_9[0] == 'T' && VAR_9[1] == 'A' && VAR_9[2] == 'G'))
            break;
      }
      else if (VAR_8 == VAR_5)
      {
         FUNC_0(VAR_6, "free format not supported");
      }

      if (FUNC_3(VAR_6, 1) != 1 || FUNC_1(VAR_6, (uint8_t*)VAR_9, VAR_0) != VAR_0)
         return VAR_2;
   }

   if(VAR_18 > VAR_1)
      return VAR_3;

   if (VAR_7->version)
   {

      if (VAR_12 != VAR_7->version || VAR_13 != VAR_7->layer)
      {
         FUNC_0(VAR_6, "version or layer not allowed to change mid-stream");
         return VAR_4;
      }
   }
   else
   {
      VAR_7->version = VAR_12;
      VAR_7->layer = VAR_13;
      VAR_7->sample_rate = VAR_14;
      VAR_7->channels = VAR_15;
      VAR_7->frame_size_samples = VAR_16;
   }

   if(VAR_17) FUNC_3(VAR_6, VAR_17);
   VAR_7->frame_data_left = VAR_7->frame_size = VAR_10 - VAR_17;
   VAR_7->frame_bitrate = VAR_11;

   return VAR_5;
}
