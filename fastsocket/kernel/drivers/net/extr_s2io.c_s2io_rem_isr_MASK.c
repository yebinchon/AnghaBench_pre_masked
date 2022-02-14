
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ intr_type; } ;
struct s2io_nic {TYPE_1__ config; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct s2io_nic*) ;
 int FUNC_1 (struct s2io_nic*) ;

__attribute__((used)) static void FUNC_2(struct s2io_nic *VAR_1)
{
 if (VAR_1->config.intr_type == VAR_0)
  FUNC_1(VAR_1);
 else
  FUNC_0(VAR_1);
}
