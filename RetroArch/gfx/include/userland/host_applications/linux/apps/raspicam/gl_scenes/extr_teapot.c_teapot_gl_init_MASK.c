
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int height; int width; TYPE_1__* scene_state; } ;
struct TYPE_8__ {int model; int screen_height; int screen_width; } ;
typedef TYPE_1__ TEAPOT_STATE_T ;
typedef TYPE_2__ RASPITEX_STATE ;


 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char const*,int *) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (char*,char const*) ;

__attribute__((used)) static int FUNC_6(RASPITEX_STATE *VAR_0)
{
   const char *VAR_1 = "/opt/vc/src/hello_pi/hello_teapot/teapot.obj.dat";
   TEAPOT_STATE_T *VAR_2 = ((void*)0);
   int VAR_3 = 0;


   VAR_2 = FUNC_0(1, sizeof(TEAPOT_STATE_T));
   VAR_0->scene_state = VAR_2;
   VAR_2->screen_width = VAR_0->width;
   VAR_2->screen_height = VAR_0->height;

   VAR_3 = FUNC_4(VAR_0);
   if (VAR_3 != 0)
      goto end;


   FUNC_2(VAR_2);


   FUNC_1(VAR_2);
   VAR_2->model = FUNC_3(VAR_1, ((void*)0));

   if (! VAR_2->model)
   {
      FUNC_5("Failed to load model from %s\n", VAR_1);
      VAR_3 = -1;
   }

end:
   return VAR_3;
}
