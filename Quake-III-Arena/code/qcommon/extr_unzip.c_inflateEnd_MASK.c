
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* z_streamp ;
struct TYPE_8__ {struct TYPE_8__* state; struct TYPE_8__* blocks; struct TYPE_8__* zfree; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*) ;

int FUNC_3(z_streamp VAR_3)
{
  if (VAR_3 == VAR_0 || VAR_3->state == VAR_0 || VAR_3->zfree == VAR_0)
    return VAR_2;
  if (VAR_3->state->blocks != VAR_0)
    FUNC_2(VAR_3->state->blocks, VAR_3);
  FUNC_1(VAR_3, VAR_3->state);
  VAR_3->state = VAR_0;
  FUNC_0(("inflate: end\n"));
  return VAR_1;
}
