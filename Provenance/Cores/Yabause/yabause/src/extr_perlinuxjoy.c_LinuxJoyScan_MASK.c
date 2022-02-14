
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct js_event {scalar_t__ type; size_t number; int value; } ;
struct TYPE_3__ {int fd; size_t axiscount; int* axis; } ;
typedef TYPE_1__ perlinuxjoy_struct ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct js_event) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 size_t FUNC_2 (int,struct js_event*,int) ;

__attribute__((used)) static int FUNC_3(perlinuxjoy_struct * VAR_2)
{
   struct js_event VAR_3;
   size_t VAR_4;

   if (VAR_2->fd == -1) return 0;

   if ((VAR_4 = FUNC_2(VAR_2->fd, &VAR_3, sizeof(struct js_event))) <= 0) return 0;

   if (VAR_3.type == VAR_0)
   {
      int VAR_5;
      int VAR_6;
      u8 VAR_7 = VAR_3.number;

      if (VAR_7 >= VAR_2->axiscount) return 0;

      VAR_5 = VAR_2->axis[VAR_7];
      VAR_6 = FUNC_1(VAR_5 - VAR_3.value);
      if (VAR_6 < VAR_1) return 0;
      else if (VAR_3.value < VAR_5) VAR_3.value = -1;
      else VAR_3.value = 1;
   }

   return FUNC_0(VAR_3);
}
