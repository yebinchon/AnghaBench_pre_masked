
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct d11rxhdr {int RxTSFTime; } ;
struct brcms_c_info {int hw; } ;


 int FUNC_0 (int ,int*,int*) ;

__attribute__((used)) static u64 FUNC_1(struct brcms_c_info *VAR_0,
     struct d11rxhdr *VAR_1)
{
 u32 VAR_2, VAR_3;
 u16 VAR_4, VAR_5;

 FUNC_0(VAR_0->hw, &VAR_3, &VAR_2);

 VAR_5 = (u16)(VAR_3 >> 16);
 VAR_4 = VAR_1->RxTSFTime;





 if ((u16)VAR_3 < VAR_4) {
  VAR_5 -= 1;
  if (VAR_5 == 0xffff)
   VAR_2 -= 1;
 }

 return ((u64)VAR_2 << 32) | (((u32)VAR_5 << 16) + VAR_4);
}
