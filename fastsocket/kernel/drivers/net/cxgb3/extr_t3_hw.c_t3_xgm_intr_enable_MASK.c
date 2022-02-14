
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ offset; } ;
struct port_info {TYPE_1__ mac; } ;
struct adapter {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct port_info* FUNC_0 (struct adapter*,int) ;
 int FUNC_1 (struct adapter*,scalar_t__,int ) ;

void FUNC_2(struct adapter *VAR_2, int VAR_3)
{
 struct port_info *VAR_4 = FUNC_0(VAR_2, VAR_3);

 FUNC_1(VAR_2, VAR_0 + VAR_4->mac.offset,
       VAR_1);
}
