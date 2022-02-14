
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int XIM ;
typedef int XIC ;
typedef int Window ;
typedef int Display ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int *,int *,int *) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int FUNC_4 (int *,int *) ;

bool FUNC_5(Display *VAR_5, Window VAR_6, XIM *VAR_7, XIC *VAR_8)
{
   FUNC_4(VAR_7, VAR_8);

   VAR_4 = 1;
   *VAR_7 = FUNC_2(VAR_5, ((void*)0), ((void*)0), ((void*)0));

   if (!*VAR_7)
   {
      FUNC_0("[X11]: Failed to open input method.\n");
      return 0;
   }

   *VAR_8 = FUNC_1(*VAR_7, VAR_3,
         VAR_0 | VAR_1, VAR_2, VAR_6, ((void*)0));

   if (!*VAR_8)
   {
      FUNC_0("[X11]: Failed to create input context.\n");
      return 0;
   }

   FUNC_3(*VAR_8);
   return 1;
}
