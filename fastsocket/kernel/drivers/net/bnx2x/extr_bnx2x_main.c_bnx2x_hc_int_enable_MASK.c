
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ pmf; } ;
struct bnx2x {int flags; TYPE_1__ port; } ;


 int FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (struct bnx2x*) ;
 scalar_t__ FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (int ,char*,int,int,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_4 (struct bnx2x*) ;
 int VAR_9 ;
 int FUNC_5 (struct bnx2x*,int) ;
 int FUNC_6 (struct bnx2x*,int,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_7 () ;
 int FUNC_8 () ;

__attribute__((used)) static void FUNC_9(struct bnx2x *VAR_13)
{
 int VAR_14 = FUNC_0(VAR_13);
 u32 VAR_15 = VAR_14 ? VAR_5 : VAR_4;
 u32 VAR_16 = FUNC_5(VAR_13, VAR_15);
 bool VAR_17 = (VAR_13->flags & VAR_10) ? 1 : 0;
 bool VAR_18 = (VAR_13->flags & VAR_12) ? 1 : 0;
 bool VAR_19 = (VAR_13->flags & VAR_11) ? 1 : 0;

 if (VAR_17) {
  VAR_16 &= ~(VAR_3 |
    VAR_1);
  VAR_16 |= (VAR_2 |
   VAR_0);
  if (VAR_18)
   VAR_16 |= VAR_3;
 } else if (VAR_19) {
  VAR_16 &= ~VAR_1;
  VAR_16 |= (VAR_3 |
   VAR_2 |
   VAR_0);
 } else {
  VAR_16 |= (VAR_3 |
   VAR_2 |
   VAR_1 |
   VAR_0);

  if (!FUNC_2(VAR_13)) {
   FUNC_3(VAR_9,
      "write %x to HC %d (addr 0x%x)\n", VAR_16, VAR_14, VAR_15);

   FUNC_6(VAR_13, VAR_15, VAR_16);

   VAR_16 &= ~VAR_2;
  }
 }

 if (FUNC_2(VAR_13))
  FUNC_6(VAR_13, VAR_6 + VAR_14*4, 0x1FFFF);

 FUNC_3(VAR_9,
    "write %x to HC %d (addr 0x%x) mode %s\n", VAR_16, VAR_14, VAR_15,
    (VAR_17 ? "MSI-X" : (VAR_19 ? "MSI" : "INTx")));

 FUNC_6(VAR_13, VAR_15, VAR_16);



 FUNC_8();
 FUNC_7();

 if (!FUNC_2(VAR_13)) {

  if (FUNC_4(VAR_13)) {
   VAR_16 = (0xee0f | (1 << (FUNC_1(VAR_13) + 4)));
   if (VAR_13->port.pmf)

    VAR_16 |= 0x1100;
  } else
   VAR_16 = 0xffff;

  FUNC_6(VAR_13, VAR_8 + VAR_14*8, VAR_16);
  FUNC_6(VAR_13, VAR_7 + VAR_14*8, VAR_16);
 }


 FUNC_8();
}
