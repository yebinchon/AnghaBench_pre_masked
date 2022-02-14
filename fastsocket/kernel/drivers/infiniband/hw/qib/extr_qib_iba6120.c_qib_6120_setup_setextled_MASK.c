
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct qib_pportdata {int led_override; struct qib_devdata* dd; } ;
struct qib_devdata {TYPE_1__* cspec; scalar_t__ diag_client; } ;
struct TYPE_2__ {scalar_t__ extctrl; int gpio_lock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (struct qib_devdata*,int ) ;
 int FUNC_4 (struct qib_devdata*,int ,scalar_t__) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct qib_pportdata *VAR_11, u32 VAR_12)
{
 u64 VAR_13, VAR_14, VAR_15, VAR_16;
 unsigned long VAR_17;
 struct qib_devdata *VAR_18 = VAR_11->dd;





 if (VAR_18->diag_client)
  return;


 if (VAR_11->led_override) {
  VAR_16 = (VAR_11->led_override & VAR_8) ?
   VAR_2 : VAR_1,
  VAR_15 = (VAR_11->led_override & VAR_7) ?
   VAR_3 : VAR_4;
 } else if (VAR_12) {
  VAR_14 = FUNC_3(VAR_18, VAR_10);
  VAR_16 = FUNC_2(VAR_14);
  VAR_15 = FUNC_1(VAR_14);
 } else {
  VAR_16 = 0;
  VAR_15 = 0;
 }

 FUNC_5(&VAR_18->cspec->gpio_lock, VAR_17);
 VAR_13 = VAR_18->cspec->extctrl & ~(FUNC_0(VAR_0, VAR_5) |
     FUNC_0(VAR_0, VAR_6));

 if (VAR_16 == VAR_2)
  VAR_13 |= FUNC_0(VAR_0, VAR_6);
 if (VAR_15 == VAR_3)
  VAR_13 |= FUNC_0(VAR_0, VAR_5);
 VAR_18->cspec->extctrl = VAR_13;
 FUNC_4(VAR_18, VAR_9, VAR_13);
 FUNC_6(&VAR_18->cspec->gpio_lock, VAR_17);
}
