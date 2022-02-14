
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct unpcb {scalar_t__ unp_ino; TYPE_2__* unp_conn; } ;
struct stat64 {scalar_t__ st_ino; void* st_dev; void* st_blksize; } ;
struct stat {scalar_t__ st_ino; void* st_dev; void* st_blksize; } ;
struct TYPE_6__ {scalar_t__ sb_cc; } ;
struct TYPE_4__ {void* sb_hiwat; } ;
struct socket {scalar_t__ so_type; TYPE_3__ so_rcv; TYPE_1__ so_snd; } ;
typedef scalar_t__ ino_t ;
typedef scalar_t__ ino64_t ;
typedef void* blksize_t ;
struct TYPE_5__ {struct socket* unp_socket; } ;


 int VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 struct unpcb* FUNC_0 (struct socket*) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_1(struct socket *VAR_4, void *VAR_5, int VAR_6)
{
 struct unpcb *VAR_7 = FUNC_0(VAR_4);
 struct socket *VAR_8;
 blksize_t VAR_9;

 if (VAR_7 == 0)
  return (VAR_0);

 VAR_9 = VAR_4->so_snd.sb_hiwat;
 if (VAR_4->so_type == VAR_2 && VAR_7->unp_conn != 0) {
  VAR_8 = VAR_7->unp_conn->unp_socket;
  VAR_9 += VAR_8->so_rcv.sb_cc;
 }
 if (VAR_7->unp_ino == 0)
  VAR_7->unp_ino = VAR_3++;

 if (VAR_6 != 0) {
  struct stat64 *VAR_10;

  VAR_10 = (struct stat64 *)VAR_5;
  VAR_10->st_blksize = VAR_9;
  VAR_10->st_dev = VAR_1;
  VAR_10->st_ino = (ino64_t)VAR_7->unp_ino;
 } else {
  struct stat *VAR_11;

  VAR_11 = (struct stat *)VAR_5;
  VAR_11->st_blksize = VAR_9;
  VAR_11->st_dev = VAR_1;
  VAR_11->st_ino = (ino_t)(uintptr_t)VAR_7->unp_ino;
 }

 return (0);
}
