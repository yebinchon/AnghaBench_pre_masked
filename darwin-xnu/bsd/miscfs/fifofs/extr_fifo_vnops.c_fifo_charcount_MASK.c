
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {TYPE_1__* v_fifoinfo; } ;
struct TYPE_2__ {int fi_readsock; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,void*) ;

int
FUNC_1(struct vnode *VAR_1, int *VAR_2)
{
 int VAR_3;
 int VAR_4 = FUNC_0(VAR_1->v_fifoinfo->fi_readsock, VAR_0, (void*)&VAR_3);
 if (VAR_4 == 0) {
  *VAR_2 = VAR_3;
 }
 return VAR_4;
}
