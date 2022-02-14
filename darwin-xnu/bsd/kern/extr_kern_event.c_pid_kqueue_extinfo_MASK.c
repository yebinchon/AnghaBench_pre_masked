
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int user_addr_t ;
typedef int uint32_t ;
struct kqueue {int dummy; } ;
struct knote {int dummy; } ;
struct kevent_extinfo {int dummy; } ;
struct filedesc {int fd_knlistsize; scalar_t__ fd_knhashmask; int * fd_knhash; int * fd_knlist; } ;
typedef TYPE_1__* proc_t ;
typedef int int32_t ;
struct TYPE_7__ {struct filedesc* p_fd; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 struct knote* FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct kevent_extinfo*,unsigned long) ;
 int FUNC_3 (struct kevent_extinfo*,int ,int) ;
 struct kevent_extinfo* FUNC_4 (unsigned long) ;
 unsigned long FUNC_5 (struct kqueue*,struct knote*,struct kevent_extinfo*,unsigned long,unsigned long) ;
 int FUNC_6 (struct kevent_extinfo*,unsigned long) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (unsigned long,unsigned long) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;

int
FUNC_12(proc_t VAR_2, struct kqueue *VAR_3, user_addr_t VAR_4,
  uint32_t VAR_5, int32_t *VAR_6)
{
 struct knote *VAR_7;
 int VAR_8;
 int VAR_9 = 0;
 struct filedesc *VAR_10 = VAR_2->p_fd;
 unsigned long VAR_11 = 0;
 unsigned long VAR_12 = VAR_5 / sizeof(struct kevent_extinfo);
 struct kevent_extinfo *VAR_13 = ((void*)0);


 VAR_12 = FUNC_9(VAR_12, VAR_1);

 VAR_13 = FUNC_4(VAR_12 * sizeof(struct kevent_extinfo));
 if (VAR_13 == ((void*)0)) {
  VAR_9 = VAR_0;
  goto out;
 }
 FUNC_2(VAR_13, VAR_12 * sizeof(struct kevent_extinfo));

 FUNC_10(VAR_2);
 for (VAR_8 = 0; VAR_8 < VAR_10->fd_knlistsize; VAR_8++) {
  VAR_7 = FUNC_0(&VAR_10->fd_knlist[VAR_8]);
  VAR_11 = FUNC_5(VAR_3, VAR_7, VAR_13, VAR_12, VAR_11);
 }
 FUNC_11(VAR_2);

 if (VAR_10->fd_knhashmask != 0) {
  for (VAR_8 = 0; VAR_8 < (int)VAR_10->fd_knhashmask + 1; VAR_8++) {
   FUNC_7(VAR_2);
   VAR_7 = FUNC_0(&VAR_10->fd_knhash[VAR_8]);
   VAR_11 = FUNC_5(VAR_3, VAR_7, VAR_13, VAR_12, VAR_11);
   FUNC_8(VAR_2);
  }
 }

 FUNC_1(VAR_5 >= sizeof(struct kevent_extinfo) * FUNC_9(VAR_12, VAR_11));
 VAR_9 = FUNC_3(VAR_13, VAR_4, sizeof(struct kevent_extinfo) * FUNC_9(VAR_12, VAR_11));

out:
 if (VAR_13) {
  FUNC_6(VAR_13, VAR_12 * sizeof(struct kevent_extinfo));
  VAR_13 = ((void*)0);
 }

 if (!VAR_9) {
  *VAR_6 = FUNC_9(VAR_11, VAR_1);
 }
 return VAR_9;
}
