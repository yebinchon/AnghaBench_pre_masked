
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {struct ubc_info* v_ubcinfo; } ;
struct TYPE_2__ {int tv_nsec; int tv_sec; } ;
struct ubc_info {TYPE_1__ cs_mtime; } ;
struct timespec {int tv_nsec; int tv_sec; } ;


 int FUNC_0 (struct vnode*) ;

void
FUNC_1(
 struct vnode *VAR_0,
 struct timespec *VAR_1)
{
 struct ubc_info *VAR_2;

 if (! FUNC_0(VAR_0)) {
  VAR_1->tv_sec = 0;
  VAR_1->tv_nsec = 0;
  return;
 }

 VAR_2 = VAR_0->v_ubcinfo;
 VAR_1->tv_sec = VAR_2->cs_mtime.tv_sec;
 VAR_1->tv_nsec = VAR_2->cs_mtime.tv_nsec;
}
