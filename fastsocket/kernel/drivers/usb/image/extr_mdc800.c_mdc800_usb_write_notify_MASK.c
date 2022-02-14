
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int status; struct mdc800_data* context; } ;
struct mdc800_data {int written; int write_wait; int state; TYPE_1__* dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2 (struct urb *VAR_1)
{
 struct mdc800_data* VAR_2=VAR_1->context;
 int VAR_3 = VAR_1->status;

 if (VAR_3 != 0)
  FUNC_0(&VAR_2->dev->dev,
   "writing command fails (status=%i)\n", VAR_3);
 else
  VAR_2->state=VAR_0;
 VAR_2->written = 1;
 FUNC_1 (&VAR_2->write_wait);
}
