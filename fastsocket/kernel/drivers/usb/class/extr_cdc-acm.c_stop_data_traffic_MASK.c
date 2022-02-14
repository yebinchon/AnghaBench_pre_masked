
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct acm {int rx_buflimit; int work; int urb_task; TYPE_1__* ru; TYPE_2__* wb; int ctrlurb; } ;
struct TYPE_4__ {int urb; } ;
struct TYPE_3__ {int urb; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct acm *VAR_1)
{
 int VAR_2;
 FUNC_1("Entering stop_data_traffic");

 FUNC_2(&VAR_1->urb_task);

 FUNC_4(VAR_1->ctrlurb);
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  FUNC_4(VAR_1->wb[VAR_2].urb);
 for (VAR_2 = 0; VAR_2 < VAR_1->rx_buflimit; VAR_2++)
  FUNC_4(VAR_1->ru[VAR_2].urb);

 FUNC_3(&VAR_1->urb_task);

 FUNC_0(&VAR_1->work);
}
