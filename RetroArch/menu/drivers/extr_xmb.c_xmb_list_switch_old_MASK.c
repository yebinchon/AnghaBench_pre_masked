
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {float alpha; float label_alpha; float x; } ;
typedef TYPE_1__ xmb_node_t ;
struct TYPE_7__ {int icon_spacing_horizontal; } ;
typedef TYPE_2__ xmb_handle_t ;
typedef int file_list_t ;


 size_t FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,unsigned int) ;
 int FUNC_2 (int *,unsigned int*) ;
 int FUNC_3 (TYPE_2__*,unsigned int,size_t,unsigned int,unsigned int*,unsigned int*) ;
 int FUNC_4 (TYPE_1__*,uintptr_t,float,float) ;

__attribute__((used)) static void FUNC_5(xmb_handle_t *VAR_0,
      file_list_t *VAR_1, int VAR_2, size_t VAR_3)
{
   unsigned VAR_4, VAR_5;
   size_t VAR_6 = FUNC_0(VAR_1);
   float VAR_7 = -VAR_0->icon_spacing_horizontal * VAR_2;
   float VAR_8 = 0;
   unsigned VAR_9 = 0;
   unsigned VAR_10 = (unsigned)(VAR_6 > 0 ? VAR_6 - 1 : 0);

   FUNC_2(((void*)0), &VAR_5);
   FUNC_3(VAR_0, VAR_5, VAR_6,
         (unsigned)VAR_3, &VAR_9, &VAR_10);

   for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++)
   {
      xmb_node_t *VAR_11 = (xmb_node_t*)
         FUNC_1(VAR_1, VAR_4);

      if (!VAR_11)
         continue;

      if (VAR_4 >= VAR_9 && VAR_4 <= VAR_10)
         FUNC_4(VAR_11, (uintptr_t)VAR_1, VAR_8, VAR_7);
      else
      {
         VAR_11->alpha = VAR_11->label_alpha = VAR_8;
         VAR_11->x = VAR_7;
      }
   }
}
