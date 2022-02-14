
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vnode_t ;


 int FUNC_0 (int ,long*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static intptr_t
FUNC_4(vnode_t VAR_0)
{
 if (FUNC_2(VAR_0)) {







  {
   return (intptr_t)0;
  }
 } else if (FUNC_3(VAR_0)) {
  return (intptr_t)1;
 } else {
  FUNC_1("Should never have an EVFILT_READ except for reg or fifo.");
  return 0;
 }
}
