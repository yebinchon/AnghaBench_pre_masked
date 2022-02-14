
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {struct serio* child; } ;


 scalar_t__ FUNC_0 (struct serio*) ;

__attribute__((used)) static void FUNC_1(struct serio *VAR_0)
{
 do {
  if (FUNC_0(VAR_0)) {

   break;
  }
  VAR_0 = VAR_0->child;
 } while (VAR_0);
}
