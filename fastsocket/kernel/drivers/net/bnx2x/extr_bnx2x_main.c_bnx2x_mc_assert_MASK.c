
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct bnx2x {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,int,...) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct bnx2x*,scalar_t__) ;
 char FUNC_3 (struct bnx2x*,scalar_t__) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct bnx2x *VAR_10)
{
 char VAR_11;
 int VAR_12, VAR_13 = 0;
 u32 VAR_14, VAR_15, VAR_16, VAR_17;


 VAR_11 = FUNC_3(VAR_10, VAR_3 +
      VAR_9);
 if (VAR_11)
  FUNC_0("XSTORM_ASSERT_LIST_INDEX 0x%x\n", VAR_11);


 for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {

  VAR_14 = FUNC_2(VAR_10, VAR_3 +
         FUNC_6(VAR_12));
  VAR_15 = FUNC_2(VAR_10, VAR_3 +
         FUNC_6(VAR_12) + 4);
  VAR_16 = FUNC_2(VAR_10, VAR_3 +
         FUNC_6(VAR_12) + 8);
  VAR_17 = FUNC_2(VAR_10, VAR_3 +
         FUNC_6(VAR_12) + 12);

  if (VAR_14 != VAR_4) {
   FUNC_0("XSTORM_ASSERT_INDEX 0x%x = 0x%08x 0x%08x 0x%08x 0x%08x\n",
      VAR_12, VAR_17, VAR_16, VAR_15, VAR_14);
   VAR_13++;
  } else {
   break;
  }
 }


 VAR_11 = FUNC_3(VAR_10, VAR_1 +
      VAR_7);
 if (VAR_11)
  FUNC_0("TSTORM_ASSERT_LIST_INDEX 0x%x\n", VAR_11);


 for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {

  VAR_14 = FUNC_2(VAR_10, VAR_1 +
         FUNC_4(VAR_12));
  VAR_15 = FUNC_2(VAR_10, VAR_1 +
         FUNC_4(VAR_12) + 4);
  VAR_16 = FUNC_2(VAR_10, VAR_1 +
         FUNC_4(VAR_12) + 8);
  VAR_17 = FUNC_2(VAR_10, VAR_1 +
         FUNC_4(VAR_12) + 12);

  if (VAR_14 != VAR_4) {
   FUNC_0("TSTORM_ASSERT_INDEX 0x%x = 0x%08x 0x%08x 0x%08x 0x%08x\n",
      VAR_12, VAR_17, VAR_16, VAR_15, VAR_14);
   VAR_13++;
  } else {
   break;
  }
 }


 VAR_11 = FUNC_3(VAR_10, VAR_0 +
      VAR_5);
 if (VAR_11)
  FUNC_0("CSTORM_ASSERT_LIST_INDEX 0x%x\n", VAR_11);


 for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {

  VAR_14 = FUNC_2(VAR_10, VAR_0 +
         FUNC_1(VAR_12));
  VAR_15 = FUNC_2(VAR_10, VAR_0 +
         FUNC_1(VAR_12) + 4);
  VAR_16 = FUNC_2(VAR_10, VAR_0 +
         FUNC_1(VAR_12) + 8);
  VAR_17 = FUNC_2(VAR_10, VAR_0 +
         FUNC_1(VAR_12) + 12);

  if (VAR_14 != VAR_4) {
   FUNC_0("CSTORM_ASSERT_INDEX 0x%x = 0x%08x 0x%08x 0x%08x 0x%08x\n",
      VAR_12, VAR_17, VAR_16, VAR_15, VAR_14);
   VAR_13++;
  } else {
   break;
  }
 }


 VAR_11 = FUNC_3(VAR_10, VAR_2 +
      VAR_8);
 if (VAR_11)
  FUNC_0("USTORM_ASSERT_LIST_INDEX 0x%x\n", VAR_11);


 for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {

  VAR_14 = FUNC_2(VAR_10, VAR_2 +
         FUNC_5(VAR_12));
  VAR_15 = FUNC_2(VAR_10, VAR_2 +
         FUNC_5(VAR_12) + 4);
  VAR_16 = FUNC_2(VAR_10, VAR_2 +
         FUNC_5(VAR_12) + 8);
  VAR_17 = FUNC_2(VAR_10, VAR_2 +
         FUNC_5(VAR_12) + 12);

  if (VAR_14 != VAR_4) {
   FUNC_0("USTORM_ASSERT_INDEX 0x%x = 0x%08x 0x%08x 0x%08x 0x%08x\n",
      VAR_12, VAR_17, VAR_16, VAR_15, VAR_14);
   VAR_13++;
  } else {
   break;
  }
 }

 return VAR_13;
}
