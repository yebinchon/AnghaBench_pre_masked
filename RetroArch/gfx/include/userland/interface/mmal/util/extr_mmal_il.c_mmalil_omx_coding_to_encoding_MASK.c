
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int OMX_VIDEO_CODINGTYPE ;
typedef scalar_t__ OMX_PORTDOMAINTYPE ;
typedef int OMX_IMAGE_CODINGTYPE ;
typedef int OMX_AUDIO_CODINGTYPE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

uint32_t FUNC_3(uint32_t VAR_4, OMX_PORTDOMAINTYPE VAR_5)
{
   if(VAR_5 == VAR_3)
      return FUNC_2((OMX_VIDEO_CODINGTYPE)VAR_4);
   else if(VAR_5 == VAR_1)
      return FUNC_0((OMX_AUDIO_CODINGTYPE)VAR_4);
   else if(VAR_5 == VAR_2)
      return FUNC_1((OMX_IMAGE_CODINGTYPE)VAR_4);
   else
      return VAR_0;
}
