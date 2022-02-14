
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filename {struct filename* name; scalar_t__ separate; } ;


 int FUNC_0 (struct filename*) ;
 int FUNC_1 (struct filename*) ;

void FUNC_2(struct filename *VAR_0)
{
 if (VAR_0->separate) {
  FUNC_0(VAR_0->name);
  FUNC_1(VAR_0);
 } else {
  FUNC_0(VAR_0);
 }
}
