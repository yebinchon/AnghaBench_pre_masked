
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ s32 ;
typedef scalar_t__ s16 ;



s16 FUNC_0(s16 VAR_0, s16 VAR_1)
{
 s16 VAR_2;
 s32 VAR_3 = (s32) VAR_0 - (s32) VAR_1;
 if (VAR_3 > (s32) 0x7fff)
  VAR_2 = (s16) 0x7fff;
 else if (VAR_3 < (s32) 0xffff8000)
  VAR_2 = (s16) 0xffff8000;
 else
  VAR_2 = (s16) VAR_3;

 return VAR_2;
}
