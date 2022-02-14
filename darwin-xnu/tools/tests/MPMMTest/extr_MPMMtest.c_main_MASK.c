
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int thread_id_t ;
struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct port_args {int dummy; } ;
typedef int name ;
typedef scalar_t__ int64_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 char* FUNC_1 (char*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int,int) ;
 int VAR_5 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,...) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 () ;
 int FUNC_8 (struct timeval*,int *) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_11 (int,char**) ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (char*,char*,double,char*,int ) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 struct port_args* VAR_13 ;
 char** VAR_14 ;
 int FUNC_14 (int ,int ) ;
 int VAR_15 ;
 int FUNC_15 (char*,int,char*,char*) ;
 int FUNC_16 (char*,char*,int,int) ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int *,int ,void*) ;
 scalar_t__ VAR_19 ;
 int FUNC_20 () ;

int FUNC_21(int VAR_20, char *VAR_21[])
{
 int VAR_22;
 int VAR_23;
 thread_id_t *VAR_24;
 thread_id_t *VAR_25;

 FUNC_14(VAR_2, VAR_15);
 FUNC_11(VAR_20, VAR_21);

 if (FUNC_9(&VAR_7) != VAR_0) {
  FUNC_6(VAR_16, "Can't get mach_timebase_info!\n");
  FUNC_4(1);
 }

 FUNC_2();





 if (VAR_4)
  FUNC_18(0);

 VAR_25 = (thread_id_t *) FUNC_10(VAR_10 * sizeof(thread_id_t));
 VAR_14 = (char **) FUNC_10(VAR_10 * sizeof(char *));
 VAR_13 = (struct port_args *)FUNC_3(sizeof(struct port_args), VAR_10);
 if (!VAR_25 || !VAR_14 || !VAR_13) {
  FUNC_6(VAR_16, "malloc/calloc of %d server book keeping structs failed\n", VAR_10);
  FUNC_4(1);
 }

 if (VAR_19)
  FUNC_12("creating %d servers\n", VAR_10);
 for (VAR_22 = 0; VAR_22 < VAR_10; VAR_22++) {
  VAR_14[VAR_22] = (char *) FUNC_10(sizeof("PORT.pppppp.xx"));

  FUNC_16(VAR_14[VAR_22], "PORT.%06d.%02d", FUNC_7(), VAR_22);
  FUNC_19(&VAR_25[VAR_22], VAR_12, (void *) (long) VAR_22);
 }

 int VAR_26 = VAR_10 * VAR_8;
 int VAR_27 = VAR_9 * VAR_26;
 struct timeval VAR_28, VAR_29, VAR_30;





 FUNC_20();

 FUNC_12("%d server%s, %d client%s per server (%d total) %u messages...",
   VAR_10, (VAR_10 > 1)? "s" : "",
   VAR_8, (VAR_8 > 1)? "s" : "",
   VAR_26,
   VAR_27);
 FUNC_5(VAR_17);




 FUNC_8(&VAR_28, ((void*)0));
 FUNC_8(&VAR_28, ((void*)0));

 VAR_24 = (thread_id_t *) FUNC_10(VAR_26 * sizeof(thread_id_t));
 if (VAR_19)
  FUNC_12("creating %d clients\n", VAR_26);
 for (VAR_22 = 0; VAR_22 < VAR_10; VAR_22++) {
  for (VAR_23 = 0; VAR_23 < VAR_8; VAR_23++) {
   FUNC_19(
    &VAR_24[(VAR_22*VAR_8) + VAR_23],
    VAR_5,
    (void *) (long) VAR_22);
  }
 }


 for (VAR_22 = 0; VAR_22 < VAR_10; VAR_22++) {
  FUNC_17(&VAR_25[VAR_22]);
 }

 FUNC_8(&VAR_29, ((void*)0));
 if (VAR_19)
  FUNC_12("all servers complete: waiting for clients...\n");

 for (VAR_22 = 0; VAR_22 < VAR_26; VAR_22++) {
  FUNC_17(&VAR_24[VAR_22]);
 }


 VAR_30.tv_sec = VAR_29.tv_sec - VAR_28.tv_sec;
 VAR_30.tv_usec = VAR_29.tv_usec - VAR_28.tv_usec;
 if (VAR_29.tv_usec < VAR_28.tv_usec) {
  VAR_30.tv_sec--;
  VAR_30.tv_usec += 1000000;
 }

 double VAR_31 = (double) VAR_30.tv_sec +
  1.0E-6 * (double) VAR_30.tv_usec;

 FUNC_12(" in %lu.%03u seconds\n",
   VAR_30.tv_sec, VAR_30.tv_usec/1000);
 FUNC_12("  throughput in messages/sec:     %g\n",
   (double)VAR_27 / VAR_31);
 FUNC_12("  average message latency (usec): %2.3g\n",
   VAR_31 * 1.0E6 / (double) VAR_27);

 double VAR_32 = (double)VAR_30.tv_sec + (double)VAR_30.tv_usec/1000.0;
 double VAR_33 = (double) VAR_27/VAR_31;
 double VAR_34 = VAR_31*1.0E6 / (double)VAR_27;

 if (VAR_11 == VAR_3) {
  char VAR_35[256];
  FUNC_15(VAR_35, sizeof(VAR_35), "%s_avg_msg_latency", FUNC_1(VAR_21[0]));
  FUNC_13(VAR_35, "usec", VAR_34, "Message latency measured in microseconds. Lower is better", VAR_16);
 }

 if (VAR_18) {
  int64_t VAR_36 = FUNC_0(VAR_6);
  VAR_31 = (double)VAR_36 / (double)VAR_1;
  FUNC_12("  total send time: %2.3gs\n", VAR_31);
  FUNC_12("  average send time (usec): %2.3g\n",
         VAR_31 * 1.0E6 / (double)VAR_27);
 }

 return (0);

}
