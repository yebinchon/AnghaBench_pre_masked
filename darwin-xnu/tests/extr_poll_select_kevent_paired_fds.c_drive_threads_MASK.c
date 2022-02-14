
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int pthread_t ;
typedef enum write_mode { ____Placeholder_write_mode } write_mode ;
typedef enum read_mode { ____Placeholder_read_mode } read_mode ;
typedef enum fd_pair { ____Placeholder_fd_pair } fd_pair ;
struct TYPE_3__ {int sem; } ;
struct TYPE_4__ {int fd_pair; int rd_mode; int wr_mode; int rd_fd; TYPE_1__ wr_wait; int wr_kind; int wr_fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int *) ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int VAR_3 ;
 int FUNC_3 (int,int *,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int *,int ,int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int,int) ;
 int FUNC_8 (int ,int *,int ,int ) ;
 TYPE_2__ VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_9(enum fd_pair VAR_6, enum read_mode VAR_7,
  enum write_mode VAR_8)
{
 pthread_t VAR_9;

 VAR_4.fd_pair = VAR_6;
 VAR_4.rd_mode = VAR_7;
 VAR_4.wr_mode = VAR_8;
 FUNC_3(VAR_6, &(VAR_4.rd_fd), &(VAR_4.wr_fd));

 VAR_4.wr_kind = VAR_1;
 FUNC_0(FUNC_8(FUNC_4(), &VAR_4.wr_wait.sem, VAR_0, 0),
                       "semaphore_create shared.wr_wait.sem");

 VAR_3;
 FUNC_1(FUNC_5(&VAR_9, ((void*)0), VAR_5, ((void*)0)),
   ((void*)0));
 FUNC_2("created writer thread");

 FUNC_7(VAR_4.rd_fd, VAR_6, VAR_7);

 FUNC_1(FUNC_6(VAR_9, ((void*)0)), ((void*)0));

 VAR_2;
}
