
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct js_event {int dummy; } ;
struct TYPE_3__ {int fd; } ;
typedef TYPE_1__ perlinuxjoy_struct ;


 size_t FUNC_0 (int,struct js_event*,int) ;

__attribute__((used)) static void FUNC_1(perlinuxjoy_struct * VAR_0)
{
   struct js_event VAR_1;
   size_t VAR_2;

   if (VAR_0->fd == -1) return;

   while ((VAR_2 = FUNC_0(VAR_0->fd, &VAR_1, sizeof(struct js_event))) > 0);
}
