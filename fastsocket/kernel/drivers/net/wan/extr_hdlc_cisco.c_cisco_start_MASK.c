
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_3__ {unsigned long data; int function; scalar_t__ expires; } ;
struct cisco_state {TYPE_1__ timer; int lock; scalar_t__ rxseq; scalar_t__ txseq; scalar_t__ up; } ;
typedef int hdlc_device ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int * FUNC_1 (struct net_device*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct cisco_state* FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_3)
{
 hdlc_device *VAR_4 = FUNC_1(VAR_3);
 struct cisco_state *VAR_5 = FUNC_5(VAR_4);
 unsigned long VAR_6;

 FUNC_3(&VAR_5->lock, VAR_6);
 VAR_5->up = VAR_5->txseq = VAR_5->rxseq = 0;
 FUNC_4(&VAR_5->lock, VAR_6);

 FUNC_2(&VAR_5->timer);
 VAR_5->timer.expires = VAR_2 + VAR_0;
 VAR_5->timer.function = VAR_1;
 VAR_5->timer.data = (unsigned long)VAR_3;
 FUNC_0(&VAR_5->timer);
}
