
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ memref; scalar_t__ memref_buffer; } ;
struct TYPE_5__ {TYPE_1__ scratch; } ;
typedef TYPE_2__ rc_parse_state_t ;


 int FUNC_0 (scalar_t__) ;

void FUNC_1(rc_parse_state_t* VAR_0)
{
  if (VAR_0->scratch.memref != VAR_0->scratch.memref_buffer)
    FUNC_0(VAR_0->scratch.memref);
}
