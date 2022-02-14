
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct __gx_texregion {int tmem_even; int tmem_odd; scalar_t__ ismipmap; } ;
typedef scalar_t__ s32 ;
typedef int GXTexRegion ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int,int) ;
 scalar_t__ FUNC_2 (int,int,int) ;
 int FUNC_3 () ;

void FUNC_4(GXTexRegion *VAR_0)
{
 u8 VAR_1;
 s32 VAR_2,VAR_3,VAR_4,VAR_5;
 u32 VAR_6,VAR_7,VAR_8 = 0,VAR_9 = 0;
 struct __gx_texregion *VAR_10 = (struct __gx_texregion*)VAR_0;

 VAR_2 = (FUNC_2(VAR_10->tmem_even,15,3))-1;
 VAR_3 = (FUNC_2(VAR_10->tmem_even,18,3))-1;

 VAR_4 = (FUNC_2(VAR_10->tmem_odd,15,3))-1;
 VAR_5 = (FUNC_2(VAR_10->tmem_odd,18,3))-1;

 if(VAR_2<0) VAR_2 = 0;
 if(VAR_3<0) VAR_3 = 0;
 if(VAR_4<0) VAR_4 = 0;
 if(VAR_5<0) VAR_5 = 0;

 VAR_1 = VAR_10->ismipmap;

 VAR_7 = VAR_6 = VAR_2+VAR_3;
 if(VAR_1) VAR_6 = (VAR_7+VAR_4+VAR_5)-2;
 VAR_8 = FUNC_2((VAR_10->tmem_even&0x7fff),6,9)|(FUNC_1(VAR_6,9,4))|(FUNC_1(0x66,24,8));

 if(VAR_4!=0) {
  VAR_6 = VAR_4+VAR_5;
  if(VAR_1) VAR_6 += (VAR_7-2);
  VAR_9 = FUNC_2((VAR_10->tmem_odd&0x7fff),6,9)|(FUNC_1(VAR_6,9,4))|(FUNC_1(0x66,24,8));
 }
 FUNC_3();
 FUNC_0(VAR_8);
 if(VAR_4!=0) FUNC_0(VAR_9);
 FUNC_3();
}
