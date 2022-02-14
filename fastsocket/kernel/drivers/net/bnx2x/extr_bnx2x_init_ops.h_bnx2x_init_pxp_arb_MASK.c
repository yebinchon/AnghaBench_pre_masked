
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct bnx2x {int dummy; } ;
struct TYPE_8__ {scalar_t__ l; scalar_t__ add; scalar_t__ ubound; } ;
struct TYPE_7__ {int l; int add; int ubound; } ;
struct TYPE_6__ {scalar_t__ l; scalar_t__ add; scalar_t__ ubound; } ;
struct TYPE_5__ {int l; int add; int ubound; } ;


 scalar_t__ FUNC_0 (struct bnx2x*) ;
 scalar_t__ FUNC_1 (struct bnx2x*) ;
 scalar_t__ FUNC_2 (struct bnx2x*) ;
 scalar_t__ FUNC_3 (struct bnx2x*) ;
 scalar_t__ FUNC_4 (struct bnx2x*) ;
 int FUNC_5 (int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 int FUNC_6 (struct bnx2x*,scalar_t__) ;
 int FUNC_7 (struct bnx2x*,scalar_t__,int) ;
 TYPE_4__* VAR_28 ;
 TYPE_3__** VAR_29 ;
 TYPE_2__* VAR_30 ;
 TYPE_1__** VAR_31 ;

__attribute__((used)) static void FUNC_8(struct bnx2x *VAR_32, int VAR_33,
          int VAR_34)
{
 u32 VAR_35, VAR_36;

 if (VAR_33 > VAR_0) {
  FUNC_5(VAR_2, "read order of %d  order adjusted to %d\n",
     VAR_33, VAR_0);
  VAR_33 = VAR_0;
 }
 if (VAR_34 > VAR_1) {
  FUNC_5(VAR_2, "write order of %d  order adjusted to %d\n",
     VAR_34, VAR_1);
  VAR_34 = VAR_1;
 }
 if (FUNC_4(VAR_32)) {
  FUNC_5(VAR_2, "write order adjusted to 1 for FPGA\n");
  VAR_34 = 0;
 }
 FUNC_5(VAR_2, "read order %d  write order %d\n", VAR_33, VAR_34);

 for (VAR_36 = 0; VAR_36 < VAR_3-1; VAR_36++) {
  FUNC_7(VAR_32, VAR_28[VAR_36].l, VAR_29[VAR_36][VAR_33].l);
  FUNC_7(VAR_32, VAR_28[VAR_36].add,
         VAR_29[VAR_36][VAR_33].add);
  FUNC_7(VAR_32, VAR_28[VAR_36].ubound,
         VAR_29[VAR_36][VAR_33].ubound);
 }

 for (VAR_36 = 0; VAR_36 < VAR_4-1; VAR_36++) {
  if ((VAR_30[VAR_36].l == VAR_9) ||
      (VAR_30[VAR_36].l == VAR_10)) {

   FUNC_7(VAR_32, VAR_30[VAR_36].l,
          VAR_31[VAR_36][VAR_34].l);

   FUNC_7(VAR_32, VAR_30[VAR_36].add,
          VAR_31[VAR_36][VAR_34].add);

   FUNC_7(VAR_32, VAR_30[VAR_36].ubound,
          VAR_31[VAR_36][VAR_34].ubound);
  } else {

   VAR_35 = FUNC_6(VAR_32, VAR_30[VAR_36].l);
   FUNC_7(VAR_32, VAR_30[VAR_36].l,
          VAR_35 | (VAR_31[VAR_36][VAR_34].l << 10));

   VAR_35 = FUNC_6(VAR_32, VAR_30[VAR_36].add);
   FUNC_7(VAR_32, VAR_30[VAR_36].add,
          VAR_35 | (VAR_31[VAR_36][VAR_34].add << 10));

   VAR_35 = FUNC_6(VAR_32, VAR_30[VAR_36].ubound);
   FUNC_7(VAR_32, VAR_30[VAR_36].ubound,
          VAR_35 | (VAR_31[VAR_36][VAR_34].ubound << 7));
  }
 }

 VAR_35 = VAR_31[VAR_4-1][VAR_34].add;
 VAR_35 += VAR_31[VAR_4-1][VAR_34].ubound << 10;
 VAR_35 += VAR_31[VAR_4-1][VAR_34].l << 17;
 FUNC_7(VAR_32, VAR_7, VAR_35);

 VAR_35 = VAR_29[VAR_3-1][VAR_33].add;
 VAR_35 += VAR_29[VAR_3-1][VAR_33].ubound << 10;
 VAR_35 += VAR_29[VAR_3-1][VAR_33].l << 17;
 FUNC_7(VAR_32, VAR_8, VAR_35);

 FUNC_7(VAR_32, VAR_14, VAR_34);
 FUNC_7(VAR_32, VAR_15, VAR_34);
 FUNC_7(VAR_32, VAR_12, VAR_33);
 FUNC_7(VAR_32, VAR_13, VAR_33);

 if ((FUNC_0(VAR_32) || FUNC_1(VAR_32)) && (VAR_33 == VAR_0))
  FUNC_7(VAR_32, VAR_11, 0xe00);

 if (FUNC_3(VAR_32))
  FUNC_7(VAR_32, VAR_25, (0x4 << VAR_34));
 else if (FUNC_2(VAR_32))
  FUNC_7(VAR_32, VAR_25, (0x8 << VAR_34));
 else
  FUNC_7(VAR_32, VAR_25, (0x18 << VAR_34));

 if (!FUNC_0(VAR_32)) {






  if (!FUNC_1(VAR_32)) {

   VAR_35 = VAR_34;
   FUNC_7(VAR_32, VAR_19, VAR_35);
  } else {
   VAR_35 = ((VAR_34 == 0) ? 2 : 3);
   FUNC_7(VAR_32, VAR_19, 2);
  }

  FUNC_7(VAR_32, VAR_20, VAR_35);
  FUNC_7(VAR_32, VAR_26, VAR_35);
  FUNC_7(VAR_32, VAR_17, VAR_35);
  FUNC_7(VAR_32, VAR_24, VAR_35);
  FUNC_7(VAR_32, VAR_27, VAR_35);
  FUNC_7(VAR_32, VAR_21, VAR_35);
  FUNC_7(VAR_32, VAR_23, VAR_35);
  FUNC_7(VAR_32, VAR_22, VAR_35);
  FUNC_7(VAR_32, VAR_18, VAR_35);
  FUNC_7(VAR_32, VAR_16, VAR_35);
 }



 VAR_35 = FUNC_6(VAR_32, 0x2980);
 VAR_35 &= 0xFF;
 if (VAR_35 <= 0x20)
  FUNC_7(VAR_32, VAR_6, 0x20);
}
