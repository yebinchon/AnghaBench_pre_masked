
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int *,char*,unsigned int*) ;

__attribute__((used)) static unsigned int FUNC_5(void)
{
   FILE *VAR_0;
   unsigned int VAR_1;




   VAR_0 = FUNC_3("/sys/class/uio/uio0/maps/map0/size", "r");

   if (!VAR_0)
   {
      FUNC_0("unable to open the uio size file\n");
      FUNC_1(1);
   }

   FUNC_4(VAR_0, "0x%08X", &VAR_1);
   FUNC_2(VAR_0);

   return VAR_1;
}
