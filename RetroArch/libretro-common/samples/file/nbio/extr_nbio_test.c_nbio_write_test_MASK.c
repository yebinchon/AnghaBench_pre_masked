
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nbio_t {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (void*,int,int) ;
 int FUNC_1 (struct nbio_t*) ;
 int FUNC_2 (struct nbio_t*) ;
 void* FUNC_3 (struct nbio_t*,size_t*) ;
 int FUNC_4 (struct nbio_t*) ;
 struct nbio_t* FUNC_5 (char*,int ) ;
 int FUNC_6 (struct nbio_t*,int) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(void)
{
   size_t VAR_1;
   bool VAR_2 = 0;
   void* VAR_3 = ((void*)0);
   struct nbio_t* VAR_4 = FUNC_5("test.bin", VAR_0);
   if (!VAR_4)
      FUNC_7("[ERROR]: nbio_open failed (1)");

   FUNC_6(VAR_4, 1024*1024);

   VAR_3 = FUNC_3(VAR_4, &VAR_1);
   if (VAR_1 != 1024*1024)
      FUNC_7("[ERROR]: wrong size (1)");

   FUNC_0(VAR_3, 0x42, 1024*1024);
   FUNC_1(VAR_4);

   while (!FUNC_4(VAR_4))
      VAR_2=1;

   if (!VAR_2)
      FUNC_7("[SUCCESS]: Write finished immediately.");

   FUNC_2(VAR_4);
}
