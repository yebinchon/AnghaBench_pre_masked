
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uhci_hcd {int rh_numports; int port_c_suspend; scalar_t__ io_addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int,int *) ;

__attribute__((used)) static int FUNC_2(struct uhci_hcd *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->rh_numports; ++VAR_4) {
  if ((FUNC_0(VAR_3->io_addr + VAR_1 + VAR_4 * 2) &
    (VAR_2 | VAR_0)) ||
    FUNC_1(VAR_4, &VAR_3->port_c_suspend))
   return 1;
 }
 return 0;
}
