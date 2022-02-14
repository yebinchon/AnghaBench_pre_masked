
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 void* FUNC_1 (char*,int ) ;
 void* FUNC_2 (void*,char*) ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int FUNC_3 (int ) ;

int FUNC_4()
{
   void * VAR_10;
   char *VAR_11;

   VAR_10 = FUNC_1("libEGL.so",VAR_0);
   if( VAR_10 == ((void*)0) )
   {
      FUNC_3(FUNC_0());
      return -1;
   }

   VAR_2 = FUNC_2(VAR_10, "eglGetCurrentDisplay");
   if( VAR_2 == ((void*)0)){ FUNC_3(FUNC_0()); return -1; }

   VAR_3 = FUNC_2(VAR_10, "eglGetCurrentSurface");
   if( VAR_3 == ((void*)0)){ FUNC_3(FUNC_0()); return -1; }

   VAR_1 = FUNC_2(VAR_10, "eglGetCurrentContext");
   if( VAR_1 == ((void*)0)){ FUNC_3(FUNC_0()); return -1; }

   VAR_7 = FUNC_2(VAR_10, "eglQuerySurface");
   if( VAR_7 == ((void*)0)){ FUNC_3(FUNC_0()); return -1; }

   VAR_9 = FUNC_2(VAR_10, "eglSwapInterval");
   if( VAR_9 == ((void*)0)){ FUNC_3(FUNC_0()); return -1; }

   VAR_5 = FUNC_2(VAR_10, "eglMakeCurrent");
   if( VAR_5 == ((void*)0)){ FUNC_3(FUNC_0()); return -1; }

   VAR_8 = FUNC_2(VAR_10, "eglSwapBuffers");
   if( VAR_8 == ((void*)0)){ FUNC_3(FUNC_0()); return -1; }

   VAR_6 = FUNC_2(VAR_10, "eglQueryString");
   if( VAR_6 == ((void*)0)){ FUNC_3(FUNC_0()); return -1; }

   VAR_4 = FUNC_2(VAR_10, "eglGetError");
   if( VAR_4 == ((void*)0)){ FUNC_3(FUNC_0()); return -1; }

   return 0;
}
