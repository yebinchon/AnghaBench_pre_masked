
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct secasvar {int flags; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct secasvar *VAR_1)
{
 if (!VAR_1)
  return -1;
 if (VAR_1->flags & VAR_0)
  return 16;
 else
  return 12;
}
