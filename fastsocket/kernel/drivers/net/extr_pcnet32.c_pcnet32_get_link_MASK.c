
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ulong ;
typedef int u32 ;
struct TYPE_2__ {int (* read_bcr ) (int ,int) ;} ;
struct pcnet32_private {scalar_t__ chip_version; int lock; TYPE_1__ a; int mii_if; scalar_t__ mii; } ;
struct net_device {int base_addr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 struct pcnet32_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static u32 FUNC_5(struct net_device *VAR_1)
{
 struct pcnet32_private *VAR_2 = FUNC_1(VAR_1);
 unsigned long VAR_3;
 int VAR_4;

 FUNC_2(&VAR_2->lock, VAR_3);
 if (VAR_2->mii) {
  VAR_4 = FUNC_0(&VAR_2->mii_if);
 } else if (VAR_2->chip_version >= VAR_0) {
  ulong VAR_5 = VAR_1->base_addr;
  VAR_4 = (VAR_2->a.read_bcr(VAR_5, 4) != 0xc0);
 } else {
  VAR_4 = 1;
 }
 FUNC_3(&VAR_2->lock, VAR_3);

 return VAR_4;
}
