
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ speed; int ep_list; } ;
struct udc {TYPE_3__* ep; TYPE_2__ gadget; } ;
struct TYPE_4__ {int ep_list; } ;
struct TYPE_6__ {int fifo_depth; TYPE_1__ ep; } ;


 int FUNC_0 (int *) ;
 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(struct udc *VAR_9)
{

 FUNC_0(&VAR_9->gadget.ep_list);
 FUNC_1(&VAR_9->ep[VAR_2].ep.ep_list,
      &VAR_9->gadget.ep_list);
 FUNC_1(&VAR_9->ep[VAR_0].ep.ep_list,
      &VAR_9->gadget.ep_list);
 FUNC_1(&VAR_9->ep[VAR_3].ep.ep_list,
      &VAR_9->gadget.ep_list);


 VAR_9->ep[VAR_2].fifo_depth = VAR_1;
 if (VAR_9->gadget.speed == VAR_6)
  VAR_9->ep[VAR_0].fifo_depth = VAR_4;
 else if (VAR_9->gadget.speed == VAR_7)
  VAR_9->ep[VAR_0].fifo_depth = VAR_8;
 VAR_9->ep[VAR_3].fifo_depth = VAR_5;
}
