
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct udc_ep {scalar_t__ halted; } ;
struct TYPE_5__ {struct udc_ep* ep; } ;
struct TYPE_4__ {scalar_t__ expires; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_6 ;
 TYPE_2__* VAR_7 ;
 int FUNC_4 (struct udc_ep*) ;
 TYPE_1__ VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_10)
{
 struct udc_ep *VAR_11;
 int VAR_12 = 0;

 FUNC_2(&VAR_9);




 VAR_11 = &VAR_7->ep[VAR_1];
 FUNC_4(VAR_11);
 if (VAR_11->halted)
  VAR_12 = 1;

 VAR_11 = &VAR_7->ep[VAR_2];
 FUNC_4(VAR_11);
 if (VAR_11->halted)
  VAR_12 = 1;


 if (!VAR_6 && VAR_12) {
  VAR_8.expires = VAR_4 +
     VAR_0 * VAR_3
     / (1000 * 1000);
  FUNC_0(&VAR_8);
 }
 FUNC_3(&VAR_9);

 if (VAR_6)
  FUNC_1(&VAR_5);
}
