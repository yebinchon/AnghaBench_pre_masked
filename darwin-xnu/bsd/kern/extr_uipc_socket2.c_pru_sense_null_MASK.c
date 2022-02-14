
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stat64 {int st_blksize; } ;
struct stat {int st_blksize; } ;
struct TYPE_2__ {int sb_hiwat; } ;
struct socket {TYPE_1__ so_snd; } ;



int
FUNC_0(struct socket *VAR_0, void *VAR_1, int VAR_2)
{
 if (VAR_2 != 0) {
  struct stat64 *VAR_3;

  VAR_3 = (struct stat64 *)VAR_1;
  VAR_3->st_blksize = VAR_0->so_snd.sb_hiwat;
 } else {
  struct stat *VAR_4;

  VAR_4 = (struct stat *)VAR_1;
  VAR_4->st_blksize = VAR_0->so_snd.sb_hiwat;
 }

 return (0);
}
