
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ runtime_status; scalar_t__ disable_depth; int request_pending; scalar_t__ request; int work; int usage_count; scalar_t__ runtime_error; } ;
struct device {TYPE_1__ power; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int VAR_9 ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_10)
{
 int VAR_11 = 0;

 if (VAR_10->power.runtime_error)
  return -VAR_3;

 if (VAR_10->power.runtime_status == VAR_7)
  VAR_11 = 1;
 else if (FUNC_0(&VAR_10->power.usage_count) > 0
     || VAR_10->power.disable_depth > 0)
  VAR_11 = -VAR_0;
 else if (VAR_10->power.runtime_status == VAR_8)
  VAR_11 = -VAR_2;
 else if (!FUNC_1(VAR_10))
  VAR_11 = -VAR_1;
 if (VAR_11 < 0)
  return VAR_11;

 FUNC_2(VAR_10);

 if (VAR_10->power.request_pending) {




  if (VAR_10->power.request == VAR_5)
   VAR_11 = -VAR_0;
  else if (VAR_10->power.request != VAR_6)
   VAR_10->power.request = VAR_11 ?
      VAR_4 : VAR_6;
  return VAR_11;
 } else if (VAR_11) {
  return VAR_11;
 }

 VAR_10->power.request = VAR_6;
 VAR_10->power.request_pending = 1;
 FUNC_3(VAR_9, &VAR_10->power.work);

 return 0;
}
