
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int exclude_user; int exclude_kernel; int exclude_hv; } ;
struct perf_event {TYPE_1__ attr; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct perf_event **VAR_3, unsigned int VAR_4[],
     int VAR_5, int VAR_6)
{
 int VAR_7 = 0, VAR_8 = 0, VAR_9 = 0;
 int VAR_10, VAR_11, VAR_12;
 struct perf_event *VAR_13;

 VAR_11 = VAR_5 + VAR_6;
 if (VAR_11 <= 1)
  return 0;

 VAR_12 = 1;
 for (VAR_10 = 0; VAR_10 < VAR_11; ++VAR_10) {
  if (VAR_4[VAR_10] & VAR_1) {
   VAR_4[VAR_10] &= ~VAR_2;
   continue;
  }
  VAR_13 = VAR_3[VAR_10];
  if (VAR_12) {
   VAR_7 = VAR_13->attr.exclude_user;
   VAR_8 = VAR_13->attr.exclude_kernel;
   VAR_9 = VAR_13->attr.exclude_hv;
   VAR_12 = 0;
  } else if (VAR_13->attr.exclude_user != VAR_7 ||
      VAR_13->attr.exclude_kernel != VAR_8 ||
      VAR_13->attr.exclude_hv != VAR_9) {
   return -VAR_0;
  }
 }

 if (VAR_7 || VAR_8 || VAR_9)
  for (VAR_10 = 0; VAR_10 < VAR_11; ++VAR_10)
   if (VAR_4[VAR_10] & VAR_1)
    VAR_4[VAR_10] |= VAR_2;

 return 0;
}
