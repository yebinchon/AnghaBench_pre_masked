
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum pcm_format { ____Placeholder_pcm_format } pcm_format ;
unsigned int FUNC_0(enum pcm_format VAR_0)
{
   switch (VAR_0)
   {
      case 129:
      case 130:
      case 131:
      case 132:
         return 32;
      case 133:
      case 134:
         return 24;
      default:
      case 135:
      case 136:
         return 16;
      case 128:
         return 8;
   }
}
