
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kevent_internal_s {int * ext; int data; int fflags; int udata; int flags; int filter; int ident; } ;


 int FUNC_0 (char*,size_t,char*,int ,int ,int ,int ,int ,int ,int ,int ) ;

char *
FUNC_1(struct kevent_internal_s *VAR_0, char *VAR_1, size_t VAR_2)
{
 FUNC_0(VAR_1, VAR_2,
     "kevent="
     "{.ident=%#llx, .filter=%d, .flags=%#x, .udata=%#llx, .fflags=%#x, .data=%#llx, .ext[0]=%#llx, .ext[1]=%#llx}",
     VAR_0->ident,
     VAR_0->filter,
     VAR_0->flags,
     VAR_0->udata,
     VAR_0->fflags,
     VAR_0->data,
     VAR_0->ext[0],
     VAR_0->ext[1] );

 return (VAR_1);
}
