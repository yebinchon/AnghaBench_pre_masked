
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hw_rspq_ack; int * hw_reqq_ack; } ;
struct TYPE_4__ {TYPE_1__ hwif; } ;
struct bfa_s {TYPE_2__ iocfc; } ;
typedef scalar_t__ bfa_boolean_t ;


 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_0(struct bfa_s *VAR_3, bfa_boolean_t VAR_4)
{
 if (VAR_4) {
  VAR_3->iocfc.hwif.hw_reqq_ack = VAR_0;
  VAR_3->iocfc.hwif.hw_rspq_ack = VAR_2;
 } else {
  VAR_3->iocfc.hwif.hw_reqq_ack = ((void*)0);
  VAR_3->iocfc.hwif.hw_rspq_ack = VAR_1;
 }
}
