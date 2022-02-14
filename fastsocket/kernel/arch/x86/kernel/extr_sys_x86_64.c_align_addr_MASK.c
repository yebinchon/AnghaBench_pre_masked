
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct file {int dummy; } ;
typedef enum align_flags { ____Placeholder_align_flags } align_flags ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {int flags; unsigned long mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_0 () ;
 TYPE_1__ VAR_4 ;

unsigned long FUNC_1(unsigned long VAR_5, struct file *VAR_6,
    enum align_flags VAR_7)
{
 unsigned long VAR_8;


 if (VAR_4.flags < 0 || !(VAR_4.flags & (2 - FUNC_0())))
  return VAR_5;

 if (!(VAR_3->flags & VAR_2))
  return VAR_5;

 if (!((VAR_7 & VAR_1) || VAR_6))
  return VAR_5;

 VAR_8 = VAR_5;





 if (!(VAR_7 & VAR_0))
  VAR_8 += VAR_4.mask;

 VAR_8 &= ~VAR_4.mask;

 return VAR_8;
}
