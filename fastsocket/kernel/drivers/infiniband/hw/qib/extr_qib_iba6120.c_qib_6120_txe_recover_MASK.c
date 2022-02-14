
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_devdata {int pcidev; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct qib_devdata *VAR_0)
{
 if (!FUNC_1())
  FUNC_0(VAR_0->pcidev,
       "Recovering from TXE PIO parity error\n");
}
