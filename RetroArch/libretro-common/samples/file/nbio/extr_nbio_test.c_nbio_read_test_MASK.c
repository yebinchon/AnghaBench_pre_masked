
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nbio_t {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*,char*,int) ;
 int FUNC_1 (struct nbio_t*) ;
 int FUNC_2 (struct nbio_t*) ;
 void* FUNC_3 (struct nbio_t*,size_t*) ;
 int FUNC_4 (struct nbio_t*) ;
 struct nbio_t* FUNC_5 (char*,int ) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(void)
{
   size_t VAR_1;
   bool VAR_2 = 0;
   struct nbio_t* VAR_3 = FUNC_5("test.bin", VAR_0);
   void* VAR_4 = FUNC_3(VAR_3, &VAR_1);
   if (!VAR_3)
      FUNC_6("[ERROR]: nbio_open failed (2)");

   if (VAR_1 != 1024*1024)
      FUNC_6("[ERROR]: wrong size (2)");
   if (VAR_4)
      FUNC_6("[SUCCESS]: Read pointer is available before iterating.");

   FUNC_1(VAR_3);

   while (!FUNC_4(VAR_3))
      VAR_2=1;

   if (!VAR_2)
      FUNC_6("[SUCCESS]: Read finished immediately.");

   VAR_4 = FUNC_3(VAR_3, &VAR_1);

   if (VAR_1 != 1024*1024)
      FUNC_6("[ERROR]: wrong size (3)");
   if (*(char*)VAR_4 != 0x42 || FUNC_0(VAR_4, (char*)VAR_4+1, 1024*1024-1))
      FUNC_6("[ERROR]: wrong data");

   FUNC_2(VAR_3);
}
