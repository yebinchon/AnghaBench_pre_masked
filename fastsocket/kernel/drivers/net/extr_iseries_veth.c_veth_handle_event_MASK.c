
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct veth_lpevent {int dummy; } ;
struct HvLpEvent {int dummy; } ;


 scalar_t__ FUNC_0 (struct HvLpEvent*) ;
 int FUNC_1 (struct veth_lpevent*) ;
 int FUNC_2 (struct veth_lpevent*) ;

__attribute__((used)) static void FUNC_3(struct HvLpEvent *VAR_0)
{
 struct veth_lpevent *VAR_1 = (struct veth_lpevent *)VAR_0;

 if (FUNC_0(VAR_0))
  FUNC_1(VAR_1);
 else
  FUNC_2(VAR_1);
}
