
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dcr; } ;
struct parport_ip32_private {unsigned int dcr_writable; unsigned int dcr_cache; TYPE_2__ regs; } ;
struct parport {TYPE_1__* physport; } ;
struct TYPE_3__ {struct parport_ip32_private* private_data; } ;


 int FUNC_0 (struct parport*,unsigned int,unsigned int) ;
 int FUNC_1 (unsigned int,int ) ;

__attribute__((used)) static inline void FUNC_2(struct parport *VAR_0,
      unsigned int VAR_1)
{
 struct parport_ip32_private * const VAR_2 = VAR_0->physport->private_data;
 FUNC_0(VAR_0, VAR_1, VAR_2->dcr_writable);
 VAR_1 &= VAR_2->dcr_writable;
 FUNC_1(VAR_1, VAR_2->regs.dcr);
 VAR_2->dcr_cache = VAR_1;
}
