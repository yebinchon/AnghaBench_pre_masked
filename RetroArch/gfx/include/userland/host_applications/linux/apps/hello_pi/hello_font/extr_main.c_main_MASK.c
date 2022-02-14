
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int GRAPHICS_RESOURCE_HANDLE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int,int) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int,int ,int ,int ,int ,int ,int) ;
 int FUNC_5 (int ,int*,int*) ;
 int FUNC_6 (int ,int ,int,int,int,int ) ;
 int FUNC_7 (int ,int ,int ,int ,int ) ;
 int FUNC_8 (int ,int,int,int ,int *) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int ,char const*,int ,int,int) ;

int FUNC_11(void)
{
   GRAPHICS_RESOURCE_HANDLE VAR_4;
   uint32_t VAR_5, VAR_6;
   int VAR_7=1;
   FUNC_2();
   int VAR_8;

   VAR_8 = FUNC_9(".");
   FUNC_1(VAR_8 == 0);

   VAR_8 = FUNC_5(0, &VAR_5, &VAR_6);
   FUNC_1(VAR_8 == 0);

   VAR_8 = FUNC_8(0, VAR_5, VAR_6, VAR_1, &VAR_4);
   FUNC_1(VAR_8 == 0);


   FUNC_6(VAR_4, 0, 0, VAR_5, VAR_6, FUNC_0(0,0,0,0x00));

   FUNC_4(VAR_4, 0, VAR_7, 0, 0, VAR_2, VAR_0, VAR_3, 1);

   uint32_t VAR_9 = 10;
   while (1) {
      const char *VAR_10 = "The quick brown fox jumps over the lazy dog";
      uint32_t VAR_11 = VAR_6-60+VAR_9/2;
      FUNC_6(VAR_4, 0, 0, VAR_5, VAR_6, FUNC_0(0,0,0,0x00));

      FUNC_6(VAR_4, 0, 40, VAR_5, 1, FUNC_0(0,0,0xff,0xff));


      FUNC_6(VAR_4, 0, VAR_6-40, VAR_5, 1, FUNC_0(0,0xff,0,0xff));


      FUNC_10(VAR_4, VAR_10, 0, VAR_9, VAR_11);
      FUNC_7(VAR_4, 0, 0, 0, 0);
      VAR_9 += 1;
      if (VAR_9 > 50)
         VAR_9 = 10;
   }

   FUNC_4(VAR_4, 0, VAR_7, 0, 0, VAR_2, VAR_0, VAR_3, 0);
   FUNC_3(VAR_4);

   return 0;
}
