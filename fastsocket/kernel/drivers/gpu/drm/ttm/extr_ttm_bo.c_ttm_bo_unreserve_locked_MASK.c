
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_buffer_object {int event_queue; int reserved; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct ttm_buffer_object*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct ttm_buffer_object *VAR_0)
{
 FUNC_1(VAR_0);
 FUNC_0(&VAR_0->reserved, 0);
 FUNC_2(&VAR_0->event_queue);
}
