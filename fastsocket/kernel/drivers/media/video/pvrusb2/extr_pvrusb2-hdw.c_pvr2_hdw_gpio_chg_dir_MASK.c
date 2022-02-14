
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pvr2_hdw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pvr2_hdw*,int ,int*) ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (struct pvr2_hdw*,int ,int) ;

int FUNC_3(struct pvr2_hdw *VAR_2,u32 VAR_3,u32 VAR_4)
{
 u32 VAR_5,VAR_6;
 int VAR_7;
 if (~VAR_3) {
  VAR_7 = FUNC_0(VAR_2,VAR_0,&VAR_5);
  if (VAR_7) return VAR_7;
  VAR_6 = (VAR_5 & ~VAR_3) | (VAR_4 & VAR_3);
  FUNC_1(VAR_1,
      "GPIO direction changing 0x%x:0x%x"
      " from 0x%x to 0x%x",
      VAR_3,VAR_4,VAR_5,VAR_6);
 } else {
  VAR_6 = VAR_4;
  FUNC_1(VAR_1,
      "GPIO direction changing to 0x%x",VAR_6);
 }
 return FUNC_2(VAR_2,VAR_0,VAR_6);
}
