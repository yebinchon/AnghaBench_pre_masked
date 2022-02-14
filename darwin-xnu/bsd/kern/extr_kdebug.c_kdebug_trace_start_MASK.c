
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int kd_events ;
typedef int kd_event_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int *) ;
 int VAR_6 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 () ;
 scalar_t__ VAR_7 ;
 int FUNC_9 () ;
 int FUNC_10 (char*) ;
 int FUNC_11 () ;
 int FUNC_12 (int ) ;
 int FUNC_13 () ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 int FUNC_15 (char*,...) ;

void
FUNC_16(unsigned int VAR_8, const char *VAR_9,
 boolean_t VAR_10, boolean_t VAR_11)
{
 if (!VAR_8) {
  VAR_6 = 1;
  return;
 }

 FUNC_13();

 FUNC_3();

 FUNC_12(VAR_4);

 FUNC_5(VAR_8);

 FUNC_10("start_kern_tracing");

 if (FUNC_4(VAR_5)) {
  FUNC_15("error from kdbg_reinit, kernel tracing not started\n");
  goto out;
 }





 if (!VAR_10) {
  uint32_t VAR_12, VAR_13;
  (void)FUNC_0(&VAR_12, &VAR_13);
 }

 if (VAR_9 && VAR_9[0] != '\0') {
  if (FUNC_2(((void*)0)) == VAR_3) {
   FUNC_7(VAR_9);
   FUNC_1();
  }
 }





 boolean_t VAR_14 = FUNC_14(VAR_0);

 if (VAR_11) {
  FUNC_8();
 }

 FUNC_6(VAR_5, VAR_2 | (VAR_7 ?
                          VAR_1 : 0));

 if (!VAR_11) {




  FUNC_9();
 }

 FUNC_14(VAR_14);

 FUNC_15("kernel tracing started with %u events\n", VAR_8);
out:
 FUNC_11();
}
