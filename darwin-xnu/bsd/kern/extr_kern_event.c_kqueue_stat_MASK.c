
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user64_kevent {int dummy; } ;
struct user32_kevent {int dummy; } ;
struct stat64 {int st_blksize; void* st_mode; int st_size; } ;
struct stat {int st_blksize; void* st_mode; int st_size; } ;
struct kqueue {int kq_state; int kq_count; } ;
struct kevent_qos_s {int dummy; } ;
struct kevent64_s {int dummy; } ;
typedef int proc_t ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (void*,int) ;
 int FUNC_3 (struct kqueue*) ;
 int FUNC_4 (struct kqueue*) ;

int
FUNC_5(struct kqueue *VAR_4, void *VAR_5, int VAR_6, proc_t VAR_7)
{
 FUNC_1((VAR_4->kq_state & VAR_2) == 0);

 FUNC_3(VAR_4);
 if (VAR_6 != 0) {
  struct stat64 *VAR_8 = (struct stat64 *)VAR_5;

  FUNC_2((void *)VAR_8, sizeof(*VAR_8));
  VAR_8->st_size = VAR_4->kq_count;
  if (VAR_4->kq_state & VAR_1)
   VAR_8->st_blksize = sizeof(struct kevent_qos_s);
  else if (VAR_4->kq_state & VAR_0)
   VAR_8->st_blksize = sizeof(struct kevent64_s);
  else if (FUNC_0(VAR_7))
   VAR_8->st_blksize = sizeof(struct user64_kevent);
  else
   VAR_8->st_blksize = sizeof(struct user32_kevent);
  VAR_8->st_mode = VAR_3;
 } else {
  struct stat *VAR_9 = (struct stat *)VAR_5;

  FUNC_2((void *)VAR_9, sizeof(*VAR_9));
  VAR_9->st_size = VAR_4->kq_count;
  if (VAR_4->kq_state & VAR_1)
   VAR_9->st_blksize = sizeof(struct kevent_qos_s);
  else if (VAR_4->kq_state & VAR_0)
   VAR_9->st_blksize = sizeof(struct kevent64_s);
  else if (FUNC_0(VAR_7))
   VAR_9->st_blksize = sizeof(struct user64_kevent);
  else
   VAR_9->st_blksize = sizeof(struct user32_kevent);
  VAR_9->st_mode = VAR_3;
 }
 FUNC_4(VAR_4);
 return (0);
}
