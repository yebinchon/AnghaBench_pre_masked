
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (struct bnx2x*) ;
 scalar_t__ FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (struct bnx2x*) ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (struct bnx2x*,int ) ;
 int FUNC_6 (struct bnx2x*,scalar_t__,int) ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_7 (struct bnx2x*,int ,int ) ;
 int FUNC_8 (struct bnx2x*) ;
 int FUNC_9 (struct bnx2x*,int ,int) ;
 int* FUNC_10 (struct bnx2x*,int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int,int) ;
 int * VAR_17 ;

__attribute__((used)) static int FUNC_13(struct bnx2x *VAR_18)
{
 int VAR_19;
 int VAR_20, VAR_21;
 u32 VAR_22 = 0;

 if (FUNC_2(VAR_18))
  VAR_19 = 120;
 else if (FUNC_1(VAR_18))
  VAR_19 = 200;
 else
  VAR_19 = 1;


 FUNC_6(VAR_18, VAR_16, 0x0);
 FUNC_6(VAR_18, VAR_15, 0x0);
 FUNC_6(VAR_18, VAR_2, 0x1);
 FUNC_6(VAR_18, VAR_9, 0x0);


 FUNC_6(VAR_18, VAR_12, 0x0);


 FUNC_8(VAR_18);



 VAR_20 = 1000 * VAR_19;
 while (VAR_20) {

  FUNC_9(VAR_18, VAR_10, 2);
  VAR_22 = *FUNC_10(VAR_18, VAR_17[0]);
  if (VAR_22 == 0x10)
   break;

  FUNC_12(10000, 20000);
  VAR_20--;
 }
 if (VAR_22 != 0x10) {
  FUNC_0("NIG timeout  val = 0x%x\n", VAR_22);
  return -1;
 }


 VAR_20 = 1000 * VAR_19;
 while (VAR_20) {
  VAR_22 = FUNC_5(VAR_18, VAR_14);
  if (VAR_22 == 1)
   break;

  FUNC_12(10000, 20000);
  VAR_20--;
 }
 if (VAR_22 != 0x1) {
  FUNC_0("PRS timeout val = 0x%x\n", VAR_22);
  return -2;
 }


 FUNC_6(VAR_18, VAR_3 + VAR_4, 0x03);
 FUNC_11(50);
 FUNC_6(VAR_18, VAR_3 + VAR_5, 0x03);
 FUNC_11(50);
 FUNC_7(VAR_18, VAR_0, VAR_11);
 FUNC_7(VAR_18, VAR_1, VAR_11);

 FUNC_4(VAR_6, "part2\n");


 FUNC_6(VAR_18, VAR_16, 0x0);
 FUNC_6(VAR_18, VAR_15, 0x0);
 FUNC_6(VAR_18, VAR_2, 0x1);
 FUNC_6(VAR_18, VAR_9, 0x0);


 FUNC_6(VAR_18, VAR_12, 0x0);


 for (VAR_21 = 0; VAR_21 < 10; VAR_21++)
  FUNC_8(VAR_18);



 VAR_20 = 1000 * VAR_19;
 while (VAR_20) {

  FUNC_9(VAR_18, VAR_10, 2);
  VAR_22 = *FUNC_10(VAR_18, VAR_17[0]);
  if (VAR_22 == 0xb0)
   break;

  FUNC_12(10000, 20000);
  VAR_20--;
 }
 if (VAR_22 != 0xb0) {
  FUNC_0("NIG timeout  val = 0x%x\n", VAR_22);
  return -3;
 }


 VAR_22 = FUNC_5(VAR_18, VAR_14);
 if (VAR_22 != 2)
  FUNC_0("PRS timeout  val = 0x%x\n", VAR_22);


 FUNC_6(VAR_18, VAR_12, 0x1);


 FUNC_11(10 * VAR_19);

 VAR_22 = FUNC_5(VAR_18, VAR_14);
 if (VAR_22 != 3)
  FUNC_0("PRS timeout  val = 0x%x\n", VAR_22);


 for (VAR_21 = 0; VAR_21 < 11; VAR_21++)
  FUNC_5(VAR_18, VAR_8);
 VAR_22 = FUNC_5(VAR_18, VAR_7);
 if (VAR_22 != 1) {
  FUNC_0("clear of NIG failed\n");
  return -4;
 }


 FUNC_6(VAR_18, VAR_3 + VAR_4, 0x03);
 FUNC_11(50);
 FUNC_6(VAR_18, VAR_3 + VAR_5, 0x03);
 FUNC_11(50);
 FUNC_7(VAR_18, VAR_0, VAR_11);
 FUNC_7(VAR_18, VAR_1, VAR_11);
 if (!FUNC_3(VAR_18))

  FUNC_6(VAR_18, VAR_13, 1);


 FUNC_6(VAR_18, VAR_16, 0x7fffffff);
 FUNC_6(VAR_18, VAR_15, 0x1);
 FUNC_6(VAR_18, VAR_2, 0x0);
 FUNC_6(VAR_18, VAR_9, 0x1);

 FUNC_4(VAR_6, "done\n");

 return 0;
}
