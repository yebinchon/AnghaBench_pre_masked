
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ offset; } ;
struct port_info {TYPE_1__ mac; } ;
struct adapter {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct port_info* FUNC_0 (struct adapter*,int) ;
 int FUNC_1 (struct adapter*,scalar_t__,int) ;

void FUNC_2(struct adapter *VAR_1, int VAR_2)
{
 struct port_info *VAR_3 = FUNC_0(VAR_1, VAR_2);

 FUNC_1(VAR_1, VAR_0 + VAR_3->mac.offset,
       0x7ff);
}
