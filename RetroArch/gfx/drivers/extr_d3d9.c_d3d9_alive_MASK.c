
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int quitting; int should_resize; } ;
typedef TYPE_1__ d3d9_video_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,unsigned int,unsigned int) ;
 int FUNC_2 (unsigned int*,unsigned int*) ;
 int FUNC_3 (unsigned int*,unsigned int*) ;
 int FUNC_4 (int*,int*,unsigned int*,unsigned int*) ;

__attribute__((used)) static bool FUNC_5(void *VAR_0)
{
   unsigned VAR_1 = 0;
   unsigned VAR_2 = 0;
   bool VAR_3 = 0;
   bool VAR_4 = 0;
   bool VAR_5 = 0;
   d3d9_video_t *VAR_6 = (d3d9_video_t*)VAR_0;


   FUNC_2(&VAR_1, &VAR_2);


   FUNC_4(&VAR_4, &VAR_5, &VAR_1, &VAR_2);


   if (VAR_4)
      VAR_6->quitting = VAR_4;

   if (VAR_5)
   {
      VAR_6->should_resize = 1;
      FUNC_1(VAR_6, VAR_1, VAR_2);
      FUNC_0(VAR_6);
   }

   VAR_3 = !VAR_4;

   if ( VAR_1 != 0 &&
         VAR_2 != 0)
      FUNC_3(&VAR_1, &VAR_2);

   return VAR_3;
}
