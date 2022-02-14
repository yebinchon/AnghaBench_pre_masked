
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef enum write_mode { ____Placeholder_write_mode } write_mode ;
typedef enum read_mode { ____Placeholder_read_mode } read_mode ;
typedef enum fd_pair { ____Placeholder_fd_pair } fd_pair ;
typedef int dt_helper_t ;
struct TYPE_3__ {int out_fd; int in_fd; } ;
struct TYPE_4__ {int fd_pair; int rd_mode; int wr_mode; int wr_fd; int rd_fd; TYPE_1__ wr_wait; int wr_kind; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int,int) ;
 int FUNC_5 (int,int *,int *) ;
 int FUNC_6 (int*) ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static void __attribute__((noreturn))
FUNC_7(enum fd_pair VAR_3, enum read_mode VAR_4, enum write_mode VAR_5)
{
 VAR_2.fd_pair = VAR_3;
 VAR_2.rd_mode = VAR_4;
 VAR_2.wr_mode = VAR_5;
 FUNC_5(VAR_3, &(VAR_2.rd_fd), &(VAR_2.wr_fd));

 VAR_2.wr_kind = VAR_0;
 int VAR_6[2];
 VAR_1; FUNC_0(FUNC_6(VAR_6), ((void*)0));
 VAR_2.wr_wait.out_fd = VAR_6[0];
 VAR_2.wr_wait.in_fd = VAR_6[1];

 FUNC_1("starting subprocesses");
 dt_helper_t VAR_7[2] = {
  FUNC_3("reader_helper"),
  FUNC_3("writer_helper")
 };

 FUNC_2(VAR_2.rd_fd);
 FUNC_2(VAR_2.wr_fd);

 FUNC_4(VAR_7, 2, 50000);
}
