
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ coding; scalar_t__ index; } ;
typedef scalar_t__ OMX_INDEXTYPE ;
typedef scalar_t__ OMX_AUDIO_CODINGTYPE ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;

OMX_AUDIO_CODINGTYPE FUNC_0(OMX_INDEXTYPE VAR_2)
{
   unsigned int VAR_3;
   for(VAR_3 = 0; VAR_1[VAR_3].coding != VAR_0; VAR_3++)
      if(VAR_1[VAR_3].index == VAR_2) break;

   return VAR_1[VAR_3].coding;
}
