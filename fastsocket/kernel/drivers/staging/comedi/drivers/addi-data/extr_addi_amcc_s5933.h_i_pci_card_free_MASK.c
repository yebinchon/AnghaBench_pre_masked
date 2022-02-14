
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcilst_struct {int pcidev; scalar_t__ used; } ;


 int FUNC_0 (int ) ;

int FUNC_1(struct pcilst_struct *VAR_0)
{
 if (!VAR_0)
  return -1;

 if (!VAR_0->used)
  return 1;
 VAR_0->used = 0;
 FUNC_0(VAR_0->pcidev);
 return 0;
}
