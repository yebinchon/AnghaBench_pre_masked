
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct niu {int flags; TYPE_1__* dev; } ;
struct TYPE_2__ {scalar_t__ mtu; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct niu*,int,int) ;
 int FUNC_2 (struct niu*,int,int) ;

__attribute__((used)) static void FUNC_3(struct niu *VAR_2)
{
 u64 VAR_3, VAR_4;

 VAR_3 = 64;
 if (VAR_2->dev->mtu > VAR_0)
  VAR_4 = 9216;
 else
  VAR_4 = 1522;




 FUNC_0(VAR_3 & 0x7);

 if (VAR_2->flags & VAR_1)
  FUNC_2(VAR_2, VAR_3, VAR_4);
 else
  FUNC_1(VAR_2, VAR_3, VAR_4);
}
