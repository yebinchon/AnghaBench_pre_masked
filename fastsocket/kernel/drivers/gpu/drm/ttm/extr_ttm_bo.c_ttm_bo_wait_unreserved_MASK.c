
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_buffer_object {int event_queue; } ;


 int FUNC_0 (struct ttm_buffer_object*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(struct ttm_buffer_object *VAR_0,
      bool VAR_1)
{
 if (VAR_1) {
  return FUNC_2(VAR_0->event_queue,
            !FUNC_0(VAR_0));
 } else {
  FUNC_1(VAR_0->event_queue, !FUNC_0(VAR_0));
  return 0;
 }
}
