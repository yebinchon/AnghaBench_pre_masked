
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e100_serial {int event; int work; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct e100_serial *VAR_0, int VAR_1)
{
 if (VAR_0->event & (1 << VAR_1))
  return;
 VAR_0->event |= 1 << VAR_1;
 FUNC_0(&VAR_0->work);
}
