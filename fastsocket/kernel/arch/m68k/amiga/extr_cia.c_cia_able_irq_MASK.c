
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ciabase {unsigned char icr_mask; int icr_data; int int_mask; TYPE_1__* cia; } ;
struct TYPE_4__ {int intreq; } ;
struct TYPE_3__ {int icr; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;

unsigned char FUNC_0(struct ciabase *VAR_4, unsigned char VAR_5)
{
 unsigned char VAR_6;

 VAR_6 = VAR_4->icr_mask;
 VAR_4->icr_data |= VAR_4->cia->icr;
 VAR_4->cia->icr = VAR_5;
 if (VAR_5 & VAR_1)
  VAR_4->icr_mask |= VAR_5;
 else
  VAR_4->icr_mask &= ~VAR_5;
 VAR_4->icr_mask &= VAR_0;
 if (VAR_4->icr_data & VAR_4->icr_mask)
  VAR_3.intreq = VAR_2 | VAR_4->int_mask;
 return VAR_6;
}
