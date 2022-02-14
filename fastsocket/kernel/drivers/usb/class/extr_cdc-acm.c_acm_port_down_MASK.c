
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct acm {int rx_buflimit; TYPE_3__* control; TYPE_2__* ru; TYPE_1__* wb; int ctrlurb; scalar_t__ dev; int drain_wait; scalar_t__ ctrlout; } ;
struct TYPE_7__ {scalar_t__ needs_remote_wakeup; } ;
struct TYPE_6__ {int urb; } ;
struct TYPE_5__ {int urb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct acm*,scalar_t__) ;
 int FUNC_1 (struct acm*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int,int) ;

__attribute__((used)) static void FUNC_8(struct acm *VAR_4, int VAR_5)
{
 int VAR_6, VAR_7 = VAR_4->rx_buflimit;
 FUNC_2(&VAR_3);
 if (VAR_4->dev) {
  FUNC_4(VAR_4->control);
  FUNC_0(VAR_4, VAR_4->ctrlout = 0);

  if (VAR_5) {
   FUNC_7(VAR_4->drain_wait,
    (VAR_1 == FUNC_1(VAR_4)) || !VAR_4->dev,
     VAR_0 * VAR_2);
  }
  FUNC_6(VAR_4->ctrlurb);
  for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
   FUNC_6(VAR_4->wb[VAR_6].urb);
  for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
   FUNC_6(VAR_4->ru[VAR_6].urb);
  VAR_4->control->needs_remote_wakeup = 0;
  FUNC_5(VAR_4->control);
 }
 FUNC_3(&VAR_3);
}
