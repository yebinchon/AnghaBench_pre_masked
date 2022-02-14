
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ehci_iso_stream {int raw_mask; int usecs; int c_usecs; int splits; int udev; int tt_usecs; } ;
struct ehci_iso_sched {int dummy; } ;
struct ehci_hcd {int dummy; } ;


 int FUNC_0 (struct ehci_hcd*,int) ;
 int FUNC_1 (struct ehci_hcd*,int,int) ;
 int FUNC_2 (struct ehci_hcd*,int,int ,int,int,int ) ;
 int FUNC_3 (struct ehci_hcd*,int,int ,int,int) ;

__attribute__((used)) static inline int
FUNC_4 (
 struct ehci_hcd *VAR_0,
 u32 VAR_1,
 struct ehci_iso_stream *VAR_2,
 u32 VAR_3,
 struct ehci_iso_sched *VAR_4,
 u32 VAR_5
)
{
 u32 VAR_6, VAR_7;
 u32 VAR_8, VAR_9;

 VAR_6 = VAR_2->raw_mask << (VAR_3 & 7);


 if (VAR_6 & ~0xffff)
  return 0;






 VAR_3 %= VAR_5;
 do {
  u32 VAR_10;

  VAR_8 = VAR_3 >> 3;
  VAR_9 = VAR_3 & 7;
  if (!FUNC_3 (VAR_0, VAR_5 << 3,
    VAR_2->udev, VAR_8, VAR_6))
   return 0;



  VAR_10 = 100 - VAR_2->usecs;
  for (VAR_7 = VAR_2->raw_mask & 0xff; VAR_7; VAR_7 >>= 1, VAR_9++) {
   if (FUNC_1 (VAR_0, VAR_8, VAR_9) > VAR_10)
    return 0;
  }


  if (VAR_2->c_usecs) {
   VAR_9 = VAR_3 & 7;
   VAR_10 = 100 - VAR_2->c_usecs;
   do {
    VAR_7 = 1 << VAR_9;
    VAR_7 <<= 8;
    if ((VAR_2->raw_mask & VAR_7) == 0)
     continue;
    if (FUNC_1 (VAR_0, VAR_8, VAR_9)
      > VAR_10)
     return 0;
   } while (++VAR_9 < 8);
  }


  VAR_3 += VAR_5;
 } while (VAR_3 < VAR_1);

 VAR_2->splits = FUNC_0(VAR_0, VAR_2->raw_mask << (VAR_3 & 7));
 return 1;
}
