
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef scalar_t__ uint32_t ;
typedef int no_dockfifo_uart ;
typedef int no_dockchannel_uart ;
typedef int is_pi3 ;
typedef int dccmode ;
struct TYPE_9__ {int (* uart_init ) () ;} ;
typedef int * DTEntry ;


 scalar_t__ VAR_0 ;
 uintptr_t VAR_1 ;
 scalar_t__ VAR_2 ;
 uintptr_t VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (char*,char*,int **) ;
 int FUNC_1 (int *,char*,void**,scalar_t__*) ;
 scalar_t__ FUNC_2 (char*,scalar_t__*,int) ;
 TYPE_1__ VAR_5 ;
 void* VAR_6 ;
 TYPE_1__ VAR_7 ;
 TYPE_1__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 TYPE_1__* VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_3 (char*) ;
 TYPE_1__ VAR_14 ;
 scalar_t__ VAR_15 ;
 void* FUNC_4 (scalar_t__,uintptr_t) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 () ;
 void* VAR_16 ;
 void* VAR_17 ;
 TYPE_1__ VAR_18 ;
 TYPE_1__ VAR_19 ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 TYPE_1__ VAR_20 ;
 void* VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;

int
FUNC_14(void)
{
 DTEntry VAR_24 = ((void*)0);
 uint32_t VAR_25, VAR_26;
 vm_offset_t VAR_27;
 uintptr_t *VAR_28;
 uint32_t *VAR_29 = ((void*)0);
 char *VAR_30 = 0;
 if (VAR_22 && VAR_12) {
  VAR_12->uart_init();
  FUNC_3("reinit serial\n");
  return 1;
 }

 VAR_26 = 0;
 if (FUNC_2("dcc", &VAR_26, sizeof (VAR_26))) {
  VAR_12 = &VAR_5;
  VAR_22 = 1;
  return 1;
 }
 VAR_27 = FUNC_6();

 if (VAR_27 == 0)
  return 0;
 if (FUNC_0("boot-console", ((void*)0), &VAR_24) == VAR_13) {
  FUNC_1(VAR_24, "reg", (void **)&VAR_28, &VAR_25);
  VAR_21 = FUNC_4(VAR_27 + *VAR_28, *(VAR_28 + 1));
  if (VAR_30 == 0)
   FUNC_1(VAR_24, "compatible", (void **)&VAR_30, &VAR_25);
 } else if (FUNC_0("name", "uart0", &VAR_24) == VAR_13) {
  FUNC_1(VAR_24, "reg", (void **)&VAR_28, &VAR_25);
  VAR_21 = FUNC_4(VAR_27 + *VAR_28, *(VAR_28 + 1));
  if (VAR_30 == 0)
   FUNC_1(VAR_24, "compatible", (void **)&VAR_30, &VAR_25);
 } else if (FUNC_0("name", "uart1", &VAR_24) == VAR_13) {
  FUNC_1(VAR_24, "reg", (void **)&VAR_28, &VAR_25);
  VAR_21 = FUNC_4(VAR_27 + *VAR_28, *(VAR_28 + 1));
  if (VAR_30 == 0)
   FUNC_1(VAR_24, "compatible", (void **)&VAR_30, &VAR_25);
 }
 else
  return 0;

 VAR_12->uart_init();

 VAR_22 = 1;

 return 1;
}
