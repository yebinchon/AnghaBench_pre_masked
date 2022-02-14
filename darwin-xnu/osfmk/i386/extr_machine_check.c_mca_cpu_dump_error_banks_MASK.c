
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mca_is_valid; } ;
typedef TYPE_1__ mca_state_t ;


 int FUNC_0 (TYPE_1__*,unsigned int) ;
 unsigned int VAR_0 ;

__attribute__((used)) static void
FUNC_1(mca_state_t *VAR_1)
{
 unsigned int VAR_2;

 if (!VAR_1->mca_is_valid)
  return;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++ ) {
  FUNC_0(VAR_1, VAR_2);
 }
}
