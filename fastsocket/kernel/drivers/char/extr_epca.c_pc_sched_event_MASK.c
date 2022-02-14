
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct channel {int event; int tqueue; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct channel *VAR_0, int VAR_1)
{




 VAR_0->event |= 1 << VAR_1;
 FUNC_0(&VAR_0->tqueue);
}
