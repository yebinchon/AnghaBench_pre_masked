
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






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
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct bnx2x*,int ) ;
 int FUNC_3 (struct bnx2x*,int ,int) ;
 int FUNC_4 (struct bnx2x*,int ) ;
 int FUNC_5 (struct bnx2x*,int ) ;

__attribute__((used)) static int FUNC_6(struct bnx2x *VAR_10, int VAR_11, u32 VAR_12)
{
 u32 VAR_13;


 if ((VAR_11 != VAR_7) && (VAR_11 != VAR_8)) {
  FUNC_0("Invalid SPIO 0x%x\n", VAR_11);
  return -VAR_0;
 }

 FUNC_4(VAR_10, VAR_1);

 VAR_13 = (FUNC_2(VAR_10, VAR_2) & VAR_4);

 switch (VAR_12) {
 case 128:
  FUNC_1(VAR_9, "Set SPIO 0x%x -> output low\n", VAR_11);

  VAR_13 &= ~(VAR_11 << VAR_5);
  VAR_13 |= (VAR_11 << VAR_3);
  break;

 case 129:
  FUNC_1(VAR_9, "Set SPIO 0x%x -> output high\n", VAR_11);

  VAR_13 &= ~(VAR_11 << VAR_5);
  VAR_13 |= (VAR_11 << VAR_6);
  break;

 case 130:
  FUNC_1(VAR_9, "Set SPIO 0x%x -> input\n", VAR_11);

  VAR_13 |= (VAR_11 << VAR_5);
  break;

 default:
  break;
 }

 FUNC_3(VAR_10, VAR_2, VAR_13);
 FUNC_5(VAR_10, VAR_1);

 return 0;
}
