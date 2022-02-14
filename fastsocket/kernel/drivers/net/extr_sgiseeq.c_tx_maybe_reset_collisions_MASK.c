
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int control; } ;
struct TYPE_4__ {TYPE_1__ wregs; } ;
struct sgiseeq_regs {TYPE_2__ rw; } ;
struct sgiseeq_private {int control; scalar_t__ is_edlc; } ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct sgiseeq_private *VAR_1,
          struct sgiseeq_regs *VAR_2)
{
 if (VAR_1->is_edlc) {
  VAR_2->rw.wregs.control = VAR_1->control & ~(VAR_0);
  VAR_2->rw.wregs.control = VAR_1->control;
 }
}
