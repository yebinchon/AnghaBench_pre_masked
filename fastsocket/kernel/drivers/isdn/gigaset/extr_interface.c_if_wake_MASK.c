
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cardstate {scalar_t__ tty; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(unsigned long VAR_0)
{
 struct cardstate *VAR_1 = (struct cardstate *) VAR_0;

 if (VAR_1->tty)
  FUNC_0(VAR_1->tty);
}
