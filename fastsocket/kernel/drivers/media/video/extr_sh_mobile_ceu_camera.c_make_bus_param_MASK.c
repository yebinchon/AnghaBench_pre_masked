
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sh_mobile_ceu_dev {TYPE_1__* pdata; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;

__attribute__((used)) static unsigned long FUNC_0(struct sh_mobile_ceu_dev *VAR_12)
{
 unsigned long VAR_13;

 VAR_13 = VAR_8 |
  VAR_9 |
  VAR_6 |
  VAR_7 |
  VAR_10 |
  VAR_11 |
  VAR_5;

 if (VAR_12->pdata->flags & VAR_1)
  VAR_13 |= VAR_3;

 if (VAR_12->pdata->flags & VAR_0)
  VAR_13 |= VAR_2;

 if (VAR_13 & VAR_4)
  return VAR_13;

 return 0;
}
