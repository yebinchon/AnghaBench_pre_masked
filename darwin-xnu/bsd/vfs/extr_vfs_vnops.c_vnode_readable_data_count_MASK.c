
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_3__* vnode_t ;
typedef scalar_t__ off_t ;
typedef int int64_t ;
struct TYPE_9__ {TYPE_1__* vu_ubcinfo; } ;
struct TYPE_10__ {TYPE_2__ v_un; } ;
struct TYPE_8__ {scalar_t__ ui_size; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_3__*,int*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static int64_t
FUNC_4(vnode_t VAR_2, off_t VAR_3, int VAR_4)
{
 if (FUNC_2(VAR_2)) {







  {
   return 0;
  }
 } else if (FUNC_3(VAR_2)) {
  if (VAR_4) {
   return 1;
  }

  off_t VAR_5;
  VAR_5 = VAR_2->v_un.vu_ubcinfo->ui_size - VAR_3;
  if (VAR_5 > VAR_0) {
   return VAR_0;
  } else if (VAR_5 < VAR_1) {
   return VAR_1;
  } else {
   return (int64_t)VAR_5;
  }
 } else {
  FUNC_1("Should never have an EVFILT_READ except for reg or fifo.");
  return 0;
 }
}
