
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int exclude_user; int exclude_kernel; int exclude_hv; } ;
struct perf_event {TYPE_1__ attr; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct perf_event **VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4 = 0, VAR_5 = 0, VAR_6 = 0;
 struct perf_event *VAR_7;
 int VAR_8, VAR_9, VAR_10;

 VAR_9 = VAR_2 + VAR_3;
 if (VAR_9 <= 1)
  return 0;

 VAR_10 = 1;
 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
  VAR_7 = VAR_1[VAR_8];
  if (VAR_10) {
   VAR_4 = VAR_7->attr.exclude_user;
   VAR_5 = VAR_7->attr.exclude_kernel;
   VAR_6 = VAR_7->attr.exclude_hv;
   VAR_10 = 0;
  } else if (VAR_7->attr.exclude_user != VAR_4 ||
      VAR_7->attr.exclude_kernel != VAR_5 ||
      VAR_7->attr.exclude_hv != VAR_6) {
   return -VAR_0;
  }
 }

 return 0;
}
