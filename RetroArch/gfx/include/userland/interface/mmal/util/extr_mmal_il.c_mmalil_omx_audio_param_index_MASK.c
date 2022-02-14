
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ coding; int index; int size; } ;
typedef int OMX_U32 ;
typedef int OMX_INDEXTYPE ;
typedef scalar_t__ OMX_AUDIO_CODINGTYPE ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;

OMX_INDEXTYPE FUNC_0(OMX_AUDIO_CODINGTYPE VAR_2, OMX_U32 *VAR_3)
{
   unsigned int VAR_4;
   for(VAR_4 = 0; VAR_1[VAR_4].coding != VAR_0; VAR_4++)
      if(VAR_1[VAR_4].coding == VAR_2) break;

   if(VAR_3) *VAR_3 = VAR_1[VAR_4].size;
   return VAR_1[VAR_4].index;
}
