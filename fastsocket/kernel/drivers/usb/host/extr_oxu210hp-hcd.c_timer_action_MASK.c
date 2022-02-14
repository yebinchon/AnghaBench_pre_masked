
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long expires; } ;
struct oxu_hcd {TYPE_1__ watchdog; int actions; } ;
typedef enum ehci_timer_action { ____Placeholder_ehci_timer_action } ehci_timer_action ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;




 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_1__*,unsigned long) ;
 int FUNC_1 (int,int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static inline void FUNC_3(struct oxu_hcd *VAR_5,
     enum ehci_timer_action VAR_6)
{
 if (!FUNC_1(VAR_6, &VAR_5->actions)) {
  unsigned long VAR_7;

  switch (VAR_6) {
  case 129:
   VAR_7 = VAR_1;
   break;
  case 128:
   VAR_7 = VAR_2;
   break;
  case 131:
   VAR_7 = VAR_0;
   break;
  case 130:
  default:
   VAR_7 = VAR_3;
   break;
  }
  VAR_7 += VAR_4;





  if (VAR_6 != 129
    && VAR_7 > VAR_5->watchdog.expires
    && FUNC_2(&VAR_5->watchdog))
   return;
  FUNC_0(&VAR_5->watchdog, VAR_7);
 }
}
