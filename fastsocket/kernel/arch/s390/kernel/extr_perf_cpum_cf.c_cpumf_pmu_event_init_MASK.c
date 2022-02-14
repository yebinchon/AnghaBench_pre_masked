
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
struct perf_event {int (* destroy ) (struct perf_event*) ;TYPE_1__ attr; } ;


 int VAR_0 ;



 int FUNC_0 (struct perf_event*) ;
 int FUNC_1 (struct perf_event*) ;
 int FUNC_2 (struct perf_event*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct perf_event *VAR_1)
{
 int VAR_2;

 switch (VAR_1->attr.type) {
 case 130:
 case 129:
 case 128:




  if (FUNC_1(VAR_1))
   return -VAR_0;
  VAR_2 = FUNC_0(VAR_1);
  break;
 default:
  return -VAR_0;
 }

 if (FUNC_3(VAR_2) && VAR_1->destroy)
  VAR_1->destroy(VAR_1);

 return VAR_2;
}
