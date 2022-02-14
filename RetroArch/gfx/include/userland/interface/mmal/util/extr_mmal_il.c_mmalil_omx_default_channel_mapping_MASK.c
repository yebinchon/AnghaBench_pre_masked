
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int default_mapping ;
struct TYPE_6__ {int member_7; int const member_6; int const member_5; int const member_4; int const member_3; int const member_2; int const member_1; int const member_0; } ;
typedef TYPE_1__ OMX_AUDIO_CHANNELTYPE ;
typedef int MMAL_STATUS_T ;


 unsigned int FUNC_0 (TYPE_1__ const**) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,TYPE_1__ const*,int) ;

MMAL_STATUS_T FUNC_2(OMX_AUDIO_CHANNELTYPE *VAR_2, unsigned int VAR_3)
{
   static const OMX_AUDIO_CHANNELTYPE VAR_4[][8] = {
      {131},
      {137},
      {135, 130},
      {135, 130, 137},
      {135, 130, 137,
         136},
      {135, 130, 137,
         133, 129},
      {135, 130, 137,
         134, 133, 129},
      {135, 130, 137,
         134, 133, 129,
         136},
      {135, 130, 137,
         134, 133, 129,
         132, 128}
   };

   if (!VAR_3 || VAR_3 >= FUNC_0(VAR_4))
      return VAR_0;

   FUNC_1(VAR_2, VAR_4[VAR_3],
      sizeof(VAR_4[0][0]) * VAR_3);
   return VAR_1;
}
