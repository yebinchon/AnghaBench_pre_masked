
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct __gx_texregion {int tmem_even; int tmem_odd; int ismipmap; int iscached; } ;
typedef int GXTexRegion ;





 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int,int,int) ;

void FUNC_2(GXTexRegion *VAR_0,u8 VAR_1,u32 VAR_2,u8 VAR_3,u32 VAR_4,u8 VAR_5)
{
 u32 VAR_6 = 0;
 struct __gx_texregion *VAR_7 = (struct __gx_texregion*)VAR_0;

 switch(VAR_3) {
  case 129:
   VAR_6 = 3;
   break;
  case 130:
   VAR_6 = 4;
   break;
  case 128:
   VAR_6 = 5;
   break;
  default:
   VAR_6 = 3;
   break;
 }
 VAR_7->tmem_even = 0;
 VAR_7->tmem_even = (VAR_7->tmem_even&~0x7fff)|(FUNC_1(VAR_2,5,15));
 VAR_7->tmem_even = (VAR_7->tmem_even&~0x38000)|(FUNC_0(VAR_6,15,3));
 VAR_7->tmem_even = (VAR_7->tmem_even&~0x1C0000)|(FUNC_0(VAR_6,18,3));

 switch(VAR_5) {
  case 129:
   VAR_6 = 3;
   break;
  case 130:
   VAR_6 = 4;
   break;
  case 128:
   VAR_6 = 5;
   break;
  default:
   VAR_6 = 3;
   break;
 }
 VAR_7->tmem_odd = 0;
 VAR_7->tmem_odd = (VAR_7->tmem_odd&~0x7fff)|(FUNC_1(VAR_4,5,15));
 VAR_7->tmem_odd = (VAR_7->tmem_odd&~0x38000)|(FUNC_0(VAR_6,15,3));
 VAR_7->tmem_odd = (VAR_7->tmem_odd&~0x1C0000)|(FUNC_0(VAR_6,18,3));

 VAR_7->ismipmap = VAR_1;
 VAR_7->iscached = 1;
}
