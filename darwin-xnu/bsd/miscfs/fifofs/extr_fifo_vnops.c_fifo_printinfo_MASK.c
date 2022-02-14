
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {struct fifoinfo* v_fifoinfo; } ;
struct fifoinfo {int fi_writers; int fi_readers; } ;


 int FUNC_0 (char*,int ,int ) ;

void
FUNC_1(struct vnode *VAR_0)
{
 struct fifoinfo *VAR_1 = VAR_0->v_fifoinfo;

 FUNC_0(", fifo with %ld readers and %ld writers",
  VAR_1->fi_readers, VAR_1->fi_writers);
}
