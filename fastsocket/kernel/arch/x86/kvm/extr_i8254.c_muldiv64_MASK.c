
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef void* u32 ;


 void* FUNC_0 (int,void*) ;
 int FUNC_1 (int,void*) ;

__attribute__((used)) static u64 FUNC_2(u64 VAR_0, u32 VAR_1, u32 VAR_2)
{
 union {
  u64 ll;
  struct {
   u32 low, high;
  } l;
 } VAR_3, VAR_4;
 u64 VAR_5, VAR_6;

 VAR_3.ll = VAR_0;
 VAR_5 = (u64)VAR_3.l.low * (u64)VAR_1;
 VAR_6 = (u64)VAR_3.l.high * (u64)VAR_1;
 VAR_6 += (VAR_5 >> 32);
 VAR_4.l.high = FUNC_0(VAR_6, VAR_2);
 VAR_4.l.low = FUNC_0(((FUNC_1(VAR_6, VAR_2) << 32) + (VAR_5 & 0xffffffff)), VAR_2);
 return VAR_4.ll;
}
