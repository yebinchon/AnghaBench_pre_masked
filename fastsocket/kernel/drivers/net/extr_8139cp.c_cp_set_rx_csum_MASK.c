
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct cp_private {int lock; int cpcmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 struct cp_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2, u32 VAR_3)
{
 struct cp_private *VAR_4 = FUNC_1(VAR_2);
 u16 VAR_5 = VAR_4->cpcmd, VAR_6;

 VAR_6 = VAR_5;

 if (VAR_3)
  VAR_6 |= VAR_1;
 else
  VAR_6 &= ~VAR_1;

 if (VAR_6 != VAR_5) {
  unsigned long VAR_7;

  FUNC_2(&VAR_4->lock, VAR_7);
  VAR_4->cpcmd = VAR_6;
  FUNC_0(VAR_0, VAR_6);
  FUNC_3(&VAR_4->lock, VAR_7);
 }

 return 0;
}
