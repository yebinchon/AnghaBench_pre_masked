
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct plug_handle {int unplug_work; int unplug_timer; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(struct plug_handle *VAR_0)
{
 FUNC_1(&VAR_0->unplug_timer);
 FUNC_0(&VAR_0->unplug_work);
}
