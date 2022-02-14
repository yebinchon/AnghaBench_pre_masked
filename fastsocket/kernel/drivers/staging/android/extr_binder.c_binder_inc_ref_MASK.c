
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct binder_ref {scalar_t__ strong; scalar_t__ weak; int node; } ;


 int FUNC_0 (int ,int,int,struct list_head*) ;

__attribute__((used)) static int FUNC_1(struct binder_ref *VAR_0, int VAR_1,
     struct list_head *VAR_2)
{
 int VAR_3;
 if (VAR_1) {
  if (VAR_0->strong == 0) {
   VAR_3 = FUNC_0(VAR_0->node, 1, 1, VAR_2);
   if (VAR_3)
    return VAR_3;
  }
  VAR_0->strong++;
 } else {
  if (VAR_0->weak == 0) {
   VAR_3 = FUNC_0(VAR_0->node, 0, 1, VAR_2);
   if (VAR_3)
    return VAR_3;
  }
  VAR_0->weak++;
 }
 return 0;
}
