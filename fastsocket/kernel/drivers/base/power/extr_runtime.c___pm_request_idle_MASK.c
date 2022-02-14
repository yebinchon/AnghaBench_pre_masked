
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ disable_depth; scalar_t__ runtime_status; int request_pending; scalar_t__ request; int work; int usage_count; scalar_t__ runtime_error; } ;
struct device {TYPE_1__ power; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct device*) ;
 int VAR_7 ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_8)
{
 int VAR_9 = 0;

 if (VAR_8->power.runtime_error)
  VAR_9 = -VAR_2;
 else if (FUNC_0(&VAR_8->power.usage_count) > 0
     || VAR_8->power.disable_depth > 0
     || VAR_8->power.runtime_status == VAR_5
     || VAR_8->power.runtime_status == VAR_6)
  VAR_9 = -VAR_0;
 else if (!FUNC_1(VAR_8))
  VAR_9 = -VAR_1;
 if (VAR_9)
  return VAR_9;

 if (VAR_8->power.request_pending) {

  if (VAR_8->power.request == VAR_4)
   VAR_8->power.request = VAR_3;
  else if (VAR_8->power.request != VAR_3)
   VAR_9 = -VAR_0;
  return VAR_9;
 }

 VAR_8->power.request = VAR_3;
 VAR_8->power.request_pending = 1;
 FUNC_2(VAR_7, &VAR_8->power.work);

 return VAR_9;
}
