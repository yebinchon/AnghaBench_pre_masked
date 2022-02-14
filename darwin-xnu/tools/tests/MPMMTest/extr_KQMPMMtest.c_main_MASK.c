
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int thread_id_t ;
struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
typedef int name ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 () ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (struct timeval*,int *) ;
 scalar_t__ FUNC_5 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int,char**) ;
 int FUNC_7 (char*,double,...) ;
 int FUNC_8 (char*,char*,double,char*,int ) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 char** VAR_9 ;
 int FUNC_9 (int ,int ) ;
 int VAR_10 ;
 int FUNC_10 (char*,int,char*,char*) ;
 int FUNC_11 (char*,char*,int,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int *,int ,void*) ;
 scalar_t__ VAR_13 ;
 int FUNC_15 () ;

int FUNC_16(int VAR_14, char *VAR_15[])
{
 int VAR_16;
 int VAR_17;
 thread_id_t *VAR_18;
 thread_id_t *VAR_19;

 FUNC_9(VAR_0, VAR_10);
 FUNC_6(VAR_14, VAR_15);

 FUNC_1();





 if (VAR_2)
  FUNC_13(0);

 VAR_19 = (thread_id_t *) FUNC_5(VAR_6 * sizeof(thread_id_t));
 VAR_9 = (char **) FUNC_5(VAR_6 * sizeof(char *));
 if (VAR_13)
  FUNC_7("creating %d servers\n", VAR_6);
 for (VAR_16 = 0; VAR_16 < VAR_6; VAR_16++) {
  VAR_9[VAR_16] = (char *) FUNC_5(sizeof("PORT.pppppp.xx"));

  FUNC_11(VAR_9[VAR_16], "PORT.%06d.%02d", FUNC_3(), VAR_16);
  FUNC_14(&VAR_19[VAR_16], VAR_8, (void *) (long) VAR_16);
 }

 int VAR_20 = VAR_6 * VAR_4;
 int VAR_21 = VAR_5 * VAR_20;
 struct timeval VAR_22, VAR_23, VAR_24;





 FUNC_15();

 FUNC_7("%d server%s, %d client%s per server (%d total) %u messages...",
   VAR_6, (VAR_6 > 1)? "s" : "",
   VAR_4, (VAR_4 > 1)? "s" : "",
   VAR_20,
   VAR_21);
 FUNC_2(VAR_12);




 FUNC_4(&VAR_22, ((void*)0));
 FUNC_4(&VAR_22, ((void*)0));

 VAR_18 = (thread_id_t *) FUNC_5(VAR_20 * sizeof(thread_id_t));
 if (VAR_13)
  FUNC_7("creating %d clients\n", VAR_20);
 for (VAR_16 = 0; VAR_16 < VAR_6; VAR_16++) {
  for (VAR_17 = 0; VAR_17 < VAR_4; VAR_17++) {
   FUNC_14(
    &VAR_18[(VAR_16*VAR_4) + VAR_17],
    VAR_3,
    (void *) (long) VAR_16);
  }
 }


 for (VAR_16 = 0; VAR_16 < VAR_6; VAR_16++) {
  FUNC_12(&VAR_19[VAR_16]);
 }

 FUNC_4(&VAR_23, ((void*)0));

 for (VAR_16 = 0; VAR_16 < VAR_20; VAR_16++) {
  FUNC_12(&VAR_18[VAR_16]);
 }


 VAR_24.tv_sec = VAR_23.tv_sec - VAR_22.tv_sec;
 VAR_24.tv_usec = VAR_23.tv_usec - VAR_22.tv_usec;
 if (VAR_23.tv_usec < VAR_22.tv_usec) {
  VAR_24.tv_sec--;
  VAR_24.tv_usec += 1000000;
 }

 double VAR_25 = (double) VAR_24.tv_sec +
  1.0E-6 * (double) VAR_24.tv_usec;

 double VAR_26 = (double)VAR_24.tv_sec + (double)VAR_24.tv_usec/1000.0;
 double VAR_27 = (double) VAR_21/VAR_25;
 double VAR_28 = VAR_25*1.0E6 / (double)VAR_21;

 FUNC_7(" in %ld.%03u seconds\n",
        (long)VAR_24.tv_sec, VAR_24.tv_usec/1000);
 FUNC_7("  throughput in messages/sec:     %g\n",
   (double)VAR_21 / VAR_25);
 FUNC_7("  average message latency (usec): %2.3g\n",
   VAR_25 * 1.0E6 / (double) VAR_21);

 if (VAR_7 == VAR_1) {
  char VAR_29[256];
  FUNC_10(VAR_29, sizeof(VAR_29), "%s_avg_msg_latency", FUNC_0(VAR_15[0]));
  FUNC_8(VAR_29, "usec", VAR_28, "Message latency measured in microseconds. Lower is better", VAR_11);
 }
 return (0);

}
