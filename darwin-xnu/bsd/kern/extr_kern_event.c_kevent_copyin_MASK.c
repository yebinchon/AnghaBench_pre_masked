
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user_addr_t ;
struct user64_kevent {uintptr_t ident; intptr_t data; int fflags; int udata; int flags; int filter; } ;
struct user32_kevent {scalar_t__ data; int fflags; int udata; int flags; int filter; scalar_t__ ident; } ;
struct proc {int dummy; } ;
struct kevent_qos_s {uintptr_t ident; intptr_t data; int * ext; int fflags; int udata; int qos; int flags; int filter; } ;
struct kevent_internal_s {uintptr_t ident; intptr_t data; int * ext; int fflags; int udata; int qos; int flags; int filter; } ;
struct kevent64_s {uintptr_t ident; intptr_t data; int * ext; int fflags; int udata; int flags; int filter; } ;
typedef int kev64 ;
typedef int kev32 ;
typedef int caddr_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct proc*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_2 (struct kevent_internal_s*,int) ;
 int FUNC_3 (int,int ,int) ;

__attribute__((used)) static int
FUNC_4(user_addr_t *VAR_2, struct kevent_internal_s *VAR_3, struct proc *VAR_4,
  unsigned int VAR_5)
{
 int VAR_6;
 int VAR_7;

 if (VAR_5 & VAR_0) {
  FUNC_2(VAR_3, sizeof (*VAR_3));

  if (FUNC_1(VAR_4)) {
   struct user64_kevent VAR_8;

   VAR_6 = sizeof (VAR_8);
   VAR_7 = FUNC_3(*VAR_2, (caddr_t)&VAR_8, VAR_6);
   if (VAR_7)
    return (VAR_7);
   VAR_3->ident = VAR_8;
   VAR_3->filter = VAR_8;
   VAR_3->flags = VAR_8;
   VAR_3->udata = VAR_8;
   VAR_3->fflags = VAR_8;
   VAR_3->data = VAR_8;
  } else {
   struct user32_kevent VAR_9;

   VAR_6 = sizeof (VAR_9);
   VAR_7 = FUNC_3(*VAR_2, (caddr_t)&VAR_9, VAR_6);
   if (VAR_7)
    return (VAR_7);
   VAR_3->ident = (uintptr_t)VAR_9;
   VAR_3->filter = VAR_9;
   VAR_3->flags = VAR_9;
   VAR_3->udata = FUNC_0(VAR_9);
   VAR_3->fflags = VAR_9;
   VAR_3->data = (intptr_t)VAR_9;
  }
 } else if (VAR_5 & VAR_1) {
  struct kevent64_s VAR_10;

  FUNC_2(VAR_3, sizeof (*VAR_3));

  VAR_6 = sizeof (struct kevent64_s);
  VAR_7 = FUNC_3(*VAR_2, (caddr_t)&VAR_10, VAR_6);
  if (VAR_7)
   return(VAR_7);
  VAR_3->ident = VAR_10;
  VAR_3->filter = VAR_10;
  VAR_3->flags = VAR_10;
  VAR_3->udata = VAR_10;
  VAR_3->fflags = VAR_10;
  VAR_3->data = VAR_10;
  VAR_3->ext[0] = VAR_10[0];
  VAR_3->ext[1] = VAR_10[1];

 } else {
  struct kevent_qos_s VAR_11;

  FUNC_2(VAR_3, sizeof (*VAR_3));

  VAR_6 = sizeof (struct kevent_qos_s);
  VAR_7 = FUNC_3(*VAR_2, (caddr_t)&VAR_11, VAR_6);
  if (VAR_7)
   return VAR_7;
  VAR_3->ident = VAR_11.ident;
  VAR_3->filter = VAR_11.filter;
  VAR_3->flags = VAR_11.flags;
  VAR_3->qos = VAR_11.qos;

  VAR_3->udata = VAR_11.udata;
  VAR_3->fflags = VAR_11.fflags;
  VAR_3->data = VAR_11.data;
  VAR_3->ext[0] = VAR_11.ext[0];
  VAR_3->ext[1] = VAR_11.ext[1];
  VAR_3->ext[2] = VAR_11.ext[2];
  VAR_3->ext[3] = VAR_11.ext[3];
 }
 if (!VAR_7)
  *VAR_2 += VAR_6;
 return (VAR_7);
}
