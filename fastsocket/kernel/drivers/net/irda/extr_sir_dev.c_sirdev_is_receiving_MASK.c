
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ state; } ;
struct sir_dev {TYPE_1__ rx_buff; int enable_rx; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct sir_dev *VAR_1)
{
 if (!FUNC_0(&VAR_1->enable_rx))
  return 0;

 return (VAR_1->rx_buff.state != VAR_0);
}
