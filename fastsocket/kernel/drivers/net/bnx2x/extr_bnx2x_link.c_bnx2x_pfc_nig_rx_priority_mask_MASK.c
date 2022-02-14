
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct bnx2x*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct bnx2x *VAR_10,
        u8 VAR_11,
        u32 VAR_12, u8 VAR_13)
{
 u32 VAR_14 = 0;

 switch (VAR_11) {
 case 0:
      VAR_14 = (VAR_13) ?
   VAR_7 :
   VAR_1;
      break;
 case 1:
     VAR_14 = (VAR_13) ?
  VAR_8 :
  VAR_2;
     break;
 case 2:
     VAR_14 = (VAR_13) ?
  VAR_9 :
  VAR_3;
     break;
 case 3:
     if (VAR_13)
  return -VAR_0;
     VAR_14 = VAR_4;
     break;
 case 4:
     if (VAR_13)
  return -VAR_0;
     VAR_14 = VAR_5;
     break;
 case 5:
     if (VAR_13)
  return -VAR_0;
     VAR_14 = VAR_6;
     break;
 }

 FUNC_0(VAR_10, VAR_14, VAR_12);

 return 0;
}
