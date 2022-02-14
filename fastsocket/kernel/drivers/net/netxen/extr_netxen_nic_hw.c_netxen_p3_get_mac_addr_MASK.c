
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u64 ;
struct TYPE_2__ {int pci_func; } ;
struct netxen_adapter {TYPE_1__ ahw; } ;


 int VAR_0 ;
 int FUNC_0 (struct netxen_adapter*,int) ;
 int FUNC_1 (int) ;

int FUNC_2(struct netxen_adapter *VAR_1, u64 *VAR_2)
{
 uint32_t VAR_3, VAR_4, VAR_5;
 int VAR_6 = VAR_1->ahw.pci_func;

 VAR_3 = VAR_0 +
  (4 * ((VAR_6/2) * 3)) + (4 * (VAR_6 & 1));

 VAR_5 = FUNC_0(VAR_1, VAR_3);
 VAR_4 = FUNC_0(VAR_1, VAR_3+4);

 if (VAR_6 & 1)
  *VAR_2 = FUNC_1((VAR_5 >> 16) | ((u64)VAR_4 << 16));
 else
  *VAR_2 = FUNC_1((u64)VAR_5 | ((u64)VAR_4 << 32));

 return 0;
}
