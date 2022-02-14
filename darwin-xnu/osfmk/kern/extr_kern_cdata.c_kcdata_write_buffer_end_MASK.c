
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct kcdata_item {scalar_t__ size; int type; } ;
typedef int kern_return_t ;
typedef TYPE_1__* kcdata_descriptor_t ;
typedef int info ;
struct TYPE_4__ {int kcd_addr_end; } ;


 int VAR_0 ;
 int FUNC_0 (struct kcdata_item*,int) ;
 int FUNC_1 (TYPE_1__*,int ,struct kcdata_item*,int) ;

kern_return_t
FUNC_2(kcdata_descriptor_t VAR_1)
{
 struct kcdata_item VAR_2;
 FUNC_0(&VAR_2, sizeof(VAR_2));
 VAR_2.type = VAR_0;
 VAR_2.size = 0;
 return FUNC_1(VAR_1, VAR_1->kcd_addr_end, &VAR_2, sizeof(VAR_2));
}
