
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mite_struct {TYPE_2__* pcidev; scalar_t__ used; struct mite_struct* next; } ;
struct comedi_device {TYPE_3__* board_ptr; } ;
struct TYPE_8__ {struct mite_struct* mite; } ;
struct TYPE_7__ {scalar_t__ dev_id; } ;
struct TYPE_6__ {int devfn; TYPE_1__* bus; } ;
struct TYPE_5__ {int number; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_4__* VAR_1 ;
 scalar_t__ FUNC_1 (struct mite_struct*) ;
 struct mite_struct* VAR_2 ;
 int FUNC_2 () ;
 int VAR_3 ;
 TYPE_3__* VAR_4 ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_5, int VAR_6, int VAR_7)
{
 struct mite_struct *VAR_8;
 int VAR_9;

 for (VAR_8 = VAR_2; VAR_8; VAR_8 = VAR_8->next) {
  if (VAR_8->used)
   continue;
  if (VAR_6 || VAR_7) {
   if (VAR_6 != VAR_8->pcidev->bus->number ||
       VAR_7 != FUNC_0(VAR_8->pcidev->devfn))
    continue;
  }
  for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
   if (FUNC_1(VAR_8) == VAR_4[VAR_9].dev_id) {
    VAR_5->board_ptr = VAR_4 + VAR_9;
    VAR_1->mite = VAR_8;
    return 0;
   }
  }
 }
 FUNC_3("no device found\n");
 FUNC_2();
 return -VAR_0;
}
