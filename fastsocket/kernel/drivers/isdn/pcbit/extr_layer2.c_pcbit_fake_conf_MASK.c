
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pcbit_dev {TYPE_1__* dev_if; int id; } ;
struct pcbit_chan {int id; scalar_t__ queued; } ;
struct TYPE_5__ {int arg; int command; int driver; } ;
typedef TYPE_2__ isdn_ctrl ;
struct TYPE_4__ {int (* statcallb ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static __inline__ void
FUNC_1(struct pcbit_dev *VAR_1, struct pcbit_chan *VAR_2)
{
 isdn_ctrl VAR_3;

 if (VAR_2->queued) {
  VAR_2->queued--;

  VAR_3.driver = VAR_1->id;
  VAR_3.command = VAR_0;
  VAR_3.arg = VAR_2->id;
  VAR_1->dev_if->statcallb(&VAR_3);
 }
}
