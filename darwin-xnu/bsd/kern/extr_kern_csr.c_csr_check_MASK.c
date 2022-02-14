
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int csr_config_t ;
struct TYPE_3__ {int flags; } ;
typedef TYPE_1__ boot_args ;
struct TYPE_4__ {scalar_t__ bootArgs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int*) ;
 int VAR_8 ;

int
FUNC_1(csr_config_t VAR_9)
{
 boot_args *VAR_10 = (boot_args *)VAR_6.bootArgs;
 if (VAR_9 & VAR_1)
  return (VAR_10->flags & VAR_8) ? 0 : VAR_5;

 csr_config_t VAR_11;
 int VAR_12 = FUNC_0(&VAR_11);
 if (VAR_12) {
  return VAR_12;
 }






 if ((VAR_11 & (VAR_3|VAR_0)) != 0)
  VAR_11 |= VAR_2;

 VAR_12 = ((VAR_11 & VAR_9) == VAR_9) ? 0 : VAR_5;
 if (VAR_12 == VAR_5) {

  if (VAR_7 && (VAR_9 & VAR_4) == 0)
   VAR_12 = 0;
 }

 return VAR_12;
}
