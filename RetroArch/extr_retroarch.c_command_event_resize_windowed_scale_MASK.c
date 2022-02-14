
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int video_fullscreen; } ;
struct TYPE_6__ {int video_scale; } ;
struct TYPE_8__ {TYPE_2__ bools; TYPE_1__ floats; } ;
typedef TYPE_3__ settings_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (TYPE_3__*,int ,float) ;
 TYPE_3__* VAR_2 ;
 int FUNC_2 (int ,unsigned int*) ;
 unsigned int VAR_3 ;

__attribute__((used)) static bool FUNC_3(void)
{
   unsigned VAR_4 = 0;
   settings_t *VAR_5 = VAR_2;
   unsigned VAR_6 = VAR_3;

   if (VAR_6 == 0)
      return 0;

   FUNC_1(VAR_5, VAR_5->floats.video_scale, (float)VAR_6);

   if (!VAR_5->bools.video_fullscreen)
      FUNC_0(VAR_0, ((void*)0));

   FUNC_2(VAR_1, &VAR_4);

   return 1;
}
