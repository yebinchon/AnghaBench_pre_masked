
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pBuffer; } ;
typedef TYPE_1__ OMX_BUFFERHEADERTYPE ;



__attribute__((used)) static int FUNC_0(OMX_BUFFERHEADERTYPE *VAR_0)
{
   if (!VAR_0->pBuffer)
      return 0;
   if ((unsigned long)VAR_0->pBuffer < 0x100)
      return 0;
   return 1;
}
