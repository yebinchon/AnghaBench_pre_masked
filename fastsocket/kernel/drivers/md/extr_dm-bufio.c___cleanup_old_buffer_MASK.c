
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_buffer {unsigned long last_accessed; scalar_t__ hold_count; int state; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dm_buffer*) ;
 int FUNC_1 (struct dm_buffer*) ;
 int FUNC_2 (struct dm_buffer*) ;
 unsigned long VAR_4 ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct dm_buffer *VAR_5, gfp_t VAR_6,
    unsigned long VAR_7)
{
 if (VAR_4 - VAR_5->last_accessed < VAR_7)
  return 1;

 if (!(VAR_6 & VAR_3)) {
  if (FUNC_3(VAR_1, &VAR_5->state) ||
      FUNC_3(VAR_2, &VAR_5->state) ||
      FUNC_3(VAR_0, &VAR_5->state))
   return 1;
 }

 if (VAR_5->hold_count)
  return 1;

 FUNC_1(VAR_5);
 FUNC_2(VAR_5);
 FUNC_0(VAR_5);

 return 0;
}
