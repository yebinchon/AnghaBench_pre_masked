
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 () ;

__attribute__((used)) static bool FUNC_3(void *VAR_1)
{
   (void )VAR_1;
   int VAR_2;

   if(!FUNC_2())
   {
      FUNC_0("Failed to initialize HID driver.\n");
      return 0;
   }

   FUNC_1();
   VAR_0 = 1;

   return 1;
}
