
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct cisco_state {int lock; scalar_t__ txseq; scalar_t__ up; int timer; } ;
typedef int hdlc_device ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct cisco_state* FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_0)
{
 hdlc_device *VAR_1 = FUNC_1(VAR_0);
 struct cisco_state *VAR_2 = FUNC_5(VAR_1);
 unsigned long VAR_3;

 FUNC_0(&VAR_2->timer);

 FUNC_3(&VAR_2->lock, VAR_3);
 FUNC_2(VAR_0);
 VAR_2->up = VAR_2->txseq = 0;
 FUNC_4(&VAR_2->lock, VAR_3);
}
