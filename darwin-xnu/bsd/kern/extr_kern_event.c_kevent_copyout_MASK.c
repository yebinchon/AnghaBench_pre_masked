
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user_addr_t ;
typedef uintptr_t uint64_t ;
typedef uintptr_t uint32_t ;
struct user64_kevent {uintptr_t ident; int * ext; void* data; scalar_t__ xflags; int fflags; int udata; int qos; int flags; int filter; } ;
struct user32_kevent {uintptr_t ident; int * ext; void* data; scalar_t__ xflags; int fflags; int udata; int qos; int flags; int filter; } ;
struct proc {int dummy; } ;
struct kevent_qos_s {uintptr_t ident; int * ext; void* data; scalar_t__ xflags; int fflags; int udata; int qos; int flags; int filter; } ;
struct kevent_internal_s {uintptr_t ident; int * ext; scalar_t__ data; int fflags; int udata; int qos; int flags; int filter; } ;
struct kevent64_s {uintptr_t ident; int * ext; void* data; scalar_t__ xflags; int fflags; int udata; int qos; int flags; int filter; } ;
typedef int kev64 ;
typedef int kev32 ;
typedef void* int64_t ;
typedef void* int32_t ;
typedef int caddr_t ;


 scalar_t__ FUNC_0 (struct proc*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct user64_kevent*,int) ;
 int FUNC_3 (int ,int,int) ;

__attribute__((used)) static int
FUNC_4(struct kevent_internal_s *VAR_3, user_addr_t *VAR_4, struct proc *VAR_5,
  unsigned int VAR_6)
{
 user_addr_t VAR_7 = *VAR_4;
 int VAR_8;
 int VAR_9;







 if (VAR_6 & VAR_0) {
  FUNC_1((VAR_6 & VAR_2) == 0);

  if (FUNC_0(VAR_5)) {
   struct user64_kevent VAR_10;

   VAR_8 = sizeof (VAR_10);
   FUNC_2(&VAR_10, VAR_8);





   VAR_10 = (VAR_3->ident == (uintptr_t)-1) ?
    (uint64_t)-1LL : (uint64_t)VAR_3->ident;

   VAR_10 = VAR_3->filter;
   VAR_10 = VAR_3->flags;
   VAR_10 = VAR_3->fflags;
   VAR_10 = (int64_t) VAR_3->data;
   VAR_10 = VAR_3->udata;
   VAR_9 = FUNC_3((caddr_t)&VAR_10, VAR_7, VAR_8);
  } else {
   struct user32_kevent VAR_11;

   VAR_8 = sizeof (VAR_11);
   FUNC_2(&VAR_11, VAR_8);
   VAR_11 = (uint32_t)VAR_3->ident;
   VAR_11 = VAR_3->filter;
   VAR_11 = VAR_3->flags;
   VAR_11 = VAR_3->fflags;
   VAR_11 = (int32_t)VAR_3->data;
   VAR_11 = VAR_3->udata;
   VAR_9 = FUNC_3((caddr_t)&VAR_11, VAR_7, VAR_8);
  }
 } else if (VAR_6 & VAR_1) {
  struct kevent64_s VAR_12;

  VAR_8 = sizeof (struct kevent64_s);
  if (VAR_6 & VAR_2) {
   VAR_7 -= VAR_8;
  }
  FUNC_2(&VAR_12, VAR_8);
  VAR_12 = VAR_3->ident;
  VAR_12 = VAR_3->filter;
  VAR_12 = VAR_3->flags;
  VAR_12 = VAR_3->fflags;
  VAR_12 = (int64_t) VAR_3->data;
  VAR_12 = VAR_3->udata;
  VAR_12[0] = VAR_3->ext[0];
  VAR_12[1] = VAR_3->ext[1];
  VAR_9 = FUNC_3((caddr_t)&VAR_12, VAR_7, VAR_8);
 } else {
  struct kevent_qos_s VAR_13;

  VAR_8 = sizeof (struct kevent_qos_s);
  if (VAR_6 & VAR_2) {
   VAR_7 -= VAR_8;
  }
  FUNC_2(&VAR_13, VAR_8);
  VAR_13.ident = VAR_3->ident;
  VAR_13.filter = VAR_3->filter;
  VAR_13.flags = VAR_3->flags;
  VAR_13.qos = VAR_3->qos;
  VAR_13.udata = VAR_3->udata;
  VAR_13.fflags = VAR_3->fflags;
  VAR_13.xflags = 0;
  VAR_13.data = (int64_t) VAR_3->data;
  VAR_13.ext[0] = VAR_3->ext[0];
  VAR_13.ext[1] = VAR_3->ext[1];
  VAR_13.ext[2] = VAR_3->ext[2];
  VAR_13.ext[3] = VAR_3->ext[3];
  VAR_9 = FUNC_3((caddr_t)&VAR_13, VAR_7, VAR_8);
 }
 if (!VAR_9) {
  if (VAR_6 & VAR_2)
   *VAR_4 = VAR_7;
  else
   *VAR_4 = VAR_7 + VAR_8;
 }
 return (VAR_9);
}
