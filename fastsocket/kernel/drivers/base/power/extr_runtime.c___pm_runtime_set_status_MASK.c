
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int runtime_status; int lock; scalar_t__ runtime_error; int child_count; int ignore_children; int disable_depth; } ;
struct device {TYPE_1__ power; struct device* parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long) ;

int FUNC_7(struct device *VAR_6, unsigned int VAR_7)
{
 struct device *VAR_8 = VAR_6->parent;
 unsigned long VAR_9;
 bool VAR_10 = 0;
 int VAR_11 = 0;

 if (VAR_7 != VAR_3 && VAR_7 != VAR_4)
  return -VAR_2;

 FUNC_3(&VAR_6->power.lock, VAR_9);

 if (!VAR_6->power.runtime_error && !VAR_6->power.disable_depth) {
  VAR_11 = -VAR_0;
  goto out;
 }

 if (VAR_6->power.runtime_status == VAR_7)
  goto out_set;

 if (VAR_7 == VAR_4) {

  if (VAR_8) {
   FUNC_0(&VAR_8->power.child_count, -1, 0);
   VAR_10 = !VAR_8->power.ignore_children;
  }
  goto out_set;
 }

 if (VAR_8) {
  FUNC_4(&VAR_8->power.lock, VAR_5);






  if (!VAR_8->power.disable_depth
      && !VAR_8->power.ignore_children
      && VAR_8->power.runtime_status != VAR_3) {
   VAR_11 = -VAR_1;
  } else {
   if (VAR_6->power.runtime_status == VAR_4)
    FUNC_1(&VAR_8->power.child_count);
  }

  FUNC_5(&VAR_8->power.lock);

  if (VAR_11)
   goto out;
 }

 out_set:
 VAR_6->power.runtime_status = VAR_7;
 VAR_6->power.runtime_error = 0;
 out:
 FUNC_6(&VAR_6->power.lock, VAR_9);

 if (VAR_10)
  FUNC_2(VAR_8);

 return VAR_11;
}
