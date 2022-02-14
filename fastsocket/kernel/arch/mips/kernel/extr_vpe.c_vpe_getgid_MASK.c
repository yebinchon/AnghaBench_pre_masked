
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpe {int gid; } ;


 struct vpe* FUNC_0 (int) ;

int FUNC_1(int VAR_0)
{
 struct vpe *VAR_1;

 if ((VAR_1 = FUNC_0(VAR_0)) == ((void*)0))
  return -1;

 return VAR_1->gid;
}
