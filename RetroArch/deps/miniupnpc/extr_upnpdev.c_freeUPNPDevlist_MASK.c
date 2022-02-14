
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct UPNPDev {struct UPNPDev* pNext; } ;


 int FUNC_0 (struct UPNPDev*) ;

void FUNC_1(struct UPNPDev * VAR_0)
{
 struct UPNPDev * VAR_1;
 while(VAR_0)
 {
  VAR_1 = VAR_0->pNext;
  FUNC_0(VAR_0);
  VAR_0 = VAR_1;
 }
}
