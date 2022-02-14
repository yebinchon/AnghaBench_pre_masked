
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int kern_return_t ;
struct TYPE_7__ {int tv_sec; } ;
struct TYPE_5__ {int out_fd; int in_fd; int sem; } ;
struct TYPE_6__ {int wr_kind; TYPE_1__ wr_wait; } ;


 int VAR_0 ;

 TYPE_3__ VAR_1 ;

 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (char*) ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int ,TYPE_3__) ;
 TYPE_2__ VAR_3 ;

__attribute__((used)) static void
FUNC_7(void)
{
 switch (VAR_3.wr_kind) {
 case 128:
  FUNC_3("wait shared.wr_wait.sem");
  kern_return_t VAR_4 = FUNC_6(VAR_3.wr_wait.sem, VAR_1);

  if (VAR_4 == VAR_0) {
   FUNC_0("THREAD_WRITER semaphore timedout after %d seconds", VAR_1.tv_sec);
  }
  VAR_2;
  FUNC_1(VAR_4, "semaphore_timedwait shared.wr_wait.sem");
  break;

 case 129: {
  char VAR_5;
  FUNC_4(VAR_3.wr_wait.in_fd);
  VAR_2; FUNC_2(FUNC_5(
    VAR_3.wr_wait.out_fd, &VAR_5, 1), ((void*)0));
  break;
 }
 }

 FUNC_3("writer woken up, starting to write");
}
