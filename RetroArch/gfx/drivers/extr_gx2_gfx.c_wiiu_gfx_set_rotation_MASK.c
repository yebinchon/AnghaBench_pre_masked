
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int rotation; int should_resize; } ;
typedef TYPE_1__ wiiu_video_t ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0,
                                  unsigned VAR_1)
{
   wiiu_video_t *VAR_2 = (wiiu_video_t *) VAR_0;

   if (VAR_2)
   {
      VAR_2->rotation = VAR_1;
      FUNC_0(VAR_2);
      VAR_2->should_resize = 1;
   }
}
