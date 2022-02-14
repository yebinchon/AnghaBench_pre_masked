
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ab3100 {int startup_events; int startup_events_read; } ;


 int VAR_0 ;

int FUNC_0(struct ab3100 *VAR_1,
          u32 *VAR_2)
{
 if (!VAR_1->startup_events_read)
  return -VAR_0;
 *VAR_2 = VAR_1->startup_events;
 return 0;
}
