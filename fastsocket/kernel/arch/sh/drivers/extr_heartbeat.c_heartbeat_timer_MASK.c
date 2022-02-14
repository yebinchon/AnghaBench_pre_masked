
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct heartbeat_data {int flags; int nr_bits; int timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int FUNC_0 (struct heartbeat_data*,unsigned int,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_4)
{
 struct heartbeat_data *VAR_5 = (struct heartbeat_data *)VAR_4;
 static unsigned VAR_6 = 0, VAR_7 = 1;

 FUNC_0(VAR_5, VAR_6, VAR_5->flags & VAR_1);

 VAR_6 += VAR_7;
 if ((VAR_6 == 0) || (VAR_6 == (VAR_5->nr_bits)-1))
  VAR_7 = -VAR_7;

 FUNC_1(&VAR_5->timer, VAR_3 + (110 - ((300 << VAR_0) /
   ((VAR_2[0] / 5) + (3 << VAR_0)))));
}
