
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct at91mci_host {int flags; TYPE_2__* cmd; } ;
struct TYPE_4__ {TYPE_1__* data; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct at91mci_host*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct at91mci_host *VAR_8)
{
 if (!VAR_8->cmd)
  return 1;
 else if (!VAR_8->cmd->data) {
  if (VAR_8->flags & VAR_6) {

   FUNC_0(VAR_8, VAR_1, VAR_2);
  } else return 1;
 } else if (VAR_8->cmd->data->flags & VAR_7) {

  FUNC_0(VAR_8, VAR_1, VAR_3 | VAR_0);
  FUNC_0(VAR_8, VAR_4, VAR_5);
 }


 return 0;
}
