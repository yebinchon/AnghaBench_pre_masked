
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mmc_data {int flags; int bytes_xfered; int blksz; int blocks; } ;
struct at91mci_host {int total_length; TYPE_2__* request; } ;
struct TYPE_4__ {struct mmc_data* data; TYPE_1__* cmd; } ;
struct TYPE_3__ {scalar_t__ error; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int ) ;

__attribute__((used)) static void FUNC_1(struct at91mci_host *VAR_1)
{
 struct mmc_data *VAR_2;



 if (VAR_1->request->cmd && VAR_1->request->cmd->error != 0)
  return;

 if (VAR_1->request->data) {
  VAR_2 = VAR_1->request->data;
  if (VAR_2->flags & VAR_0) {

   FUNC_0("-> bytes_xfered %d, total_length = %d\n",
    VAR_2->bytes_xfered, VAR_1->total_length);
   VAR_2->bytes_xfered = VAR_2->blksz * VAR_2->blocks;
  }
 }
}
