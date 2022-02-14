
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct bnx2x {int dummy; } ;
struct TYPE_3__ {int name; int sts_clr_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,char*,int,...) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct bnx2x*,int ) ;
 int FUNC_3 (struct bnx2x*,scalar_t__,int) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 TYPE_1__* VAR_12 ;
 int FUNC_4 (struct bnx2x*,int) ;

__attribute__((used)) static inline void FUNC_5(struct bnx2x *VAR_13)
{
 int VAR_14;
 u32 VAR_15, VAR_16 =
  VAR_0 |
  VAR_1 |
  VAR_2 |
  VAR_3;


 FUNC_3(VAR_13, VAR_11 + VAR_8, 0x1);
 FUNC_3(VAR_13, VAR_9 + VAR_8, 0x1);
 FUNC_3(VAR_13, VAR_10 + VAR_8, 0x1);
 FUNC_3(VAR_13, VAR_4 + VAR_8, 0x1);

 for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_12); VAR_14++) {
  u32 VAR_17 = FUNC_4(VAR_13, VAR_14);

  if (VAR_17) {
   VAR_15 = FUNC_2(VAR_13, VAR_12[VAR_14].
      sts_clr_addr);
   if (VAR_15 & VAR_17)
    FUNC_1(VAR_7,
         "Parity errors in %s: 0x%x\n",
         VAR_12[VAR_14].name,
         VAR_15 & VAR_17);
  }
 }


 VAR_15 = FUNC_2(VAR_13, VAR_5);
 if (VAR_15 & VAR_16)
  FUNC_1(VAR_7, "Parity error in MCP: 0x%x\n",
     VAR_15 & VAR_16);







 FUNC_3(VAR_13, VAR_6, 0x780);
}
