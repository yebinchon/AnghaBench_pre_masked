
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct udc {scalar_t__ data_ep_queued; int data_ep_enabled; } ;
struct TYPE_4__ {scalar_t__ expires; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct udc*) ;
 TYPE_1__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void FUNC_3(struct udc *VAR_7)
{
 if (VAR_6) {




  if (!VAR_7->data_ep_enabled || VAR_7->data_ep_queued) {
   FUNC_2(VAR_7);
  } else {




   if (VAR_3 != 0 && !FUNC_1(&VAR_5)) {
    VAR_5.expires =
     VAR_2 + VAR_0/VAR_1;
    VAR_3 = 1;
    if (!VAR_4) {
     FUNC_0(&VAR_5);
    }
   }
  }
 }
}
