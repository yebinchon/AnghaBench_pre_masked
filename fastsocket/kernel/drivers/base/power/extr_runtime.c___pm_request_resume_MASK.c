
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ runtime_status; scalar_t__ disable_depth; int request_pending; int work; void* request; scalar_t__ runtime_error; } ;
struct device {TYPE_1__ power; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct device*) ;
 int VAR_7 ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_8)
{
 int VAR_9 = 0;

 if (VAR_8->power.runtime_error)
  return -VAR_2;

 if (VAR_8->power.runtime_status == VAR_3)
  VAR_9 = 1;
 else if (VAR_8->power.runtime_status == VAR_6)
  VAR_9 = -VAR_1;
 else if (VAR_8->power.disable_depth > 0)
  VAR_9 = -VAR_0;
 if (VAR_9 < 0)
  return VAR_9;

 FUNC_0(VAR_8);

 if (VAR_8->power.request_pending) {

  VAR_8->power.request = VAR_9 ? VAR_4 : VAR_5;
  return VAR_9;
 } else if (VAR_9) {
  return VAR_9;
 }

 VAR_8->power.request = VAR_5;
 VAR_8->power.request_pending = 1;
 FUNC_1(VAR_7, &VAR_8->power.work);

 return VAR_9;
}
