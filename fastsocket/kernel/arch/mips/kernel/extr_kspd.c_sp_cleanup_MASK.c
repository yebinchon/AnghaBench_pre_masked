
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct files_struct {int dummy; } ;
struct file {int dummy; } ;
struct fdtable {int max_fds; int * fd; TYPE_1__* open_fds; } ;
struct TYPE_4__ {struct files_struct* files; } ;
struct TYPE_3__ {unsigned long* fds_bits; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 struct fdtable* FUNC_0 (struct files_struct*) ;
 int FUNC_1 (struct file*,struct files_struct*) ;
 int FUNC_2 (char*) ;
 struct file* FUNC_3 (int *,int *) ;

__attribute__((used)) static void FUNC_4(void)
{
 struct files_struct *VAR_2 = VAR_1->files;
 int VAR_3, VAR_4;
 struct fdtable *VAR_5;

 VAR_4 = 0;





 VAR_5 = FUNC_0(VAR_2);
 for (;;) {
  unsigned long VAR_6;
  VAR_3 = VAR_4 * VAR_0;
  if (VAR_3 >= VAR_5->max_fds)
   break;
  VAR_6 = VAR_5->open_fds->fds_bits[VAR_4++];
  while (VAR_6) {
   if (VAR_6 & 1) {
    struct file * VAR_7 = FUNC_3(&VAR_5->fd[VAR_3], ((void*)0));
    if (VAR_7)
     FUNC_1(VAR_7, VAR_2);
   }
   VAR_3++;
   VAR_6 >>= 1;
  }
 }


 FUNC_2("/");
}
