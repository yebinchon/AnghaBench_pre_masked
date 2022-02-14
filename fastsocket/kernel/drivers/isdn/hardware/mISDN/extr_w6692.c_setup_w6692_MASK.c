
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct w6692_hw {int name; scalar_t__ addr; TYPE_1__* bc; } ;
struct TYPE_2__ {scalar_t__ addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct w6692_hw*,int ) ;
 int FUNC_1 (struct w6692_hw*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (char*,int ,scalar_t__,scalar_t__) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (scalar_t__,int,int ) ;

__attribute__((used)) static int
FUNC_5(struct w6692_hw *VAR_8)
{
 u32 VAR_9;

 if (!FUNC_4(VAR_8->addr, 256, VAR_8->name)) {
  FUNC_2("%s: config port %x-%x already in use\n", VAR_8->name,
         VAR_8->addr, VAR_8->addr + 255);
  return -VAR_1;
 }
 FUNC_1(VAR_8);
 VAR_8->bc[0].addr = VAR_8->addr;
 VAR_8->bc[1].addr = VAR_8->addr + 0x40;
 VAR_9 = FUNC_0(VAR_8, VAR_6);
 if (VAR_7 & VAR_0)
  FUNC_3("%s ISTA=%02x\n", VAR_8->name, VAR_9);
 VAR_9 = FUNC_0(VAR_8, VAR_5);
 if (VAR_7 & VAR_0)
  FUNC_3("%s IMASK=%02x\n", VAR_8->name, VAR_9);
 VAR_9 = FUNC_0(VAR_8, VAR_3);
 if (VAR_7 & VAR_0)
  FUNC_3("%s D_EXIR=%02x\n", VAR_8->name, VAR_9);
 VAR_9 = FUNC_0(VAR_8, VAR_2);
 if (VAR_7 & VAR_0)
  FUNC_3("%s D_EXIM=%02x\n", VAR_8->name, VAR_9);
 VAR_9 = FUNC_0(VAR_8, VAR_4);
 if (VAR_7 & VAR_0)
  FUNC_3("%s D_RSTA=%02x\n", VAR_8->name, VAR_9);
 return 0;
}
