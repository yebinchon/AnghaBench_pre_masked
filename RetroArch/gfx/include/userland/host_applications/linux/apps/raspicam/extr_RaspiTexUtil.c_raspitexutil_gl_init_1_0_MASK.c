
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int* egl_config_attribs; } ;
typedef TYPE_1__ RASPITEX_STATE ;
typedef int EGLint ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int const*,int const*) ;

int FUNC_4(RASPITEX_STATE *VAR_10)
{
   int VAR_11;
   const EGLint* VAR_12 = VAR_10->egl_config_attribs;

   const EGLint VAR_13[] =
   {
      VAR_7, 8,
      VAR_4, 8,
      VAR_1, 8,
      VAR_0, 8,
      VAR_3, 16,
      VAR_8, VAR_6,
      VAR_5
   };

   const EGLint VAR_14[] =
   {
      VAR_2, 1,
      VAR_5
   };

   if (! VAR_12)
      VAR_12 = VAR_13;

   VAR_11 = FUNC_3(VAR_10, VAR_12, VAR_14);
   if (VAR_11 != 0)
      goto end;

   FUNC_0(FUNC_1(VAR_9));
   VAR_11 = FUNC_2(VAR_10);

end:
   return VAR_11;
}
