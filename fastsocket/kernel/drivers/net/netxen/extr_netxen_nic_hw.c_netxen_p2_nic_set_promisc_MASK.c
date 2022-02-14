
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {scalar_t__ board_type; } ;
struct netxen_adapter {int physical_port; TYPE_1__ ahw; } ;
typedef int __u32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct netxen_adapter*,scalar_t__) ;
 int FUNC_1 (struct netxen_adapter*,scalar_t__,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct netxen_adapter *VAR_10, u32 VAR_11)
{
 u32 VAR_12;
 u32 VAR_13 = 0;
 __u32 VAR_14 = 0x0200;
 u32 VAR_15 = VAR_10->physical_port;
 u16 VAR_16 = VAR_10->ahw.board_type;

 if (VAR_15 >= VAR_6)
  return -VAR_0;

 VAR_12 = FUNC_0(VAR_10, VAR_8 + (0x10000 * VAR_15));
 VAR_12 &= ~0x4;
 FUNC_1(VAR_10, VAR_8 + (0x10000 * VAR_15), VAR_12);

 if ((VAR_16 == VAR_2) ||
   (VAR_16 == VAR_1))
  VAR_14 = (0x20 << VAR_15);

 FUNC_1(VAR_10, VAR_5, VAR_14);

 FUNC_2(10);

 while (FUNC_0(VAR_10, VAR_4) && ++VAR_13 < 20)
  FUNC_2(10);

 if (VAR_13 < 20) {

  VAR_14 = FUNC_0(VAR_10,
   VAR_9 + (0x10000 * VAR_15));

  if (VAR_11 == VAR_7)
   VAR_14 = (VAR_14 | 0x2000UL);
  else
   VAR_14 = (VAR_14 & ~0x2000UL);

  if (VAR_11 == VAR_3)
   VAR_14 = (VAR_14 | 0x1000UL);
  else
   VAR_14 = (VAR_14 & ~0x1000UL);

  FUNC_1(VAR_10,
   VAR_9 + (0x10000 * VAR_15), VAR_14);
 }

 VAR_12 |= 0x4;
 FUNC_1(VAR_10, VAR_8 + (0x10000 * VAR_15), VAR_12);

 return 0;
}
