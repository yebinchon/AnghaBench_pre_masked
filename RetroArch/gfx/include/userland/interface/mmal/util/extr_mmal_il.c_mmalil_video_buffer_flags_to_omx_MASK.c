
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

OMX_U32 FUNC_0(uint32_t VAR_4)
{
   OMX_U32 VAR_5 = 0;

   if (VAR_4 & VAR_0)
      VAR_5 |= VAR_2;
   if (VAR_4 & VAR_1)
     VAR_5 |= VAR_3;

  return VAR_5;
}
