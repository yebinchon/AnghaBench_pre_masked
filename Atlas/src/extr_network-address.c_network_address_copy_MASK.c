
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int name; int addr; int len; } ;
typedef TYPE_1__ network_address ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 TYPE_1__* FUNC_2 () ;

network_address *FUNC_3(network_address *VAR_0, network_address *VAR_1) {
 if (!VAR_0) VAR_0 = FUNC_2();

 VAR_0->len = VAR_1->len;
 VAR_0->addr = VAR_1->addr;
 FUNC_1(VAR_0->name, FUNC_0(VAR_1->name));

 return VAR_0;
}
