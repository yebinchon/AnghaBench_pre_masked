
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint64_t ;
struct filedesc {int fd_knlistsize; scalar_t__ fd_knhashmask; scalar_t__ fd_kqhashmask; int * fd_kqhash; int * fd_knhash; int * fd_knlist; } ;
typedef TYPE_1__* proc_t ;
struct TYPE_9__ {struct filedesc* p_fd; } ;


 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int *,int *,unsigned long,unsigned int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 unsigned int FUNC_6 (TYPE_1__*,int *,int *,unsigned long,unsigned int) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;

int
FUNC_9(void *VAR_0, uint64_t *VAR_1, int VAR_2)
{
 proc_t VAR_3 = (proc_t)VAR_0;
 struct filedesc *VAR_4 = VAR_3->p_fd;
 unsigned int VAR_5 = 0;
 unsigned long VAR_6 = VAR_2 / sizeof(uint64_t);

 if (VAR_6 > 0) {
  FUNC_0(VAR_1 != ((void*)0));
 }

 FUNC_7(VAR_3);
 for (int VAR_7 = 0; VAR_7 < VAR_4->fd_knlistsize; VAR_7++) {
  VAR_5 = FUNC_1(&VAR_4->fd_knlist[VAR_7], VAR_1, VAR_6, VAR_5);
 }
 FUNC_2(VAR_3);
 FUNC_8(VAR_3);
 if (VAR_4->fd_knhashmask != 0) {
  for (int VAR_8 = 0; VAR_8 < (int)VAR_4->fd_knhashmask + 1; VAR_8++) {
   VAR_5 = FUNC_1(&VAR_4->fd_knhash[VAR_8], VAR_1, VAR_6, VAR_5);
  }
 }
 FUNC_3(VAR_3);

 FUNC_4(VAR_3);
 if (VAR_4->fd_kqhashmask != 0) {
  for (int VAR_9 = 0; VAR_9 < (int)VAR_4->fd_kqhashmask + 1; VAR_9++) {
   VAR_5 = FUNC_6(VAR_3, &VAR_4->fd_kqhash[VAR_9], VAR_1, VAR_6,
     VAR_5);
  }
 }
 FUNC_5(VAR_3);

 return (int)VAR_5;
}
