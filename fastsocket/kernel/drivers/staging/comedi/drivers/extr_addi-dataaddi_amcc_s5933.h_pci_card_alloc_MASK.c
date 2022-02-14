
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcilst_struct {int used; int pcidev; int * io_addr; } ;


 scalar_t__ FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct pcilst_struct *VAR_0, int VAR_1)
{
 int VAR_2;

 if (!VAR_0)
  return -1;

 if (VAR_0->used)
  return 1;
 if (FUNC_0(VAR_0->pcidev, "addi_amcc_s5933"))
  return -1;

 for (VAR_2 = 0; VAR_2 < 5; VAR_2++)
  VAR_0->io_addr[VAR_2] = FUNC_1(VAR_0->pcidev, VAR_2);
 if (VAR_1)
  FUNC_2(VAR_0->pcidev);
 VAR_0->used = 1;

 return 0;
}
