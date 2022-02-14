
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int texture; int context; int surface; int display; } ;
typedef TYPE_1__ VIDTEX_T ;
typedef int EGLint ;
typedef int EGLNativeWindowType ;
typedef int EGLConfig ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,int const*,int *,int,int*) ;
 int FUNC_1 (int ,int ,int *,int *) ;
 int FUNC_2 (int ,int ,int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_11(VIDTEX_T *VAR_11, EGLNativeWindowType VAR_12)
{
   const EGLint VAR_13[] =
   {
      VAR_5, 8,
      VAR_3, 8,
      VAR_0, 8,
      VAR_2, 0,
      VAR_4
   };
   EGLConfig VAR_14;
   EGLint VAR_15;

   VAR_11->display = FUNC_3(VAR_1);
   FUNC_4(VAR_11->display, 0, 0);

   FUNC_0(VAR_11->display, VAR_13, &VAR_14, 1, &VAR_15);

   VAR_11->surface = FUNC_2(VAR_11->display, VAR_14, VAR_12, ((void*)0));
   VAR_11->context = FUNC_1(VAR_11->display, VAR_14, ((void*)0), ((void*)0));

   if (!FUNC_5(VAR_11->display, VAR_11->surface, VAR_11->surface, VAR_11->context))
   {
      FUNC_10(VAR_11);
      return -1;
   }

   FUNC_8(1, &VAR_11->texture);

   FUNC_9(VAR_7);
   FUNC_6(VAR_6);
   FUNC_6(VAR_8);
   FUNC_7(VAR_10);
   FUNC_6(VAR_9);

   return 0;
}
