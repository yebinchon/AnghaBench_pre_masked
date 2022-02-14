
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct bnx2x*,int ) ;
 int FUNC_3 (struct bnx2x*,int ,int) ;
 int FUNC_4 (struct bnx2x*,int ) ;
 int FUNC_5 (struct bnx2x*,int ) ;

int FUNC_6(struct bnx2x *VAR_7, u8 VAR_8, u32 VAR_9)
{
 u32 VAR_10 = 0;
 int VAR_11 = 0;



 FUNC_4(VAR_7, VAR_1);

 VAR_10 = FUNC_2(VAR_7, VAR_5);
 VAR_10 &= ~(VAR_8 << VAR_3);
 VAR_10 &= ~(VAR_8 << VAR_2);
 VAR_10 &= ~(VAR_8 << VAR_4);

 switch (VAR_9) {
 case 128:
  FUNC_1(VAR_6, "Set GPIO 0x%x -> output low\n", VAR_8);

  VAR_10 |= (VAR_8 << VAR_2);
  break;

 case 129:
  FUNC_1(VAR_6, "Set GPIO 0x%x -> output high\n", VAR_8);

  VAR_10 |= (VAR_8 << VAR_4);
  break;

 case 130:
  FUNC_1(VAR_6, "Set GPIO 0x%x -> input\n", VAR_8);

  VAR_10 |= (VAR_8 << VAR_3);
  break;

 default:
  FUNC_0("Invalid GPIO mode assignment %d\n", VAR_9);
  VAR_11 = -VAR_0;
  break;
 }

 if (VAR_11 == 0)
  FUNC_3(VAR_7, VAR_5, VAR_10);

 FUNC_5(VAR_7, VAR_1);

 return VAR_11;
}
