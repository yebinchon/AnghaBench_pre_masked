
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mite_struct {TYPE_2__* pcidev; scalar_t__ used; struct mite_struct* next; } ;
struct comedi_device {TYPE_4__* board_ptr; } ;
struct TYPE_8__ {scalar_t__ dev_id; } ;
struct TYPE_7__ {struct mite_struct* mite; } ;
struct TYPE_6__ {int devfn; TYPE_1__* bus; } ;
struct TYPE_5__ {int number; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct mite_struct*) ;
 struct mite_struct* VAR_1 ;
 int FUNC_2 () ;
 int VAR_2 ;
 TYPE_4__* VAR_3 ;
 int FUNC_3 (char*) ;
 TYPE_3__* FUNC_4 (struct comedi_device*) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_4, int VAR_5, int VAR_6)
{
 struct mite_struct *VAR_7;
 int VAR_8;

 for (VAR_7 = VAR_1; VAR_7; VAR_7 = VAR_7->next) {
  if (VAR_7->used)
   continue;
  if (VAR_5 || VAR_6) {
   if (VAR_5 != VAR_7->pcidev->bus->number ||
       VAR_6 != FUNC_0(VAR_7->pcidev->devfn))
    continue;
  }

  for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
   if (FUNC_1(VAR_7) == VAR_3[VAR_8].dev_id) {
    VAR_4->board_ptr = VAR_3 + VAR_8;
    FUNC_4(VAR_4)->mite = VAR_7;
    return 0;
   }
  }
 }
 FUNC_3("no device found\n");
 FUNC_2();
 return -VAR_0;
}
