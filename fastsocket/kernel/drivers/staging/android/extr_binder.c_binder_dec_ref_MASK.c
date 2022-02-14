
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct binder_ref {scalar_t__ strong; scalar_t__ weak; int desc; int debug_id; TYPE_1__* proc; int node; } ;
struct TYPE_2__ {int pid; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (struct binder_ref*) ;
 int FUNC_2 (char*,int ,int ,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct binder_ref *VAR_1, int VAR_2)
{
 if (VAR_2) {
  if (VAR_1->strong == 0) {
   FUNC_2("binder: %d invalid dec strong, "
       "ref %d desc %d s %d w %d\n",
       VAR_1->proc->pid, VAR_1->debug_id,
       VAR_1->desc, VAR_1->strong, VAR_1->weak);
   return -VAR_0;
  }
  VAR_1->strong--;
  if (VAR_1->strong == 0) {
   int VAR_3;
   VAR_3 = FUNC_0(VAR_1->node, VAR_2, 1);
   if (VAR_3)
    return VAR_3;
  }
 } else {
  if (VAR_1->weak == 0) {
   FUNC_2("binder: %d invalid dec weak, "
       "ref %d desc %d s %d w %d\n",
       VAR_1->proc->pid, VAR_1->debug_id,
       VAR_1->desc, VAR_1->strong, VAR_1->weak);
   return -VAR_0;
  }
  VAR_1->weak--;
 }
 if (VAR_1->strong == 0 && VAR_1->weak == 0)
  FUNC_1(VAR_1);
 return 0;
}
