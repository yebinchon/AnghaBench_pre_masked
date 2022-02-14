
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct s3cmci_host {scalar_t__ pio_active; scalar_t__ complete_what; TYPE_2__* mrq; int pio_bytes; int pio_count; } ;
struct TYPE_4__ {TYPE_1__* data; } ;
struct TYPE_3__ {int error; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct s3cmci_host*) ;
 int FUNC_1 (struct s3cmci_host*,int ,char*,char*,int ,int ) ;
 int VAR_5 ;
 int FUNC_2 (struct s3cmci_host*) ;
 int FUNC_3 (struct s3cmci_host*) ;
 int FUNC_4 (struct s3cmci_host*) ;
 int FUNC_5 (struct s3cmci_host*,int) ;
 int FUNC_6 (struct s3cmci_host*,int) ;

__attribute__((used)) static void FUNC_7(unsigned long VAR_6)
{
 struct s3cmci_host *VAR_7 = (struct s3cmci_host *) VAR_6;

 FUNC_5(VAR_7, 1);

 if (VAR_7->pio_active == VAR_4)
  FUNC_3(VAR_7);

 if (VAR_7->pio_active == VAR_3)
  FUNC_2(VAR_7);

 if (VAR_7->complete_what == VAR_0) {
  FUNC_0(VAR_7);
  if (VAR_7->pio_active != VAR_2) {
   FUNC_1(VAR_7, VAR_5, "unfinished %s "
       "- pio_count:[%u] pio_bytes:[%u]\n",
       (VAR_7->pio_active == VAR_3) ? "read" : "write",
       VAR_7->pio_count, VAR_7->pio_bytes);

   if (VAR_7->mrq->data)
    VAR_7->mrq->data->error = -VAR_1;
  }

  FUNC_6(VAR_7, 0);
  FUNC_4(VAR_7);
 } else
  FUNC_6(VAR_7, 1);
}
