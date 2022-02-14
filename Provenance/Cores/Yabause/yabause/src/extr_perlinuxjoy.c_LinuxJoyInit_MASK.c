
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct js_event {int type; size_t number; int value; } ;
struct TYPE_3__ {int fd; int axiscount; int* axis; } ;
typedef TYPE_1__ perlinuxjoy_struct ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int* FUNC_0 (int) ;
 int FUNC_1 (char const*,int) ;
 size_t FUNC_2 (int,struct js_event*,int) ;

__attribute__((used)) static void FUNC_3(perlinuxjoy_struct * VAR_5, const char * VAR_6)
{
   int VAR_7;
   int VAR_8;
   int VAR_9[VAR_2];
   struct js_event VAR_10;
   size_t VAR_11;

   VAR_5->fd = FUNC_1(VAR_6, VAR_4 | VAR_3);

   if (VAR_5->fd == -1) return;

   VAR_5->axiscount = 0;

   while ((VAR_11 = FUNC_2(VAR_5->fd, &VAR_10, sizeof(struct js_event))) > 0)
   {
      if (VAR_10.type == (VAR_0 | VAR_1))
      {
         VAR_9[VAR_10.number] = VAR_10.value;
         if (VAR_10.number + 1 > VAR_5->axiscount)
         {
            VAR_5->axiscount = VAR_10.number + 1;
         }
      }
   }

   if (VAR_5->axiscount > VAR_2) VAR_5->axiscount = VAR_2;

   VAR_5->axis = FUNC_0(sizeof(int) * VAR_5->axiscount);
   for(VAR_7 = 0;VAR_7 < VAR_5->axiscount;VAR_7++)
   {
      VAR_5->axis[VAR_7] = VAR_9[VAR_7];
   }
}
