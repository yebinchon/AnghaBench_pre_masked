
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bnx2x {TYPE_1__* vfdb; } ;
struct TYPE_2__ {struct TYPE_2__* vfs; struct TYPE_2__* vfqs; } ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(struct bnx2x *VAR_0)
{
 if (VAR_0->vfdb) {
  FUNC_0(VAR_0->vfdb->vfqs);
  FUNC_0(VAR_0->vfdb->vfs);
  FUNC_0(VAR_0->vfdb);
 }
 VAR_0->vfdb = ((void*)0);
}
