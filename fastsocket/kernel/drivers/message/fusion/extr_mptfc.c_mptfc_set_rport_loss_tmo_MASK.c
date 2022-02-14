
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct fc_rport {scalar_t__ dev_loss_tmo; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct fc_rport *VAR_1, uint32_t VAR_2)
{
 if (VAR_2 > 0)
  VAR_1->dev_loss_tmo = VAR_2;
 else
  VAR_1->dev_loss_tmo = VAR_0;
}
