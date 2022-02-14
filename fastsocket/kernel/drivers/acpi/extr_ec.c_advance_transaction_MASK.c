
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct acpi_ec {int curr_lock; TYPE_1__* curr; } ;
struct TYPE_2__ {scalar_t__ wlen; scalar_t__ wi; scalar_t__ rlen; scalar_t__ ri; int done; int irq_count; int * rdata; int * wdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct acpi_ec*) ;
 int FUNC_1 (struct acpi_ec*,int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct acpi_ec *VAR_2, u8 VAR_3)
{
 unsigned long VAR_4;
 FUNC_3(&VAR_2->curr_lock, VAR_4);
 if (!VAR_2->curr)
  goto unlock;
 if (VAR_2->curr->wlen > VAR_2->curr->wi) {
  if ((VAR_3 & VAR_0) == 0)
   FUNC_1(VAR_2,
    VAR_2->curr->wdata[VAR_2->curr->wi++]);
  else
   goto err;
 } else if (VAR_2->curr->rlen > VAR_2->curr->ri) {
  if ((VAR_3 & VAR_1) == 1) {
   VAR_2->curr->rdata[VAR_2->curr->ri++] = FUNC_0(VAR_2);
   if (VAR_2->curr->rlen == VAR_2->curr->ri)
    VAR_2->curr->done = 1;
  } else
   goto err;
 } else if (VAR_2->curr->wlen == VAR_2->curr->wi &&
     (VAR_3 & VAR_0) == 0)
  VAR_2->curr->done = 1;
 goto unlock;
err:

 if (FUNC_2())
  ++VAR_2->curr->irq_count;
unlock:
 FUNC_4(&VAR_2->curr_lock, VAR_4);
}
