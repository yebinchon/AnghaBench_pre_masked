
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int slot; } ;
typedef TYPE_1__ gca_pad_t ;
struct TYPE_6__ {int (* get_name ) (TYPE_1__*) ;} ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static void FUNC_3(void *VAR_1)
{
   gca_pad_t *VAR_2 = (gca_pad_t *)VAR_1;

   if(VAR_2)
   {
      FUNC_1(VAR_2->slot, VAR_0.get_name(VAR_2));
      FUNC_0(VAR_2);
   }
}
