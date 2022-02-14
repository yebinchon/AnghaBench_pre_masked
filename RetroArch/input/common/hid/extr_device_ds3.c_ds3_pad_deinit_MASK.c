
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int slot; } ;
typedef TYPE_1__ ds3_instance_t ;
struct TYPE_5__ {int (* get_name ) (TYPE_1__*) ;} ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(void *VAR_1)
{
   ds3_instance_t *VAR_2 = (ds3_instance_t *)VAR_1;
   if(VAR_2) {
      FUNC_0(VAR_2->slot, VAR_0.get_name(VAR_2));
   }
}
