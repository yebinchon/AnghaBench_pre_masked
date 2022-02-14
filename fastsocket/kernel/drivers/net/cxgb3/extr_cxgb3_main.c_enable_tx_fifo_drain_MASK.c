
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ offset; } ;
struct port_info {TYPE_1__ mac; } ;
struct adapter {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct adapter*,scalar_t__,int ,int ) ;
 int FUNC_1 (struct adapter*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_2(struct adapter *VAR_6,
     struct port_info *VAR_7)
{
 FUNC_0(VAR_6, VAR_1 + VAR_7->mac.offset, 0,
    VAR_3);
 FUNC_1(VAR_6, VAR_0 + VAR_7->mac.offset, 0);
 FUNC_1(VAR_6, VAR_2 + VAR_7->mac.offset, VAR_5);
 FUNC_1(VAR_6, VAR_0 + VAR_7->mac.offset, VAR_4);
}
