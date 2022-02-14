
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (char*,int) ;
 scalar_t__ FUNC_3 (void*,char*) ;

__attribute__((used)) static void FUNC_4(void)
{
   void *VAR_4;





   VAR_4 = FUNC_2(((void*)0), VAR_0);
   VAR_3 = (void * )FUNC_3(VAR_4, "eglIntOpenMAXILDoneMarker");
   if (VAR_3 == ((void*)0))
   {
      FUNC_1(VAR_4);

      VAR_4 = FUNC_2("libEGL.so", VAR_1 | VAR_2);
      FUNC_0(VAR_4 != ((void*)0));
      VAR_3 = (void * )FUNC_3(VAR_4, "eglIntOpenMAXILDoneMarker");
      FUNC_0(VAR_3 != ((void*)0));
   }
}
