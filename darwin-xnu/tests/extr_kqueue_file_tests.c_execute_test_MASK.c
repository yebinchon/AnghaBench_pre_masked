
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {int ident; scalar_t__ filter; } ;
struct TYPE_11__ {TYPE_6__ tu_kev; int tu_pollevents; } ;
struct TYPE_10__ {int act_fd; } ;
struct TYPE_12__ {int t_testname; scalar_t__ t_nbytes; scalar_t__ t_known_failure; scalar_t__ t_nondeterministic; TYPE_2__ t_union; scalar_t__ t_is_poll_test; scalar_t__ t_want_event; int t_n_cleanup_actions; int t_cleanup_actions; int t_watchfile; scalar_t__ t_file_is_fifo; scalar_t__ t_extra_sleep_hack; TYPE_1__ t_helpthreadact; scalar_t__ t_write_some_data; scalar_t__ t_read_to_end_first; int t_n_prep_actions; int t_prep_actions; } ;
typedef TYPE_3__ test_t ;
struct timespec {long member_1; int member_0; } ;
struct pollfd {int fd; int events; } ;
struct kevent {int flags; int data; } ;
typedef int pthread_t ;
typedef int evlist ;
struct TYPE_13__ {int act_fd; } ;
typedef TYPE_4__ action_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,...) ;
 int VAR_7 ;
 int FUNC_2 (char*,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int) ;
 int VAR_11 ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (TYPE_4__*,int ,int ,int ) ;
 int FUNC_7 (int,TYPE_6__*,int,struct kevent*,int,struct timespec*) ;
 int FUNC_8 () ;
 int FUNC_9 (struct kevent*,int ,int) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int ,int*,int*) ;
 int FUNC_12 (struct pollfd*,int,int ) ;
 int FUNC_13 (int *,int *,int (*) (TYPE_4__*),void*) ;
 int FUNC_14 (int ,void**) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int) ;
 scalar_t__ VAR_12 ;
 int FUNC_17 (int ) ;

int
FUNC_18(test_t *VAR_13)
{
 int VAR_14, VAR_15, VAR_16 = -1, VAR_17, VAR_18, VAR_19, VAR_20 = -1;
 int VAR_21 = -1;
 pthread_t VAR_22;
 struct kevent VAR_23;
 struct timespec VAR_24 = {VAR_9, 0l};
 int *VAR_25;

 FUNC_9(&VAR_23, 0, sizeof(VAR_23));

 FUNC_1("[BEGIN] %s\n", VAR_13->t_testname);

 FUNC_1(VAR_13->t_want_event ? "Expecting an event.\n" : "Not expecting events.\n");

 VAR_18 = FUNC_5(VAR_13->t_prep_actions, VAR_13->t_n_prep_actions, 1);


 if (0 == VAR_18) {

  if (!VAR_13->t_is_poll_test) {
   if ((VAR_15 = FUNC_8()) == -1) {
    FUNC_1("kqueue() failed: %d (%s)\n", VAR_11, FUNC_16(VAR_11));
   }
  }

  if ((VAR_13->t_is_poll_test) || VAR_15 >= 0) {


   if (VAR_13->t_file_is_fifo) {
    VAR_16 = -1;
    FUNC_11(VAR_13->t_watchfile, &VAR_16, &VAR_20);
   } else {
    if ((VAR_16 = FUNC_10(VAR_13->t_watchfile, VAR_4 | VAR_5)) == -1) {
     FUNC_1("open() of watchfile %s failed: %d (%s)\n", VAR_13->t_watchfile,
           VAR_11, FUNC_16(VAR_11));
    }
   }

   if (VAR_16 >= 0) {
    FUNC_1("Opened file to monitor.\n");





    VAR_13->t_helpthreadact.act_fd = (VAR_20 >= 0 ? VAR_20 : VAR_16);

    if (VAR_13->t_read_to_end_first) {
     FUNC_15(VAR_16);
    } else if (VAR_13->t_write_some_data) {
     action_t VAR_26;
     FUNC_6(&VAR_26, VAR_3, VAR_10, 0);
     VAR_26.act_fd = VAR_20;
     (void)FUNC_4(&VAR_26);
    }


    VAR_12 = 0;
    VAR_18 = FUNC_13(&VAR_22, ((void*)0), FUNC_4, (void*) &VAR_13->t_helpthreadact);
    if (0 == VAR_18) {
     FUNC_1("Created helper thread.\n");


     if (VAR_13->t_extra_sleep_hack) {
      FUNC_17(VAR_8);
     }

     if (VAR_13->t_is_poll_test) {
      struct pollfd VAR_27;
      VAR_27.fd = VAR_16;
      VAR_27.events = VAR_13->t_union.tu_pollevents;
      VAR_19 = FUNC_12(&VAR_27, 1, VAR_9);
      FUNC_1("Finished poll() call.\n");
      if ((VAR_19 < 0)) {
       FUNC_1("error is in errno, %s\n", FUNC_16(VAR_11));
       VAR_18 = VAR_19;
      }
     } else {
      VAR_13->t_union.tu_kev.ident = VAR_16;
      VAR_19 = FUNC_7(VAR_15, &VAR_13->t_union.tu_kev, 1, &VAR_23, 1, &VAR_24);
      FUNC_1("Finished kevent() call.\n");

      if ((VAR_19 < 0) || (VAR_23.flags & VAR_2)) {
       FUNC_1("kevent() call failed.\n");
       if (VAR_19 < 0) {
        FUNC_1("error is in errno, %s\n", FUNC_16(VAR_11));
       } else {
        FUNC_1("error is in data, %s\n", FUNC_16(VAR_23.data));
       }
       VAR_18 = VAR_19;
      }
     }


     VAR_25 = ((void*)0);
     VAR_17 = FUNC_14(VAR_22, (void **)&VAR_25);
     if (VAR_17 != 0) {
      FUNC_1("Couldn't join helper thread: %d (%s).\n", VAR_17,
       FUNC_16(VAR_17));
     } else if (*VAR_25) {
      FUNC_1("Helper action had result %d\n", *VAR_25);
     }
     VAR_18 = ((VAR_18 == 0) && (VAR_17 == 0) && (*VAR_25 == 0)) ? 0 : -1;
    } else {
     FUNC_1("Couldn't start thread: %d (%s).\n", VAR_18, FUNC_16(VAR_18));
    }

    FUNC_3(VAR_16);
    if (VAR_13->t_file_is_fifo) {
     FUNC_3(VAR_20);
    }
   } else {
    FUNC_1("Couldn't open test file %s to monitor: %d (%s)\n", VAR_13->t_watchfile);
    VAR_18 = -1;
   }
   if (!VAR_13->t_is_poll_test) {
    FUNC_3(VAR_15);
   }
  } else {
   FUNC_1("Couldn't open kqueue.\n");
   VAR_18 = -1;
  }
 }


 FUNC_5(VAR_13->t_cleanup_actions, VAR_13->t_n_cleanup_actions, 0);




 if (0 == VAR_18) {
  FUNC_1(VAR_19 > 0 ? "Got an event.\n" : "Did not get an event.\n");
  if (((VAR_19 > 0) && (VAR_13->t_want_event)) || ((VAR_19 == 0) && (!VAR_13->t_want_event))) {
   if ((!VAR_13->t_is_poll_test) && (VAR_13->t_union.tu_kev.filter == VAR_0 || VAR_13->t_union.tu_kev.filter == VAR_1)
    && (VAR_13->t_nbytes) && (VAR_13->t_nbytes != VAR_23.data)) {
    FUNC_1("Read wrong number of bytes available.  Wanted %d, got %d\n", VAR_13->t_nbytes, VAR_23.data);
    VAR_21 = -1;
   } else {
    VAR_21 = 0;
   }

  } else {
   FUNC_1("Got unexpected event or lack thereof.\n");
   VAR_21 = -1;
  }
 } else {
  FUNC_1("Failed to execute test. res = %d\n", VAR_18);
  VAR_21 = -1;
 }

 if (VAR_13->t_nondeterministic) {
  FUNC_1("XXX non-deterministic test result = %d (%s)\n", VAR_21,
   (VAR_21 == 0) ? "pass" : "fail");
  VAR_7;
 } else {
  if (VAR_13->t_known_failure) {

   VAR_6;
  }
 }

 if (VAR_21 == 0) {
  FUNC_2("%s", VAR_13->t_testname);
 } else {
  FUNC_0("%s", VAR_13->t_testname);
 }

 FUNC_1("Test %s done with result %d.\n", VAR_13->t_testname, VAR_21);
 return (VAR_21);
}
