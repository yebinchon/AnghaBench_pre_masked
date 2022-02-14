
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct talitos_private {int num_channels; scalar_t__ reg; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 unsigned int VAR_17 ;
 int FUNC_4 () ;
 int FUNC_5 (struct device*,int) ;
 int FUNC_6 (struct device*,char*,...) ;
 struct talitos_private* FUNC_7 (struct device*) ;
 int FUNC_8 (struct device*,int,int,int) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (struct device*) ;
 int FUNC_11 (struct device*,int,int ) ;
 int FUNC_12 (struct device*,int) ;
 int FUNC_13 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_14(unsigned long VAR_18, u32 VAR_19, u32 VAR_20)
{
 struct device *VAR_21 = (struct device *)VAR_18;
 struct talitos_private *VAR_22 = FUNC_7(VAR_21);
 unsigned int VAR_23 = VAR_17;
 int VAR_24, VAR_25, VAR_26 = 0, VAR_27 = 0;
 u32 VAR_28, VAR_29;

 for (VAR_24 = 0; VAR_24 < VAR_22->num_channels; VAR_24++) {

  if (!(VAR_19 & (1 << (VAR_24 * 2 + 1))))
   continue;

  VAR_25 = -VAR_1;

  VAR_28 = FUNC_9(VAR_22->reg + FUNC_2(VAR_24));
  VAR_29 = FUNC_9(VAR_22->reg + FUNC_3(VAR_24));

  if (VAR_29 & VAR_4) {
   FUNC_6(VAR_21, "double fetch fifo overflow error\n");
   VAR_25 = -VAR_0;
   VAR_27 = 1;
  }
  if (VAR_29 & VAR_14) {

   FUNC_6(VAR_21, "single fetch fifo overflow error\n");
   VAR_25 = -VAR_0;
  }
  if (VAR_29 & VAR_11)
   FUNC_6(VAR_21, "master data transfer error\n");
  if (VAR_29 & VAR_13)
   FUNC_6(VAR_21, "s/g data length zero error\n");
  if (VAR_29 & VAR_6)
   FUNC_6(VAR_21, "fetch pointer zero error\n");
  if (VAR_29 & VAR_9)
   FUNC_6(VAR_21, "illegal descriptor header error\n");
  if (VAR_29 & VAR_10)
   FUNC_6(VAR_21, "invalid execution unit error\n");
  if (VAR_29 & VAR_5)
   FUNC_11(VAR_21, VAR_24, FUNC_5(VAR_21, VAR_24));
  if (VAR_29 & VAR_7)
   FUNC_6(VAR_21, "gather boundary error\n");
  if (VAR_29 & VAR_8)
   FUNC_6(VAR_21, "gather return/length error\n");
  if (VAR_29 & VAR_12)
   FUNC_6(VAR_21, "scatter boundary error\n");
  if (VAR_29 & VAR_15)
   FUNC_6(VAR_21, "scatter return/length error\n");

  FUNC_8(VAR_21, VAR_24, VAR_25, VAR_27);

  if (VAR_27) {
   FUNC_12(VAR_21, VAR_24);
  } else {
   FUNC_13(VAR_22->reg + FUNC_0(VAR_24),
      VAR_3);
   FUNC_13(VAR_22->reg + FUNC_1(VAR_24), 0);
   while ((FUNC_9(VAR_22->reg + FUNC_0(VAR_24)) &
          VAR_3) && --VAR_23)
    FUNC_4();
   if (VAR_23 == 0) {
    FUNC_6(VAR_21, "failed to restart channel %d\n",
     VAR_24);
    VAR_26 = 1;
   }
  }
 }
 if (VAR_26 || VAR_19 & ~VAR_16 || VAR_20) {
  FUNC_6(VAR_21, "done overflow, internal time out, or rngu error: "
          "ISR 0x%08x_%08x\n", VAR_19, VAR_20);


  for (VAR_24 = 0; VAR_24 < VAR_22->num_channels; VAR_24++)
   FUNC_8(VAR_21, VAR_24, -VAR_2, 1);


  FUNC_10(VAR_21);
 }
}
