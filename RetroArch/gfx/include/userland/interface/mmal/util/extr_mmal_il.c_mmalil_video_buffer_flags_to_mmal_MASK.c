
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int OMX_U32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

uint32_t FUNC_0(OMX_U32 VAR_4)
{
   uint32_t VAR_5 = 0;

   if (VAR_4 & VAR_2)
      VAR_5 |= VAR_0;
   if (VAR_4 & VAR_3)
      VAR_5 |= VAR_1;

   return VAR_5;
}
