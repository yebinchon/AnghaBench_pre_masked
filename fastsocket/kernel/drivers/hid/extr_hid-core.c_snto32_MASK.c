
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int s32 ;
typedef int __u32 ;
typedef int __s8 ;
typedef int __s32 ;
typedef int __s16 ;



__attribute__((used)) static s32 FUNC_0(__u32 VAR_0, unsigned VAR_1)
{
 switch (VAR_1) {
 case 8: return ((__s8)VAR_0);
 case 16: return ((__s16)VAR_0);
 case 32: return ((__s32)VAR_0);
 }
 return VAR_0 & (1 << (VAR_1 - 1)) ? VAR_0 | (-1 << VAR_1) : VAR_0;
}
