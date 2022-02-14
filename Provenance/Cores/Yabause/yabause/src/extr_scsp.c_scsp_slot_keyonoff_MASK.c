
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ key; } ;
typedef TYPE_1__ slot_t ;
struct TYPE_6__ {TYPE_1__* slot; } ;


 TYPE_4__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2 (void)
{
  slot_t *VAR_1;

  for(VAR_1 = &(VAR_0.slot[0]); VAR_1 < &(VAR_0.slot[32]); VAR_1++)
    {
      if (VAR_1->key)
        FUNC_1 (VAR_1);
      else
        FUNC_0 (VAR_1);
    }
}
