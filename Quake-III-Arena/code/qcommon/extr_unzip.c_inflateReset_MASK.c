
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* z_streamp ;
struct TYPE_6__ {int blocks; struct TYPE_6__* state; scalar_t__ nowrap; int mode; struct TYPE_6__* msg; scalar_t__ total_out; scalar_t__ total_in; } ;


 int FUNC_0 (char*) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,TYPE_1__*,TYPE_1__*) ;

int FUNC_2(z_streamp VAR_5)
{
  if (VAR_5 == VAR_0 || VAR_5->state == VAR_0)
    return VAR_2;
  VAR_5->total_in = VAR_5->total_out = 0;
  VAR_5->msg = VAR_0;
  VAR_5->state->mode = VAR_5->state->nowrap ? VAR_3 : VAR_4;
  FUNC_1(VAR_5->state->blocks, VAR_5, VAR_0);
  FUNC_0(("inflate: reset\n"));
  return VAR_1;
}
