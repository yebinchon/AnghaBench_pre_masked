
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef unsigned long u32 ;
typedef int u16 ;
struct netxen_adapter {int physical_port; scalar_t__ mc_enabled; int * mac_addr; } ;


 unsigned long FUNC_0 (int *) ;
 unsigned long FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int,int) ;
 unsigned long FUNC_3 (struct netxen_adapter*,scalar_t__) ;
 int FUNC_4 (struct netxen_adapter*,scalar_t__,unsigned long) ;

__attribute__((used)) static int
FUNC_5(struct netxen_adapter *VAR_1)
{
 u32 VAR_2 = 0;
 u16 VAR_3 = VAR_1->physical_port;
 u8 *VAR_4 = VAR_1->mac_addr;

 if (!VAR_1->mc_enabled)
  return 0;

 VAR_2 = FUNC_3(VAR_1, VAR_0);
 VAR_2 &= ~(1UL << (28+VAR_3));
 FUNC_4(VAR_1, VAR_0, VAR_2);

 VAR_2 = FUNC_0(VAR_4);
 FUNC_4(VAR_1, FUNC_2(VAR_3, 0), VAR_2);
 VAR_2 = FUNC_1(VAR_4);
 FUNC_4(VAR_1, FUNC_2(VAR_3, 0)+4, VAR_2);

 FUNC_4(VAR_1, FUNC_2(VAR_3, 1), 0);
 FUNC_4(VAR_1, FUNC_2(VAR_3, 1)+4, 0);

 VAR_1->mc_enabled = 0;
 return 0;
}
