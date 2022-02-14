
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct pulse_elem {scalar_t__ ts; } ;
struct pri_detector {int count; scalar_t__ last_ts; scalar_t__ window_size; } ;


 int FUNC_0 (struct pri_detector*) ;
 struct pulse_elem* FUNC_1 (struct pri_detector*) ;

__attribute__((used)) static void FUNC_2(struct pri_detector *VAR_0)
{
 u64 VAR_1;
 struct pulse_elem *VAR_2;


 if (VAR_0->count < 2)
  return;

 if (VAR_0->last_ts <= VAR_0->window_size)
  return;

 VAR_1 = VAR_0->last_ts - VAR_0->window_size;
 while ((VAR_2 = FUNC_1(VAR_0)) != ((void*)0)) {
  if (VAR_2->ts >= VAR_1)
   return;
  FUNC_0(VAR_0);
 }
}
