
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_3__ {int lock; } ;
typedef TYPE_1__ elp_device ;


 int FUNC_0 (struct net_device*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int,struct net_device*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_5(struct net_device *VAR_1, int VAR_2)
{
 elp_device *VAR_3 = FUNC_1(VAR_1);
 unsigned long VAR_4;

 FUNC_3(&VAR_3->lock, VAR_4);
 FUNC_2((FUNC_0(VAR_1) & ~VAR_0) | VAR_2, VAR_1);
 FUNC_4(&VAR_3->lock, VAR_4);
}
