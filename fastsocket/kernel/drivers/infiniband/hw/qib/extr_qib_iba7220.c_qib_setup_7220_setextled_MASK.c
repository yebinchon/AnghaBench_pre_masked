
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
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (struct qib_devdata*,int ) ;
 int FUNC_4 (struct qib_devdata*,int ,scalar_t__) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct qib_pportdata *VAR_14, u32 VAR_15)
{
 struct qib_devdata *VAR_16 = VAR_14->dd;
 u64 VAR_17, VAR_18 = 0, VAR_19, VAR_20, VAR_21;
 unsigned long VAR_22;





 if (VAR_16->diag_client)
  return;

 if (VAR_14->led_override) {
  VAR_21 = (VAR_14->led_override & VAR_10) ?
   VAR_4 : VAR_3,
  VAR_20 = (VAR_14->led_override & VAR_9) ?
   VAR_5 : VAR_6;
 } else if (VAR_15) {
  VAR_19 = FUNC_3(VAR_16, VAR_12);
  VAR_21 = FUNC_2(VAR_19);
  VAR_20 = FUNC_1(VAR_19);
 } else {
  VAR_21 = 0;
  VAR_20 = 0;
 }

 FUNC_5(&VAR_16->cspec->gpio_lock, VAR_22);
 VAR_17 = VAR_16->cspec->extctrl & ~(FUNC_0(VAR_0, VAR_7) |
     FUNC_0(VAR_0, VAR_8));
 if (VAR_21 == VAR_4) {
  VAR_17 |= FUNC_0(VAR_0, VAR_7);





  VAR_18 = ((66600 * 1000UL / 4) << VAR_2)
   | ((187500 * 1000UL / 4) << VAR_1);
 }
 if (VAR_20 == VAR_5)
  VAR_17 |= FUNC_0(VAR_0, VAR_8);
 VAR_16->cspec->extctrl = VAR_17;
 FUNC_4(VAR_16, VAR_11, VAR_17);
 FUNC_6(&VAR_16->cspec->gpio_lock, VAR_22);

 if (VAR_18)
  FUNC_4(VAR_16, VAR_13, VAR_18);
}
